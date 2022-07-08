// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Resources
namespace System::Resources {
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Forward declaring type: ResourceFallbackManager
  class ResourceFallbackManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Resources::ResourceFallbackManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::ResourceFallbackManager*, "System.Resources", "ResourceFallbackManager");
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.ResourceFallbackManager
  // [TokenAttribute] Offset: FFFFFFFF
  class ResourceFallbackManager : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerable_1<::System::Globalization::CultureInfo*>*/ {
    public:
    // Nested type: ::System::Resources::ResourceFallbackManager::$GetEnumerator$d__5
    class $GetEnumerator$d__5;
    public:
    // private System.Globalization.CultureInfo m_startingCulture
    // Size: 0x8
    // Offset: 0x10
    ::System::Globalization::CultureInfo* m_startingCulture;
    // Field size check
    static_assert(sizeof(::System::Globalization::CultureInfo*) == 0x8);
    // private System.Globalization.CultureInfo m_neutralResourcesCulture
    // Size: 0x8
    // Offset: 0x18
    ::System::Globalization::CultureInfo* m_neutralResourcesCulture;
    // Field size check
    static_assert(sizeof(::System::Globalization::CultureInfo*) == 0x8);
    // private System.Boolean m_useParents
    // Size: 0x1
    // Offset: 0x20
    bool m_useParents;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::System::Globalization::CultureInfo*>
    operator ::System::Collections::Generic::IEnumerable_1<::System::Globalization::CultureInfo*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::System::Globalization::CultureInfo*>*>(this);
    }
    // Get instance field reference: private System.Globalization.CultureInfo m_startingCulture
    [[deprecated("Use field access instead!")]] ::System::Globalization::CultureInfo*& dyn_m_startingCulture();
    // Get instance field reference: private System.Globalization.CultureInfo m_neutralResourcesCulture
    [[deprecated("Use field access instead!")]] ::System::Globalization::CultureInfo*& dyn_m_neutralResourcesCulture();
    // Get instance field reference: private System.Boolean m_useParents
    [[deprecated("Use field access instead!")]] bool& dyn_m_useParents();
    // System.Void .ctor(System.Globalization.CultureInfo startingCulture, System.Globalization.CultureInfo neutralResourcesCulture, System.Boolean useParents)
    // Offset: 0x1334840
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResourceFallbackManager* New_ctor(::System::Globalization::CultureInfo* startingCulture, ::System::Globalization::CultureInfo* neutralResourcesCulture, bool useParents) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Resources::ResourceFallbackManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResourceFallbackManager*, creationType>(startingCulture, neutralResourcesCulture, useParents)));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x13348E4
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Collections.Generic.IEnumerator`1<System.Globalization.CultureInfo> GetEnumerator()
    // Offset: 0x13348E8
    ::System::Collections::Generic::IEnumerator_1<::System::Globalization::CultureInfo*>* GetEnumerator();
  }; // System.Resources.ResourceFallbackManager
  #pragma pack(pop)
  static check_size<sizeof(ResourceFallbackManager), 32 + sizeof(bool)> __System_Resources_ResourceFallbackManagerSizeCheck;
  static_assert(sizeof(ResourceFallbackManager) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Resources::ResourceFallbackManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Resources::ResourceFallbackManager::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Resources::ResourceFallbackManager::*)()>(&System::Resources::ResourceFallbackManager::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceFallbackManager*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::ResourceFallbackManager::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::System::Globalization::CultureInfo*>* (System::Resources::ResourceFallbackManager::*)()>(&System::Resources::ResourceFallbackManager::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::ResourceFallbackManager*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
