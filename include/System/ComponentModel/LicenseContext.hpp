// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IServiceProvider
#include "System/IServiceProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: LicenseUsageMode
  struct LicenseUsageMode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: LicenseContext
  class LicenseContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::LicenseContext);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::LicenseContext*, "System.ComponentModel", "LicenseContext");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.LicenseContext
  // [TokenAttribute] Offset: FFFFFFFF
  class LicenseContext : public ::Il2CppObject/*, public ::System::IServiceProvider*/ {
    public:
    // Creating interface conversion operator: operator ::System::IServiceProvider
    operator ::System::IServiceProvider() noexcept {
      return *reinterpret_cast<::System::IServiceProvider*>(this);
    }
    // public System.ComponentModel.LicenseUsageMode get_UsageMode()
    // Offset: 0x118AD2C
    ::System::ComponentModel::LicenseUsageMode get_UsageMode();
    // public System.String GetSavedLicenseKey(System.Type type, System.Reflection.Assembly resourceAssembly)
    // Offset: 0x118AD34
    ::StringW GetSavedLicenseKey(::System::Type* type, ::System::Reflection::Assembly* resourceAssembly);
    // public System.Object GetService(System.Type type)
    // Offset: 0x118AD3C
    ::Il2CppObject* GetService(::System::Type* type);
    // public System.Void SetSavedLicenseKey(System.Type type, System.String key)
    // Offset: 0x118AD44
    void SetSavedLicenseKey(::System::Type* type, ::StringW key);
    // public System.Void .ctor()
    // Offset: 0x11811C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LicenseContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::LicenseContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LicenseContext*, creationType>()));
    }
  }; // System.ComponentModel.LicenseContext
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::LicenseContext::get_UsageMode
// Il2CppName: get_UsageMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::LicenseUsageMode (System::ComponentModel::LicenseContext::*)()>(&System::ComponentModel::LicenseContext::get_UsageMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseContext*), "get_UsageMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseContext::GetSavedLicenseKey
// Il2CppName: GetSavedLicenseKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::LicenseContext::*)(::System::Type*, ::System::Reflection::Assembly*)>(&System::ComponentModel::LicenseContext::GetSavedLicenseKey)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* resourceAssembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseContext*), "GetSavedLicenseKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, resourceAssembly});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseContext::GetService
// Il2CppName: GetService
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::LicenseContext::*)(::System::Type*)>(&System::ComponentModel::LicenseContext::GetService)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseContext*), "GetService", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseContext::SetSavedLicenseKey
// Il2CppName: SetSavedLicenseKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::LicenseContext::*)(::System::Type*, ::StringW)>(&System::ComponentModel::LicenseContext::SetSavedLicenseKey)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicenseContext*), "SetSavedLicenseKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, key});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicenseContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
