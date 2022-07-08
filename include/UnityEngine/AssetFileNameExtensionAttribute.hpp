// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AssetFileNameExtensionAttribute
  class AssetFileNameExtensionAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AssetFileNameExtensionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetFileNameExtensionAttribute*, "UnityEngine", "AssetFileNameExtensionAttribute");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AssetFileNameExtensionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: A658D0
  // [AttributeUsageAttribute] Offset: A658D0
  class AssetFileNameExtensionAttribute : public ::System::Attribute {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xA65ED8
    // [DebuggerBrowsableAttribute] Offset: 0xA65ED8
    // private readonly System.String <preferredExtension>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW preferredExtension;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xA65F14
    // [DebuggerBrowsableAttribute] Offset: 0xA65F14
    // private readonly System.Collections.Generic.IEnumerable`1<System.String> <otherExtensions>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::IEnumerable_1<::StringW>* otherExtensions;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerable_1<::StringW>*) == 0x8);
    public:
    // Get instance field reference: private readonly System.String <preferredExtension>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$preferredExtension$k__BackingField();
    // Get instance field reference: private readonly System.Collections.Generic.IEnumerable`1<System.String> <otherExtensions>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IEnumerable_1<::StringW>*& dyn_$otherExtensions$k__BackingField();
    // public System.Void .ctor(System.String preferredExtension, params System.String[] otherExtensions)
    // Offset: 0x1B531DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetFileNameExtensionAttribute* New_ctor(::StringW preferredExtension, ::ArrayW<::StringW> otherExtensions) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AssetFileNameExtensionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetFileNameExtensionAttribute*, creationType>(preferredExtension, otherExtensions)));
    }
  }; // UnityEngine.AssetFileNameExtensionAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssetFileNameExtensionAttribute), 24 + sizeof(::System::Collections::Generic::IEnumerable_1<::StringW>*)> __UnityEngine_AssetFileNameExtensionAttributeSizeCheck;
  static_assert(sizeof(AssetFileNameExtensionAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AssetFileNameExtensionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
