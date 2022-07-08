// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB_TextureTilingTreatment
#include "DigitalOpus/MB/Core/MB_TextureTilingTreatment.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MeshBakerMaterialTexture
  class MeshBakerMaterialTexture;
  // Forward declaring type: MatsAndGOs
  class MatsAndGOs;
  // Forward declaring type: DRect
  struct DRect;
  // Forward declaring type: MB3_TextureCombinerNonTextureProperties
  class MB3_TextureCombinerNonTextureProperties;
  // Forward declaring type: MB3_TextureCombiner
  class MB3_TextureCombiner;
  // Forward declaring type: ShaderTextureProperty
  class ShaderTextureProperty;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB_TexSet
  class MB_TexSet;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB_TexSet);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB_TexSet*, "DigitalOpus.MB.Core", "MB_TexSet");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB_TexSet
  // [TokenAttribute] Offset: FFFFFFFF
  class MB_TexSet : public ::Il2CppObject {
    public:
    // Nested type: ::DigitalOpus::MB::Core::MB_TexSet::PipelineVariation
    class PipelineVariation;
    // Nested type: ::DigitalOpus::MB::Core::MB_TexSet::PipelineVariationAllTexturesUseSameMatTiling
    class PipelineVariationAllTexturesUseSameMatTiling;
    // Nested type: ::DigitalOpus::MB::Core::MB_TexSet::PipelineVariationSomeTexturesUseDifferentMatTiling
    class PipelineVariationSomeTexturesUseDifferentMatTiling;
    public:
    // public DigitalOpus.MB.Core.MeshBakerMaterialTexture[] ts
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*> ts;
    // Field size check
    static_assert(sizeof(::ArrayW<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>) == 0x8);
    // public DigitalOpus.MB.Core.MatsAndGOs matsAndGOs
    // Size: 0x8
    // Offset: 0x18
    ::DigitalOpus::MB::Core::MatsAndGOs* matsAndGOs;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MatsAndGOs*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAEEF04
    // private System.Boolean <allTexturesUseSameMatTiling>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool allTexturesUseSameMatTiling;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xAEEF14
    // private System.Boolean <thisIsOnlyTexSetInAtlas>k__BackingField
    // Size: 0x1
    // Offset: 0x21
    bool thisIsOnlyTexSetInAtlas;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: thisIsOnlyTexSetInAtlas and: tilingTreatment
    char __padding3[0x2] = {};
    // [CompilerGeneratedAttribute] Offset: 0xAEEF24
    // private DigitalOpus.MB.Core.MB_TextureTilingTreatment <tilingTreatment>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    ::DigitalOpus::MB::Core::MB_TextureTilingTreatment tilingTreatment;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB_TextureTilingTreatment) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xAEEF34
    // private UnityEngine.Vector2 <obUVoffset>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Vector2 obUVoffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAEEF44
    // private UnityEngine.Vector2 <obUVscale>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Vector2 obUVscale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public System.Int32 idealWidth
    // Size: 0x4
    // Offset: 0x38
    int idealWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 idealHeight
    // Size: 0x4
    // Offset: 0x3C
    int idealHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private DigitalOpus.MB.Core.MB_TexSet/PipelineVariation pipelineVariation
    // Size: 0x8
    // Offset: 0x40
    ::DigitalOpus::MB::Core::MB_TexSet::PipelineVariation* pipelineVariation;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB_TexSet::PipelineVariation*) == 0x8);
    public:
    // Get instance field reference: public DigitalOpus.MB.Core.MeshBakerMaterialTexture[] ts
    [[deprecated("Use field access instead!")]] ::ArrayW<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*>& dyn_ts();
    // Get instance field reference: public DigitalOpus.MB.Core.MatsAndGOs matsAndGOs
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MatsAndGOs*& dyn_matsAndGOs();
    // Get instance field reference: private System.Boolean <allTexturesUseSameMatTiling>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$allTexturesUseSameMatTiling$k__BackingField();
    // Get instance field reference: private System.Boolean <thisIsOnlyTexSetInAtlas>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$thisIsOnlyTexSetInAtlas$k__BackingField();
    // Get instance field reference: private DigitalOpus.MB.Core.MB_TextureTilingTreatment <tilingTreatment>k__BackingField
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB_TextureTilingTreatment& dyn_$tilingTreatment$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector2 <obUVoffset>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_$obUVoffset$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector2 <obUVscale>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_$obUVscale$k__BackingField();
    // Get instance field reference: public System.Int32 idealWidth
    [[deprecated("Use field access instead!")]] int& dyn_idealWidth();
    // Get instance field reference: public System.Int32 idealHeight
    [[deprecated("Use field access instead!")]] int& dyn_idealHeight();
    // Get instance field reference: private DigitalOpus.MB.Core.MB_TexSet/PipelineVariation pipelineVariation
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB_TexSet::PipelineVariation*& dyn_pipelineVariation();
    // public System.Boolean get_allTexturesUseSameMatTiling()
    // Offset: 0x151B804
    bool get_allTexturesUseSameMatTiling();
    // private System.Void set_allTexturesUseSameMatTiling(System.Boolean value)
    // Offset: 0x151B80C
    void set_allTexturesUseSameMatTiling(bool value);
    // public System.Boolean get_thisIsOnlyTexSetInAtlas()
    // Offset: 0x151B818
    bool get_thisIsOnlyTexSetInAtlas();
    // private System.Void set_thisIsOnlyTexSetInAtlas(System.Boolean value)
    // Offset: 0x151B820
    void set_thisIsOnlyTexSetInAtlas(bool value);
    // public DigitalOpus.MB.Core.MB_TextureTilingTreatment get_tilingTreatment()
    // Offset: 0x151B82C
    ::DigitalOpus::MB::Core::MB_TextureTilingTreatment get_tilingTreatment();
    // private System.Void set_tilingTreatment(DigitalOpus.MB.Core.MB_TextureTilingTreatment value)
    // Offset: 0x151B834
    void set_tilingTreatment(::DigitalOpus::MB::Core::MB_TextureTilingTreatment value);
    // public UnityEngine.Vector2 get_obUVoffset()
    // Offset: 0x151B83C
    ::UnityEngine::Vector2 get_obUVoffset();
    // private System.Void set_obUVoffset(UnityEngine.Vector2 value)
    // Offset: 0x151B844
    void set_obUVoffset(::UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_obUVscale()
    // Offset: 0x151B84C
    ::UnityEngine::Vector2 get_obUVscale();
    // private System.Void set_obUVscale(UnityEngine.Vector2 value)
    // Offset: 0x151B854
    void set_obUVscale(::UnityEngine::Vector2 value);
    // DigitalOpus.MB.Core.DRect get_obUVrect()
    // Offset: 0x151B85C
    ::DigitalOpus::MB::Core::DRect get_obUVrect();
    // public System.Void .ctor(DigitalOpus.MB.Core.MeshBakerMaterialTexture[] tss, UnityEngine.Vector2 uvOffset, UnityEngine.Vector2 uvScale, DigitalOpus.MB.Core.MB_TextureTilingTreatment treatment)
    // Offset: 0x1515AAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB_TexSet* New_ctor(::ArrayW<::DigitalOpus::MB::Core::MeshBakerMaterialTexture*> tss, ::UnityEngine::Vector2 uvOffset, ::UnityEngine::Vector2 uvScale, ::DigitalOpus::MB::Core::MB_TextureTilingTreatment treatment) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB_TexSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB_TexSet*, creationType>(tss, uvOffset, uvScale, treatment)));
    }
    // System.Boolean IsEqual(System.Object obj, System.Boolean fixOutOfBoundsUVs, DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties resultMaterialTextureBlender)
    // Offset: 0x1512370
    bool IsEqual(::Il2CppObject* obj, bool fixOutOfBoundsUVs, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* resultMaterialTextureBlender);
    // public UnityEngine.Vector2 GetMaxRawTextureHeightWidth()
    // Offset: 0x150B134
    ::UnityEngine::Vector2 GetMaxRawTextureHeightWidth();
    // private UnityEngine.Rect GetEncapsulatingSamplingRectIfTilingSame()
    // Offset: 0x151B898
    ::UnityEngine::Rect GetEncapsulatingSamplingRectIfTilingSame();
    // public System.Void SetEncapsulatingSamplingRectWhenMergingTexSets(DigitalOpus.MB.Core.DRect newEncapsulatingSamplingRect)
    // Offset: 0x151B92C
    void SetEncapsulatingSamplingRectWhenMergingTexSets(::DigitalOpus::MB::Core::DRect newEncapsulatingSamplingRect);
    // public System.Void SetEncapsulatingSamplingRectForTesting(System.Int32 propIdx, DigitalOpus.MB.Core.DRect newEncapsulatingSamplingRect)
    // Offset: 0x151B9CC
    void SetEncapsulatingSamplingRectForTesting(int propIdx, ::DigitalOpus::MB::Core::DRect newEncapsulatingSamplingRect);
    // public System.Void SetEncapsulatingRect(System.Int32 propIdx, System.Boolean considerMeshUVs)
    // Offset: 0x1513DE8
    void SetEncapsulatingRect(int propIdx, bool considerMeshUVs);
    // public System.Void CreateColoredTexToReplaceNull(System.String propName, System.Int32 propIdx, System.Boolean considerMeshUVs, DigitalOpus.MB.Core.MB3_TextureCombiner combiner, UnityEngine.Color col, System.Boolean isLinear)
    // Offset: 0x150CAF0
    void CreateColoredTexToReplaceNull(::StringW propName, int propIdx, bool considerMeshUVs, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::UnityEngine::Color col, bool isLinear);
    // public System.Void SetThisIsOnlyTexSetInAtlasTrue()
    // Offset: 0x1513DDC
    void SetThisIsOnlyTexSetInAtlasTrue();
    // public System.Void SetAllTexturesUseSameMatTilingTrue()
    // Offset: 0x151BA18
    void SetAllTexturesUseSameMatTilingTrue();
    // public System.Void AdjustResultMaterialNonTextureProperties(UnityEngine.Material resultMaterial, System.Collections.Generic.List`1<DigitalOpus.MB.Core.ShaderTextureProperty> props)
    // Offset: 0x1516574
    void AdjustResultMaterialNonTextureProperties(::UnityEngine::Material* resultMaterial, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* props);
    // public System.Void SetTilingTreatmentAndAdjustEncapsulatingSamplingRect(DigitalOpus.MB.Core.MB_TextureTilingTreatment newTilingTreatment)
    // Offset: 0x150B278
    void SetTilingTreatmentAndAdjustEncapsulatingSamplingRect(::DigitalOpus::MB::Core::MB_TextureTilingTreatment newTilingTreatment);
    // System.Void GetRectsForTextureBakeResults(out UnityEngine.Rect allPropsUseSameTiling_encapsulatingSamplingRect, out UnityEngine.Rect propsUseDifferntTiling_obUVRect)
    // Offset: 0x15105A0
    void GetRectsForTextureBakeResults(ByRef<::UnityEngine::Rect> allPropsUseSameTiling_encapsulatingSamplingRect, ByRef<::UnityEngine::Rect> propsUseDifferntTiling_obUVRect);
    // UnityEngine.Rect GetMaterialTilingRectForTextureBakerResults(System.Int32 materialIndex)
    // Offset: 0x1510668
    ::UnityEngine::Rect GetMaterialTilingRectForTextureBakerResults(int materialIndex);
    // System.Void CalcInitialFullSamplingRects(System.Boolean fixOutOfBoundsUVs)
    // Offset: 0x151BA84
    void CalcInitialFullSamplingRects(bool fixOutOfBoundsUVs);
    // System.Void CalcMatAndUVSamplingRects()
    // Offset: 0x151BC8C
    void CalcMatAndUVSamplingRects();
    // public System.Boolean AllTexturesAreSameForMerge(DigitalOpus.MB.Core.MB_TexSet other, System.Boolean considerNonTextureProperties, DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties resultMaterialTextureBlender)
    // Offset: 0x151BDE4
    bool AllTexturesAreSameForMerge(::DigitalOpus::MB::Core::MB_TexSet* other, bool considerNonTextureProperties, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties* resultMaterialTextureBlender);
    // public System.Void DrawRectsToMergeGizmos(UnityEngine.Color encC, UnityEngine.Color innerC)
    // Offset: 0x151C038
    void DrawRectsToMergeGizmos(::UnityEngine::Color encC, ::UnityEngine::Color innerC);
    // System.String GetDescription()
    // Offset: 0x151C2FC
    ::StringW GetDescription();
    // System.String GetMatSubrectDescriptions()
    // Offset: 0x151C5B0
    ::StringW GetMatSubrectDescriptions();
  }; // DigitalOpus.MB.Core.MB_TexSet
  #pragma pack(pop)
  static check_size<sizeof(MB_TexSet), 64 + sizeof(::DigitalOpus::MB::Core::MB_TexSet::PipelineVariation*)> __DigitalOpus_MB_Core_MB_TexSetSizeCheck;
  static_assert(sizeof(MB_TexSet) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::get_allTexturesUseSameMatTiling
// Il2CppName: get_allTexturesUseSameMatTiling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB_TexSet::*)()>(&DigitalOpus::MB::Core::MB_TexSet::get_allTexturesUseSameMatTiling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "get_allTexturesUseSameMatTiling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::set_allTexturesUseSameMatTiling
// Il2CppName: set_allTexturesUseSameMatTiling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB_TexSet::*)(bool)>(&DigitalOpus::MB::Core::MB_TexSet::set_allTexturesUseSameMatTiling)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "set_allTexturesUseSameMatTiling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::get_thisIsOnlyTexSetInAtlas
// Il2CppName: get_thisIsOnlyTexSetInAtlas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB_TexSet::*)()>(&DigitalOpus::MB::Core::MB_TexSet::get_thisIsOnlyTexSetInAtlas)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "get_thisIsOnlyTexSetInAtlas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::set_thisIsOnlyTexSetInAtlas
// Il2CppName: set_thisIsOnlyTexSetInAtlas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB_TexSet::*)(bool)>(&DigitalOpus::MB::Core::MB_TexSet::set_thisIsOnlyTexSetInAtlas)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "set_thisIsOnlyTexSetInAtlas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::get_tilingTreatment
// Il2CppName: get_tilingTreatment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DigitalOpus::MB::Core::MB_TextureTilingTreatment (DigitalOpus::MB::Core::MB_TexSet::*)()>(&DigitalOpus::MB::Core::MB_TexSet::get_tilingTreatment)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "get_tilingTreatment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::set_tilingTreatment
// Il2CppName: set_tilingTreatment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB_TexSet::*)(::DigitalOpus::MB::Core::MB_TextureTilingTreatment)>(&DigitalOpus::MB::Core::MB_TexSet::set_tilingTreatment)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB_TextureTilingTreatment")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "set_tilingTreatment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::get_obUVoffset
// Il2CppName: get_obUVoffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (DigitalOpus::MB::Core::MB_TexSet::*)()>(&DigitalOpus::MB::Core::MB_TexSet::get_obUVoffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "get_obUVoffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::set_obUVoffset
// Il2CppName: set_obUVoffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB_TexSet::*)(::UnityEngine::Vector2)>(&DigitalOpus::MB::Core::MB_TexSet::set_obUVoffset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "set_obUVoffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::get_obUVscale
// Il2CppName: get_obUVscale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (DigitalOpus::MB::Core::MB_TexSet::*)()>(&DigitalOpus::MB::Core::MB_TexSet::get_obUVscale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "get_obUVscale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::set_obUVscale
// Il2CppName: set_obUVscale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB_TexSet::*)(::UnityEngine::Vector2)>(&DigitalOpus::MB::Core::MB_TexSet::set_obUVscale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "set_obUVscale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::get_obUVrect
// Il2CppName: get_obUVrect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DigitalOpus::MB::Core::DRect (DigitalOpus::MB::Core::MB_TexSet::*)()>(&DigitalOpus::MB::Core::MB_TexSet::get_obUVrect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "get_obUVrect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::IsEqual
// Il2CppName: IsEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB_TexSet::*)(::Il2CppObject*, bool, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*)>(&DigitalOpus::MB::Core::MB_TexSet::IsEqual)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* fixOutOfBoundsUVs = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* resultMaterialTextureBlender = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombinerNonTextureProperties")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "IsEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, fixOutOfBoundsUVs, resultMaterialTextureBlender});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::GetMaxRawTextureHeightWidth
// Il2CppName: GetMaxRawTextureHeightWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (DigitalOpus::MB::Core::MB_TexSet::*)()>(&DigitalOpus::MB::Core::MB_TexSet::GetMaxRawTextureHeightWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "GetMaxRawTextureHeightWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::GetEncapsulatingSamplingRectIfTilingSame
// Il2CppName: GetEncapsulatingSamplingRectIfTilingSame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (DigitalOpus::MB::Core::MB_TexSet::*)()>(&DigitalOpus::MB::Core::MB_TexSet::GetEncapsulatingSamplingRectIfTilingSame)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "GetEncapsulatingSamplingRectIfTilingSame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::SetEncapsulatingSamplingRectWhenMergingTexSets
// Il2CppName: SetEncapsulatingSamplingRectWhenMergingTexSets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB_TexSet::*)(::DigitalOpus::MB::Core::DRect)>(&DigitalOpus::MB::Core::MB_TexSet::SetEncapsulatingSamplingRectWhenMergingTexSets)> {
  static const MethodInfo* get() {
    static auto* newEncapsulatingSamplingRect = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "DRect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "SetEncapsulatingSamplingRectWhenMergingTexSets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newEncapsulatingSamplingRect});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::SetEncapsulatingSamplingRectForTesting
