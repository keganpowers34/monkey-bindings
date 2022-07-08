// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_TextureCombinerPackerRoot
#include "DigitalOpus/MB/Core/MB3_TextureCombinerPackerRoot.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MeshBakerMaterialTexture
  class MeshBakerMaterialTexture;
  // Forward declaring type: MB_TexSet
  class MB_TexSet;
  // Forward declaring type: ShaderTextureProperty
  class ShaderTextureProperty;
  // Forward declaring type: DRect
  struct DRect;
  // Forward declaring type: AtlasPadding
  struct AtlasPadding;
  // Forward declaring type: MB3_TextureCombiner
  class MB3_TextureCombiner;
  // Forward declaring type: ProgressUpdateDelegate
  class ProgressUpdateDelegate;
  // Forward declaring type: MB2_LogLevel
  struct MB2_LogLevel;
  // Forward declaring type: AtlasPackingResult
  class AtlasPackingResult;
  // Forward declaring type: MB2_EditorMethodsInterface
  class MB2_EditorMethodsInterface;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB3_TextureCombinerPackerMeshBaker
  class MB3_TextureCombinerPackerMeshBaker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPackerMeshBaker");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBaker
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_TextureCombinerPackerMeshBaker : public ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerRoot {
    public:
    // Nested type: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::$CreateAtlases$d__1
    class $CreateAtlases$d__1;
    // Nested type: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::$CopyScaledAndTiledToAtlas$d__2
    class $CopyScaledAndTiledToAtlas$d__2;
    // static System.Collections.IEnumerator CopyScaledAndTiledToAtlas(DigitalOpus.MB.Core.MeshBakerMaterialTexture source, DigitalOpus.MB.Core.MB_TexSet sourceMaterial, DigitalOpus.MB.Core.ShaderTextureProperty shaderPropertyName, DigitalOpus.MB.Core.DRect srcSamplingRect, System.Int32 targX, System.Int32 targY, System.Int32 targW, System.Int32 targH, DigitalOpus.MB.Core.AtlasPadding padding, UnityEngine.Color[][] atlasPixels, System.Boolean isNormalMap, DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/TexturePipelineData data, DigitalOpus.MB.Core.MB3_TextureCombiner combiner, DigitalOpus.MB.Core.ProgressUpdateDelegate progressInfo, DigitalOpus.MB.Core.MB2_LogLevel LOG_LEVEL)
    // Offset: 0x117CF70
    static ::System::Collections::IEnumerator* CopyScaledAndTiledToAtlas(::DigitalOpus::MB::Core::MeshBakerMaterialTexture* source, ::DigitalOpus::MB::Core::MB_TexSet* sourceMaterial, ::DigitalOpus::MB::Core::ShaderTextureProperty* shaderPropertyName, ::DigitalOpus::MB::Core::DRect srcSamplingRect, int targX, int targY, int targW, int targH, ::DigitalOpus::MB::Core::AtlasPadding padding, ::ArrayW<::ArrayW<::UnityEngine::Color>> atlasPixels, bool isNormalMap, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData* data, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL);
    // public override System.Boolean Validate(DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/TexturePipelineData data)
    // Offset: 0x117CE8C
    // Implemented from: DigitalOpus.MB.Core.MB3_TextureCombinerPackerRoot
    // Base method: System.Boolean MB3_TextureCombinerPackerRoot::Validate(DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/TexturePipelineData data)
    bool Validate(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData* data);
    // public override System.Collections.IEnumerator CreateAtlases(DigitalOpus.MB.Core.ProgressUpdateDelegate progressInfo, DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/TexturePipelineData data, DigitalOpus.MB.Core.MB3_TextureCombiner combiner, DigitalOpus.MB.Core.AtlasPackingResult packedAtlasRects, UnityEngine.Texture2D[] atlases, DigitalOpus.MB.Core.MB2_EditorMethodsInterface textureEditorMethods, DigitalOpus.MB.Core.MB2_LogLevel LOG_LEVEL)
    // Offset: 0x117CE94
    // Implemented from: DigitalOpus.MB.Core.MB3_TextureCombinerPackerRoot
    // Base method: System.Collections.IEnumerator MB3_TextureCombinerPackerRoot::CreateAtlases(DigitalOpus.MB.Core.ProgressUpdateDelegate progressInfo, DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/TexturePipelineData data, DigitalOpus.MB.Core.MB3_TextureCombiner combiner, DigitalOpus.MB.Core.AtlasPackingResult packedAtlasRects, UnityEngine.Texture2D[] atlases, DigitalOpus.MB.Core.MB2_EditorMethodsInterface textureEditorMethods, DigitalOpus.MB.Core.MB2_LogLevel LOG_LEVEL)
    ::System::Collections::IEnumerator* CreateAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData* data, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::AtlasPackingResult* packedAtlasRects, ::ArrayW<::UnityEngine::Texture2D*> atlases, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL);
    // public System.Void .ctor()
    // Offset: 0x117D09C
    // Implemented from: DigitalOpus.MB.Core.MB3_TextureCombinerPackerRoot
    // Base method: System.Void MB3_TextureCombinerPackerRoot::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_TextureCombinerPackerMeshBaker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_TextureCombinerPackerMeshBaker*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBaker
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::CopyScaledAndTiledToAtlas
// Il2CppName: CopyScaledAndTiledToAtlas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (*)(::DigitalOpus::MB::Core::MeshBakerMaterialTexture*, ::DigitalOpus::MB::Core::MB_TexSet*, ::DigitalOpus::MB::Core::ShaderTextureProperty*, ::DigitalOpus::MB::Core::DRect, int, int, int, int, ::DigitalOpus::MB::Core::AtlasPadding, ::ArrayW<::ArrayW<::UnityEngine::Color>>, bool, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::CopyScaledAndTiledToAtlas)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MeshBakerMaterialTexture")->byval_arg;
    static auto* sourceMaterial = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB_TexSet")->byval_arg;
    static auto* shaderPropertyName = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ShaderTextureProperty")->byval_arg;
    static auto* srcSamplingRect = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "DRect")->byval_arg;
    static auto* targX = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* targY = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* targW = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* targH = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* padding = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "AtlasPadding")->byval_arg;
    static auto* atlasPixels = &il2cpp_functions::array_class_get(il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Color"), 1), 1)->byval_arg;
    static auto* isNormalMap = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline/TexturePipelineData")->byval_arg;
    static auto* combiner = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombiner")->byval_arg;
    static auto* progressInfo = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ProgressUpdateDelegate")->byval_arg;
    static auto* LOG_LEVEL = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_LogLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker*), "CopyScaledAndTiledToAtlas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, sourceMaterial, shaderPropertyName, srcSamplingRect, targX, targY, targW, targH, padding, atlasPixels, isNormalMap, data, combiner, progressInfo, LOG_LEVEL});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::Validate
// Il2CppName: Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData*)>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::Validate)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline/TexturePipelineData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker*), "Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::CreateAtlases
// Il2CppName: CreateAtlases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::*)(::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::ArrayW<::UnityEngine::Texture2D*>, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::CreateAtlases)> {
  static const MethodInfo* get() {
    static auto* progressInfo = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ProgressUpdateDelegate")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline/TexturePipelineData")->byval_arg;
    static auto* combiner = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombiner")->byval_arg;
    static auto* packedAtlasRects = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "AtlasPackingResult")->byval_arg;
    static auto* atlases = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D"), 1)->byval_arg;
    static auto* textureEditorMethods = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_EditorMethodsInterface")->byval_arg;
    static auto* LOG_LEVEL = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_LogLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker*), "CreateAtlases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{progressInfo, data, combiner, packedAtlasRects, atlases, textureEditorMethods, LOG_LEVEL});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBaker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
