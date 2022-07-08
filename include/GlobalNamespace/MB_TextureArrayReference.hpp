// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2DArray
  class Texture2DArray;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MB_TextureArrayReference
  class MB_TextureArrayReference;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MB_TextureArrayReference);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MB_TextureArrayReference*, "", "MB_TextureArrayReference");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MB_TextureArrayReference
  // [TokenAttribute] Offset: FFFFFFFF
  class MB_TextureArrayReference : public ::Il2CppObject {
    public:
    public:
    // public System.String texFromatSetName
    // Size: 0x8
    // Offset: 0x10
    ::StringW texFromatSetName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.Texture2DArray texArray
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Texture2DArray* texArray;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2DArray*) == 0x8);
    public:
    // Get instance field reference: public System.String texFromatSetName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_texFromatSetName();
    // Get instance field reference: public UnityEngine.Texture2DArray texArray
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2DArray*& dyn_texArray();
    // public System.Void .ctor(System.String formatSetName, UnityEngine.Texture2DArray ta)
    // Offset: 0x1AADDB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB_TextureArrayReference* New_ctor(::StringW formatSetName, ::UnityEngine::Texture2DArray* ta) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MB_TextureArrayReference::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB_TextureArrayReference*, creationType>(formatSetName, ta)));
    }
  }; // MB_TextureArrayReference
  #pragma pack(pop)
  static check_size<sizeof(MB_TextureArrayReference), 24 + sizeof(::UnityEngine::Texture2DArray*)> __GlobalNamespace_MB_TextureArrayReferenceSizeCheck;
  static_assert(sizeof(MB_TextureArrayReference) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MB_TextureArrayReference::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
