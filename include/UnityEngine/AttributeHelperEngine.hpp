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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: DisallowMultipleComponent
  class DisallowMultipleComponent;
  // Forward declaring type: ExecuteInEditMode
  class ExecuteInEditMode;
  // Forward declaring type: RequireComponent
  class RequireComponent;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Attribute
  class Attribute;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AttributeHelperEngine
  class AttributeHelperEngine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AttributeHelperEngine);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AttributeHelperEngine*, "UnityEngine", "AttributeHelperEngine");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AttributeHelperEngine
  // [TokenAttribute] Offset: FFFFFFFF
  class AttributeHelperEngine : public ::Il2CppObject {
    public:
    // Get static field: static public UnityEngine.DisallowMultipleComponent[] _disallowMultipleComponentArray
    static ::ArrayW<::UnityEngine::DisallowMultipleComponent*> _get__disallowMultipleComponentArray();
    // Set static field: static public UnityEngine.DisallowMultipleComponent[] _disallowMultipleComponentArray
    static void _set__disallowMultipleComponentArray(::ArrayW<::UnityEngine::DisallowMultipleComponent*> value);
    // Get static field: static public UnityEngine.ExecuteInEditMode[] _executeInEditModeArray
    static ::ArrayW<::UnityEngine::ExecuteInEditMode*> _get__executeInEditModeArray();
    // Set static field: static public UnityEngine.ExecuteInEditMode[] _executeInEditModeArray
    static void _set__executeInEditModeArray(::ArrayW<::UnityEngine::ExecuteInEditMode*> value);
    // Get static field: static public UnityEngine.RequireComponent[] _requireComponentArray
    static ::ArrayW<::UnityEngine::RequireComponent*> _get__requireComponentArray();
    // Set static field: static public UnityEngine.RequireComponent[] _requireComponentArray
    static void _set__requireComponentArray(::ArrayW<::UnityEngine::RequireComponent*> value);
    // static private System.Type GetParentTypeDisallowingMultipleInclusion(System.Type type)
    // Offset: 0x15A23FC
    static ::System::Type* GetParentTypeDisallowingMultipleInclusion(::System::Type* type);
    // static private System.Type[] GetRequiredComponents(System.Type klass)
    // Offset: 0x15A24FC
    static ::ArrayW<::System::Type*> GetRequiredComponents(::System::Type* klass);
    // static private System.Int32 GetExecuteMode(System.Type klass)
    // Offset: 0x15A2810
    static int GetExecuteMode(::System::Type* klass);
    // static private System.Int32 CheckIsEditorScript(System.Type klass)
    // Offset: 0x15A291C
    static int CheckIsEditorScript(::System::Type* klass);
    // static private System.Int32 GetDefaultExecutionOrderFor(System.Type klass)
    // Offset: 0x15A2A04
    static int GetDefaultExecutionOrderFor(::System::Type* klass);
    // static private T GetCustomAttributeOfType(System.Type klass)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T GetCustomAttributeOfType(::System::Type* klass) {
      static_assert(std::is_convertible_v<T, ::System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AttributeHelperEngine::GetCustomAttributeOfType");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine", "AttributeHelperEngine", "GetCustomAttributeOfType", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(klass)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, klass);
    }
    // static private System.Void .cctor()
    // Offset: 0x15A2A88
    static void _cctor();
  }; // UnityEngine.AttributeHelperEngine
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion
// Il2CppName: GetParentTypeDisallowingMultipleInclusion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&UnityEngine::AttributeHelperEngine::GetParentTypeDisallowingMultipleInclusion)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AttributeHelperEngine*), "GetParentTypeDisallowingMultipleInclusion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: UnityEngine::AttributeHelperEngine::GetRequiredComponents
// Il2CppName: GetRequiredComponents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (*)(::System::Type*)>(&UnityEngine::AttributeHelperEngine::GetRequiredComponents)> {
  static const MethodInfo* get() {
    static auto* klass = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AttributeHelperEngine*), "GetRequiredComponents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{klass});
  }
};
// Writing MetadataGetter for method: UnityEngine::AttributeHelperEngine::GetExecuteMode
// Il2CppName: GetExecuteMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Type*)>(&UnityEngine::AttributeHelperEngine::GetExecuteMode)> {
  static const MethodInfo* get() {
    static auto* klass = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AttributeHelperEngine*), "GetExecuteMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{klass});
  }
};
// Writing MetadataGetter for method: UnityEngine::AttributeHelperEngine::CheckIsEditorScript
// Il2CppName: CheckIsEditorScript
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Type*)>(&UnityEngine::AttributeHelperEngine::CheckIsEditorScript)> {
  static const MethodInfo* get() {
    static auto* klass = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AttributeHelperEngine*), "CheckIsEditorScript", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{klass});
  }
};
// Writing MetadataGetter for method: UnityEngine::AttributeHelperEngine::GetDefaultExecutionOrderFor
// Il2CppName: GetDefaultExecutionOrderFor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Type*)>(&UnityEngine::AttributeHelperEngine::GetDefaultExecutionOrderFor)> {
  static const MethodInfo* get() {
    static auto* klass = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AttributeHelperEngine*), "GetDefaultExecutionOrderFor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{klass});
  }
};
// Writing MetadataGetter for method: UnityEngine::AttributeHelperEngine::GetCustomAttributeOfType
// Il2CppName: GetCustomAttributeOfType
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::AttributeHelperEngine::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::AttributeHelperEngine::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AttributeHelperEngine*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
