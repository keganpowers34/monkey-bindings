// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.TextureBlender
#include "DigitalOpus/MB/Core/TextureBlender.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: ShaderTextureProperty
  class ShaderTextureProperty;
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: TextureBlenderLegacyBumpDiffuse
  class TextureBlenderLegacyBumpDiffuse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*, "DigitalOpus.MB.Core", "TextureBlenderLegacyBumpDiffuse");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.TextureBlenderLegacyBumpDiffuse
  // [TokenAttribute] Offset: FFFFFFFF
  class TextureBlenderLegacyBumpDiffuse : public ::Il2CppObject/*, public ::DigitalOpus::MB::Core::TextureBlender*/ {
    public:
    public:
    // private System.Boolean doColor
    // Size: 0x1
    // Offset: 0x10
    bool doColor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: doColor and: m_tintColor
    char __padding0[0x3] = {};
    // private UnityEngine.Color m_tintColor
    // Size: 0x10
    // Offset: 0x14
    ::UnityEngine::Color m_tintColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color m_defaultTintColor
    // Size: 0x10
    // Offset: 0x24
    ::UnityEngine::Color m_defaultTintColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Creating interface conversion operator: operator ::DigitalOpus::MB::Core::TextureBlender
    operator ::DigitalOpus::MB::Core::TextureBlender() noexcept {
      return *reinterpret_cast<::DigitalOpus::MB::Core::TextureBlender*>(this);
    }
    // Get instance field reference: private System.Boolean doColor
    [[deprecated("Use field access instead!")]] bool& dyn_doColor();
    // Get instance field reference: private UnityEngine.Color m_tintColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_tintColor();
    // Get instance field reference: private UnityEngine.Color m_defaultTintColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_defaultTintColor();
    // public System.Boolean DoesShaderNameMatch(System.String shaderName)
    // Offset: 0x112C6D8
    bool DoesShaderNameMatch(::StringW shaderName);
    // public System.Void OnBeforeTintTexture(UnityEngine.Material sourceMat, System.String shaderTexturePropertyName)
    // Offset: 0x112C760
    void OnBeforeTintTexture(::UnityEngine::Material* sourceMat, ::StringW shaderTexturePropertyName);
    // public UnityEngine.Color OnBlendTexturePixel(System.String propertyToDoshaderPropertyName, UnityEngine.Color pixelColor)
    // Offset: 0x112C808
    ::UnityEngine::Color OnBlendTexturePixel(::StringW propertyToDoshaderPropertyName, ::UnityEngine::Color pixelColor);
    // public System.Boolean NonTexturePropertiesAreEqual(UnityEngine.Material a, UnityEngine.Material b)
    // Offset: 0x112C864
    bool NonTexturePropertiesAreEqual(::UnityEngine::Material* a, ::UnityEngine::Material* b);
    // public System.Void SetNonTexturePropertyValuesOnResultMaterial(UnityEngine.Material resultMaterial)
    // Offset: 0x112C8D0
    void SetNonTexturePropertyValuesOnResultMaterial(::UnityEngine::Material* resultMaterial);
    // public UnityEngine.Color GetColorIfNoTexture(UnityEngine.Material m, DigitalOpus.MB.Core.ShaderTextureProperty texPropertyName)
    // Offset: 0x112C934
    ::UnityEngine::Color GetColorIfNoTexture(::UnityEngine::Material* m, ::DigitalOpus::MB::Core::ShaderTextureProperty* texPropertyName);
    // public System.Void .ctor()
    // Offset: 0x112CAF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextureBlenderLegacyBumpDiffuse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextureBlenderLegacyBumpDiffuse*, creationType>()));
    }
  }; // DigitalOpus.MB.Core.TextureBlenderLegacyBumpDiffuse
  #pragma pack(pop)
  static check_size<sizeof(TextureBlenderLegacyBumpDiffuse), 36 + sizeof(::UnityEngine::Color)> __DigitalOpus_MB_Core_TextureBlenderLegacyBumpDiffuseSizeCheck;
  static_assert(sizeof(TextureBlenderLegacyBumpDiffuse) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::DoesShaderNameMatch
// Il2CppName: DoesShaderNameMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::*)(::StringW)>(&DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::DoesShaderNameMatch)> {
  static const MethodInfo* get() {
    static auto* shaderName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*), "DoesShaderNameMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shaderName});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::OnBeforeTintTexture
// Il2CppName: OnBeforeTintTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::*)(::UnityEngine::Material*, ::StringW)>(&DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::OnBeforeTintTexture)> {
  static const MethodInfo* get() {
    static auto* sourceMat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* shaderTexturePropertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*), "OnBeforeTintTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sourceMat, shaderTexturePropertyName});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::OnBlendTexturePixel
// Il2CppName: OnBlendTexturePixel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::*)(::StringW, ::UnityEngine::Color)>(&DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::OnBlendTexturePixel)> {
  static const MethodInfo* get() {
    static auto* propertyToDoshaderPropertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pixelColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*), "OnBlendTexturePixel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyToDoshaderPropertyName, pixelColor});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::NonTexturePropertiesAreEqual
// Il2CppName: NonTexturePropertiesAreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::NonTexturePropertiesAreEqual)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*), "NonTexturePropertiesAreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::SetNonTexturePropertyValuesOnResultMaterial
// Il2CppName: SetNonTexturePropertyValuesOnResultMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::*)(::UnityEngine::Material*)>(&DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::SetNonTexturePropertyValuesOnResultMaterial)> {
  static const MethodInfo* get() {
    static auto* resultMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*), "SetNonTexturePropertyValuesOnResultMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultMaterial});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::GetColorIfNoTexture
// Il2CppName: GetColorIfNoTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::*)(::UnityEngine::Material*, ::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::GetColorIfNoTexture)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    static auto* texPropertyName = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ShaderTextureProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse*), "GetColorIfNoTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m, texPropertyName});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::TextureBlenderLegacyBumpDiffuse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
