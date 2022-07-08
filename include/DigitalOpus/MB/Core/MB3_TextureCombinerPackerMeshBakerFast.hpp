// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB_ITextureCombinerPacker
#include "DigitalOpus/MB/Core/MB_ITextureCombinerPacker.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: ProgressUpdateDelegate
  class ProgressUpdateDelegate;
  // Forward declaring type: CombineTexturesIntoAtlasesCoroutineResult
  class MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult;
  // Forward declaring type: MB3_TextureCombiner
  class MB3_TextureCombiner;
  // Forward declaring type: MB2_EditorMethodsInterface
  class MB2_EditorMethodsInterface;
  // Forward declaring type: MB2_LogLevel
  struct MB2_LogLevel;
  // Forward declaring type: AtlasPackingResult
  class AtlasPackingResult;
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
  // Forward declaring type: MB3_TextureCombinerPackerMeshBakerFast
  class MB3_TextureCombinerPackerMeshBakerFast;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast*, "DigitalOpus.MB.Core", "MB3_TextureCombinerPackerMeshBakerFast");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBakerFast
  // [TokenAttribute] Offset: FFFFFFFF
  class MB3_TextureCombinerPackerMeshBakerFast : public ::Il2CppObject/*, public ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*/ {
    public:
    // Nested type: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$ConvertTexturesToReadableFormats$d__1
    class $ConvertTexturesToReadableFormats$d__1;
    // Nested type: ::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::$CreateAtlases$d__3
    class $CreateAtlases$d__3;
    // Creating interface conversion operator: operator ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker
    operator ::DigitalOpus::MB::Core::MB_ITextureCombinerPacker() noexcept {
      return *reinterpret_cast<::DigitalOpus::MB::Core::MB_ITextureCombinerPacker*>(this);
    }
    // public System.Boolean Validate(DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/TexturePipelineData data)
    // Offset: 0x1506E78
    bool Validate(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData* data);
    // public System.Collections.IEnumerator ConvertTexturesToReadableFormats(DigitalOpus.MB.Core.ProgressUpdateDelegate progressInfo, DigitalOpus.MB.Core.MB3_TextureCombiner/CombineTexturesIntoAtlasesCoroutineResult result, DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/TexturePipelineData data, DigitalOpus.MB.Core.MB3_TextureCombiner combiner, DigitalOpus.MB.Core.MB2_EditorMethodsInterface textureEditorMethods, DigitalOpus.MB.Core.MB2_LogLevel LOG_LEVEL)
    // Offset: 0x1506E80
    ::System::Collections::IEnumerator* ConvertTexturesToReadableFormats(::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult* result, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData* data, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL);
    // public DigitalOpus.MB.Core.AtlasPackingResult[] CalculateAtlasRectangles(DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/TexturePipelineData data, System.Boolean doMultiAtlas, DigitalOpus.MB.Core.MB2_LogLevel LOG_LEVEL)
    // Offset: 0x1506F0C
    ::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> CalculateAtlasRectangles(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData* data, bool doMultiAtlas, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL);
    // public System.Collections.IEnumerator CreateAtlases(DigitalOpus.MB.Core.ProgressUpdateDelegate progressInfo, DigitalOpus.MB.Core.MB3_TextureCombinerPipeline/TexturePipelineData data, DigitalOpus.MB.Core.MB3_TextureCombiner combiner, DigitalOpus.MB.Core.AtlasPackingResult packedAtlasRects, UnityEngine.Texture2D[] atlases, DigitalOpus.MB.Core.MB2_EditorMethodsInterface textureEditorMethods, DigitalOpus.MB.Core.MB2_LogLevel LOG_LEVEL)
    // Offset: 0x150715C
    ::System::Collections::IEnumerator* CreateAtlases(::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData* data, ::DigitalOpus::MB::Core::MB3_TextureCombiner* combiner, ::DigitalOpus::MB::Core::AtlasPackingResult* packedAtlasRects, ::ArrayW<::UnityEngine::Texture2D*> atlases, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* textureEditorMethods, ::DigitalOpus::MB::Core::MB2_LogLevel LOG_LEVEL);
    // public System.Void .ctor()
    // Offset: 0x1507238
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_TextureCombinerPackerMeshBakerFast* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_TextureCombinerPackerMeshBakerFast*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.MB3_TextureCombinerPackerMeshBakerFast
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::Validate
// Il2CppName: Validate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData*)>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::Validate)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline/TexturePipelineData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast*), "Validate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::ConvertTexturesToReadableFormats
// Il2CppName: ConvertTexturesToReadableFormats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::*)(::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombiner_CombineTexturesIntoAtlasesCoroutineResult*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::ConvertTexturesToReadableFormats)> {
  static const MethodInfo* get() {
    static auto* progressInfo = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ProgressUpdateDelegate")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombiner/CombineTexturesIntoAtlasesCoroutineResult")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline/TexturePipelineData")->byval_arg;
    static auto* combiner = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombiner")->byval_arg;
    static auto* textureEditorMethods = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_EditorMethodsInterface")->byval_arg;
    static auto* LOG_LEVEL = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_LogLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast*), "ConvertTexturesToReadableFormats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{progressInfo, result, data, combiner, textureEditorMethods, LOG_LEVEL});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::CalculateAtlasRectangles
// Il2CppName: CalculateAtlasRectangles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::DigitalOpus::MB::Core::AtlasPackingResult*> (DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::*)(::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData*, bool, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::CalculateAtlasRectangles)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline/TexturePipelineData")->byval_arg;
    static auto* doMultiAtlas = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* LOG_LEVEL = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_LogLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast*), "CalculateAtlasRectangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, doMultiAtlas, LOG_LEVEL});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::CreateAtlases
// Il2CppName: CreateAtlases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::*)(::DigitalOpus::MB::Core::ProgressUpdateDelegate*, ::DigitalOpus::MB::Core::MB3_TextureCombinerPipeline::TexturePipelineData*, ::DigitalOpus::MB::Core::MB3_TextureCombiner*, ::DigitalOpus::MB::Core::AtlasPackingResult*, ::ArrayW<::UnityEngine::Texture2D*>, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::CreateAtlases)> {
  static const MethodInfo* get() {
    static auto* progressInfo = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ProgressUpdateDelegate")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombinerPipeline/TexturePipelineData")->byval_arg;
    static auto* combiner = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB3_TextureCombiner")->byval_arg;
    static auto* packedAtlasRects = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "AtlasPackingResult")->byval_arg;
    static auto* atlases = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D"), 1)->byval_arg;
    static auto* textureEditorMethods = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_EditorMethodsInterface")->byval_arg;
    static auto* LOG_LEVEL = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_LogLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast*), "CreateAtlases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{progressInfo, data, combiner, packedAtlasRects, atlases, textureEditorMethods, LOG_LEVEL});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_TextureCombinerPackerMeshBakerFast::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
