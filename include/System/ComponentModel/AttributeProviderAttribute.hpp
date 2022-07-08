// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: AttributeProviderAttribute
  class AttributeProviderAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::AttributeProviderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AttributeProviderAttribute*, "System.ComponentModel", "AttributeProviderAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.AttributeProviderAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A5E658
  class AttributeProviderAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String _typeName
    // Size: 0x8
    // Offset: 0x10
    ::StringW typeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _propertyName
    // Size: 0x8
    // Offset: 0x18
    ::StringW propertyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String _typeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__typeName();
    // Get instance field reference: private System.String _propertyName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__propertyName();
    // public System.Void .ctor(System.String typeName)
    // Offset: 0x1146684
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AttributeProviderAttribute* New_ctor(::StringW typeName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::AttributeProviderAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AttributeProviderAttribute*, creationType>(typeName)));
    }
    // public System.Void .ctor(System.String typeName, System.String propertyName)
    // Offset: 0x1146720
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AttributeProviderAttribute* New_ctor(::StringW typeName, ::StringW propertyName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::AttributeProviderAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AttributeProviderAttribute*, creationType>(typeName, propertyName)));
    }
    // public System.Void .ctor(System.Type type)
    // Offset: 0x11467E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AttributeProviderAttribute* New_ctor(::System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::AttributeProviderAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AttributeProviderAttribute*, creationType>(type)));
    }
    // public System.String get_TypeName()
    // Offset: 0x11468C8
    ::StringW get_TypeName();
    // public System.String get_PropertyName()
    // Offset: 0x11468D0
    ::StringW get_PropertyName();
  }; // System.ComponentModel.AttributeProviderAttribute
  #pragma pack(pop)
  static check_size<sizeof(AttributeProviderAttribute), 24 + sizeof(::StringW)> __System_ComponentModel_AttributeProviderAttributeSizeCheck;
  static_assert(sizeof(AttributeProviderAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::AttributeProviderAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::AttributeProviderAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::AttributeProviderAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::AttributeProviderAttribute::get_TypeName
// Il2CppName: get_TypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::AttributeProviderAttribute::*)()>(&System::ComponentModel::AttributeProviderAttribute::get_TypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AttributeProviderAttribute*), "get_TypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::AttributeProviderAttribute::get_PropertyName
// Il2CppName: get_PropertyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::AttributeProviderAttribute::*)()>(&System::ComponentModel::AttributeProviderAttribute::get_PropertyName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AttributeProviderAttribute*), "get_PropertyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
