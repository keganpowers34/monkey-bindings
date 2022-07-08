// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.ComponentModel.ToolboxItemFilterType
#include "System/ComponentModel/ToolboxItemFilterType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ToolboxItemFilterAttribute
  class ToolboxItemFilterAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ToolboxItemFilterAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ToolboxItemFilterAttribute*, "System.ComponentModel", "ToolboxItemFilterAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ToolboxItemFilterAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A5F04C
  class ToolboxItemFilterAttribute : public ::System::Attribute {
    public:
    public:
    // private System.ComponentModel.ToolboxItemFilterType filterType
    // Size: 0x4
    // Offset: 0x10
    ::System::ComponentModel::ToolboxItemFilterType filterType;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::ToolboxItemFilterType) == 0x4);
    // Padding between fields: filterType and: filterString
    char __padding0[0x4] = {};
    // private System.String filterString
    // Size: 0x8
    // Offset: 0x18
    ::StringW filterString;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String typeId
    // Size: 0x8
    // Offset: 0x20
    ::StringW typeId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.ComponentModel.ToolboxItemFilterType filterType
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::ToolboxItemFilterType& dyn_filterType();
    // Get instance field reference: private System.String filterString
    [[deprecated("Use field access instead!")]] ::StringW& dyn_filterString();
    // Get instance field reference: private System.String typeId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_typeId();
    // public System.Void .ctor(System.String filterString)
    // Offset: 0x123E8E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ToolboxItemFilterAttribute* New_ctor(::StringW filterString) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ToolboxItemFilterAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ToolboxItemFilterAttribute*, creationType>(filterString)));
    }
    // public System.Void .ctor(System.String filterString, System.ComponentModel.ToolboxItemFilterType filterType)
    // Offset: 0x123E8F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ToolboxItemFilterAttribute* New_ctor(::StringW filterString, ::System::ComponentModel::ToolboxItemFilterType filterType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ToolboxItemFilterAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ToolboxItemFilterAttribute*, creationType>(filterString, filterType)));
    }
    // public System.String get_FilterString()
    // Offset: 0x123E96C
    ::StringW get_FilterString();
    // public System.ComponentModel.ToolboxItemFilterType get_FilterType()
    // Offset: 0x123E974
    ::System::ComponentModel::ToolboxItemFilterType get_FilterType();
    // public override System.Object get_TypeId()
    // Offset: 0x123E97C
    // Implemented from: System.Attribute
    // Base method: System.Object Attribute::get_TypeId()
    ::Il2CppObject* get_TypeId();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x123E9D4
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x123EAEC
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Match(System.Object obj)
    // Offset: 0x123EB0C
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Match(System.Object obj)
    bool Match(::Il2CppObject* obj);
    // public override System.String ToString()
    // Offset: 0x123EBA4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.ComponentModel.ToolboxItemFilterAttribute
  #pragma pack(pop)
  static check_size<sizeof(ToolboxItemFilterAttribute), 32 + sizeof(::StringW)> __System_ComponentModel_ToolboxItemFilterAttributeSizeCheck;
  static_assert(sizeof(ToolboxItemFilterAttribute) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ToolboxItemFilterAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ToolboxItemFilterAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ToolboxItemFilterAttribute::get_FilterString
// Il2CppName: get_FilterString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::ToolboxItemFilterAttribute::*)()>(&System::ComponentModel::ToolboxItemFilterAttribute::get_FilterString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ToolboxItemFilterAttribute*), "get_FilterString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ToolboxItemFilterAttribute::get_FilterType
// Il2CppName: get_FilterType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ToolboxItemFilterType (System::ComponentModel::ToolboxItemFilterAttribute::*)()>(&System::ComponentModel::ToolboxItemFilterAttribute::get_FilterType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ToolboxItemFilterAttribute*), "get_FilterType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ToolboxItemFilterAttribute::get_TypeId
// Il2CppName: get_TypeId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::ToolboxItemFilterAttribute::*)()>(&System::ComponentModel::ToolboxItemFilterAttribute::get_TypeId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ToolboxItemFilterAttribute*), "get_TypeId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ToolboxItemFilterAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ToolboxItemFilterAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::ToolboxItemFilterAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ToolboxItemFilterAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ToolboxItemFilterAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::ToolboxItemFilterAttribute::*)()>(&System::ComponentModel::ToolboxItemFilterAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ToolboxItemFilterAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ToolboxItemFilterAttribute::Match
// Il2CppName: Match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ToolboxItemFilterAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::ToolboxItemFilterAttribute::Match)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ToolboxItemFilterAttribute*), "Match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ToolboxItemFilterAttribute::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::ToolboxItemFilterAttribute::*)()>(&System::ComponentModel::ToolboxItemFilterAttribute::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ToolboxItemFilterAttribute*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
