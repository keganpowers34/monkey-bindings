// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.ComponentModel.DataObjectMethodType
#include "System/ComponentModel/DataObjectMethodType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: DataObjectMethodAttribute
  class DataObjectMethodAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::DataObjectMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DataObjectMethodAttribute*, "System.ComponentModel", "DataObjectMethodAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.DataObjectMethodAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A5E7F8
  class DataObjectMethodAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Boolean _isDefault
    // Size: 0x1
    // Offset: 0x10
    bool isDefault;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isDefault and: methodType
    char __padding0[0x3] = {};
    // private System.ComponentModel.DataObjectMethodType _methodType
    // Size: 0x4
    // Offset: 0x14
    ::System::ComponentModel::DataObjectMethodType methodType;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::DataObjectMethodType) == 0x4);
    public:
    // Get instance field reference: private System.Boolean _isDefault
    [[deprecated("Use field access instead!")]] bool& dyn__isDefault();
    // Get instance field reference: private System.ComponentModel.DataObjectMethodType _methodType
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::DataObjectMethodType& dyn__methodType();
    // public System.Void .ctor(System.ComponentModel.DataObjectMethodType methodType)
    // Offset: 0x1153148
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataObjectMethodAttribute* New_ctor(::System::ComponentModel::DataObjectMethodType methodType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::DataObjectMethodAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataObjectMethodAttribute*, creationType>(methodType)));
    }
    // public System.Void .ctor(System.ComponentModel.DataObjectMethodType methodType, System.Boolean isDefault)
    // Offset: 0x1153178
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataObjectMethodAttribute* New_ctor(::System::ComponentModel::DataObjectMethodType methodType, bool isDefault) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::DataObjectMethodAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataObjectMethodAttribute*, creationType>(methodType, isDefault)));
    }
    // public System.Boolean get_IsDefault()
    // Offset: 0x11531B8
    bool get_IsDefault();
    // public System.ComponentModel.DataObjectMethodType get_MethodType()
    // Offset: 0x11531C0
    ::System::ComponentModel::DataObjectMethodType get_MethodType();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x11531C8
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1153280
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Match(System.Object obj)
    // Offset: 0x11532CC
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Match(System.Object obj)
    bool Match(::Il2CppObject* obj);
  }; // System.ComponentModel.DataObjectMethodAttribute
  #pragma pack(pop)
  static check_size<sizeof(DataObjectMethodAttribute), 20 + sizeof(::System::ComponentModel::DataObjectMethodType)> __System_ComponentModel_DataObjectMethodAttributeSizeCheck;
  static_assert(sizeof(DataObjectMethodAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::DataObjectMethodAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DataObjectMethodAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DataObjectMethodAttribute::get_IsDefault
// Il2CppName: get_IsDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DataObjectMethodAttribute::*)()>(&System::ComponentModel::DataObjectMethodAttribute::get_IsDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DataObjectMethodAttribute*), "get_IsDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DataObjectMethodAttribute::get_MethodType
// Il2CppName: get_MethodType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::DataObjectMethodType (System::ComponentModel::DataObjectMethodAttribute::*)()>(&System::ComponentModel::DataObjectMethodAttribute::get_MethodType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DataObjectMethodAttribute*), "get_MethodType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DataObjectMethodAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DataObjectMethodAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::DataObjectMethodAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DataObjectMethodAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DataObjectMethodAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::DataObjectMethodAttribute::*)()>(&System::ComponentModel::DataObjectMethodAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DataObjectMethodAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DataObjectMethodAttribute::Match
// Il2CppName: Match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DataObjectMethodAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::DataObjectMethodAttribute::Match)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DataObjectMethodAttribute*), "Match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