// Il2CppName: SetEncapsulatingSamplingRectForTesting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB_TexSet::*)(int, ::DigitalOpus::MB::Core::DRect)>(&DigitalOpus::MB::Core::MB_TexSet::SetEncapsulatingSamplingRectForTesting)> {
  static const MethodInfo* get() {
    static auto* propIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* newEncapsulatingSamplingRect = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "DRect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "SetEncapsulatingSamplingRectForTesting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propIdx, newEncapsulatingSamplingRect});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::SetEncapsulatingRect
// Il2CppName: SetEncapsulatingRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB_TexSet::*)(int, bool)>(&DigitalOpus::MB::Core::MB_TexSet::SetEncapsulatingRect)> {
  static const MethodInfo* get() {
    static auto* propIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* considerMeshUVs = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "SetEncapsulatingRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propIdx, considerMeshUVs});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::CreateColoredTexToReplaceNull
// Il2CppName: CreateColoredTexToReplaceNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB_TexSet::*)(::StringW, int, bool, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::UnityEngine::Color, bool)>(&DigitalOpus::MB::Core::MB_TexSet::CreateColoredTexToReplaceNull)> {
  static const MethodInfo* get() {
    static auto* propName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* propIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* considerMeshUVs = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* combiner = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombiner")->byval_arg;
    static auto* col = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* isLinear = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "CreateColoredTexToReplaceNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propName, propIdx, considerMeshUVs, combiner, col, isLinear});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::SetThisIsOnlyTexSetInAtlasTrue
// Il2CppName: SetThisIsOnlyTexSetInAtlasTrue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB_TexSet::*)()>(&DigitalOpus::MB::Core::MB_TexSet::SetThisIsOnlyTexSetInAtlasTrue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "SetThisIsOnlyTexSetInAtlasTrue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::SetAllTexturesUseSameMatTilingTrue
// Il2CppName: SetAllTexturesUseSameMatTilingTrue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB_TexSet::*)()>(&DigitalOpus::MB::Core::MB_TexSet::SetAllTexturesUseSameMatTilingTrue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "SetAllTexturesUseSameMatTilingTrue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::AdjustResultMaterialNonTextureProperties
// Il2CppName: AdjustResultMaterialNonTextureProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB_TexSet::*)(::UnityEngine::Material*, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*)>(&DigitalOpus::MB::Core::MB_TexSet::AdjustResultMaterialNonTextureProperties)> {
  static const MethodInfo* get() {
    static auto* resultMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* props = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ShaderTextureProperty")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "AdjustResultMaterialNonTextureProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultMaterial, props});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::SetTilingTreatmentAndAdjustEncapsulatingSamplingRect
// Il2CppName: SetTilingTreatmentAndAdjustEncapsulatingSamplingRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB_TexSet::*)(::DigitalOpus::MB::Core::MB_TextureTilingTreatment)>(&DigitalOpus::MB::Core::MB_TexSet::SetTilingTreatmentAndAdjustEncapsulatingSamplingRect)> {
  static const MethodInfo* get() {
    static auto* newTilingTreatment = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB_TextureTilingTreatment")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "SetTilingTreatmentAndAdjustEncapsulatingSamplingRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newTilingTreatment});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::GetRectsForTextureBakeResults
// Il2CppName: GetRectsForTextureBakeResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB_TexSet::*)(ByRef<::UnityEngine::Rect>, ByRef<::UnityEngine::Rect>)>(&DigitalOpus::MB::Core::MB_TexSet::GetRectsForTextureBakeResults)> {
  static const MethodInfo* get() {
    static auto* allPropsUseSameTiling_encapsulatingSamplingRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    static auto* propsUseDifferntTiling_obUVRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "GetRectsForTextureBakeResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{allPropsUseSameTiling_encapsulatingSamplingRect, propsUseDifferntTiling_obUVRect});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::GetMaterialTilingRectForTextureBakerResults
// Il2CppName: GetMaterialTilingRectForTextureBakerResults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (DigitalOpus::MB::Core::MB_TexSet::*)(int)>(&DigitalOpus::MB::Core::MB_TexSet::GetMaterialTilingRectForTextureBakerResults)> {
  static const MethodInfo* get() {
    static auto* materialIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "GetMaterialTilingRectForTextureBakerResults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{materialIndex});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::CalcInitialFullSamplingRects
// Il2CppName: CalcInitialFullSamplingRects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB_TexSet::*)(bool)>(&DigitalOpus::MB::Core::MB_TexSet::CalcInitialFullSamplingRects)> {
  static const MethodInfo* get() {
    static auto* fixOutOfBoundsUVs = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "CalcInitialFullSamplingRects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fixOutOfBoundsUVs});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::CalcMatAndUVSamplingRects
// Il2CppName: CalcMatAndUVSamplingRects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB_TexSet::*)()>(&DigitalOpus::MB::Core::MB_TexSet::CalcMatAndUVSamplingRects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "CalcMatAndUVSamplingRects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::AllTexturesAreSameForMerge
// Il2CppName: AllTexturesAreSameForMerge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB_TexSet::*)(::DigitalOpus::MB::Core::MB_TexSet*, bool, ::DigitalOpus::MB::Core::MB3_TextureCombinerNonTextureProperties*)>(&DigitalOpus::MB::Core::MB_TexSet::AllTexturesAreSameForMerge)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB_TexSet")->byval_arg;
    static auto* considerNonTextureProperties = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* resultMaterialTextureBlender = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombinerNonTextureProperties")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "AllTexturesAreSameForMerge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other, considerNonTextureProperties, resultMaterialTextureBlender});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::DrawRectsToMergeGizmos
// Il2CppName: DrawRectsToMergeGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::MB_TexSet::*)(::UnityEngine::Color, ::UnityEngine::Color)>(&DigitalOpus::MB::Core::MB_TexSet::DrawRectsToMergeGizmos)> {
  static const MethodInfo* get() {
    static auto* encC = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* innerC = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "DrawRectsToMergeGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encC, innerC});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::GetDescription
// Il2CppName: GetDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (DigitalOpus::MB::Core::MB_TexSet::*)()>(&DigitalOpus::MB::Core::MB_TexSet::GetDescription)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "GetDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TexSet::GetMatSubrectDescriptions
// Il2CppName: GetMatSubrectDescriptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (DigitalOpus::MB::Core::MB_TexSet::*)()>(&DigitalOpus::MB::Core::MB_TexSet::GetMatSubrectDescriptions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TexSet*), "GetMatSubrectDescriptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
