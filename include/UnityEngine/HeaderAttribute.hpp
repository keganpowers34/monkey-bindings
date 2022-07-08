// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: HeaderAttribute
  class HeaderAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::HeaderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HeaderAttribute*, "UnityEngine", "HeaderAttribute");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.HeaderAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A69F38
  class HeaderAttribute : public ::UnityEngine::PropertyAttribute {
    public:
    public:
    // public readonly System.String header
    // Size: 0x8
    // Offset: 0x10
    ::StringW header;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return header;
    }
    // Get instance field reference: public readonly System.String header
    [[deprecated("Use field access instead!")]] ::StringW& dyn_header();
    // public System.Void .ctor(System.String header)
    // Offset: 0x15B0EB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HeaderAttribute* New_ctor(::StringW header) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::HeaderAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HeaderAttribute*, creationType>(header)));
    }
  }; // UnityEngine.HeaderAttribute
  #pragma pack(pop)
  static check_size<sizeof(HeaderAttribute), 16 + sizeof(::StringW)> __UnityEngine_HeaderAttributeSizeCheck;
  static_assert(sizeof(HeaderAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::HeaderAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
