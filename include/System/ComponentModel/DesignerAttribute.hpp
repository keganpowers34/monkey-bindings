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
  // Forward declaring type: DesignerAttribute
  class DesignerAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::DesignerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DesignerAttribute*, "System.ComponentModel", "DesignerAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.DesignerAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A5E898
  class DesignerAttribute : public ::System::Attribute {
    public:
    public:
    // private readonly System.String designerTypeName
    // Size: 0x8
    // Offset: 0x10
    ::StringW designerTypeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String designerBaseTypeName
    // Size: 0x8
    // Offset: 0x18
    ::StringW designerBaseTypeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String typeId
    // Size: 0x8
    // Offset: 0x20
    ::StringW typeId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private readonly System.String designerTypeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_designerTypeName();
    // Get instance field reference: private readonly System.String designerBaseTypeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_designerBaseTypeName();
    // Get instance field reference: private System.String typeId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_typeId();
    // public System.Void .ctor(System.String designerTypeName)
    // Offset: 0x1182D10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesignerAttribute* New_ctor(::StringW designerTypeName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::DesignerAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesignerAttribute*, creationType>(designerTypeName)));
    }
    // public System.Void .ctor(System.Type designerType)
    // Offset: 0x1182DFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesignerAttribute* New_ctor(::System::Type* designerType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::DesignerAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesignerAttribute*, creationType>(designerType)));
    }
    // public System.Void .ctor(System.String designerTypeName, System.String designerBaseTypeName)
    // Offset: 0x1182EC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesignerAttribute* New_ctor(::StringW designerTypeName, ::StringW designerBaseTypeName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::DesignerAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesignerAttribute*, creationType>(designerTypeName, designerBaseTypeName)));
    }
    // public System.Void .ctor(System.String designerTypeName, System.Type designerBaseType)
    // Offset: 0x1182F64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesignerAttribute* New_ctor(::StringW designerTypeName, ::System::Type* designerBaseType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::DesignerAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesignerAttribute*, creationType>(designerTypeName, designerBaseType)));
    }
    // public System.Void .ctor(System.Type designerType, System.Type designerBaseType)
    // Offset: 0x1183020
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesignerAttribute* New_ctor(::System::Type* designerType, ::System::Type* designerBaseType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::DesignerAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesignerAttribute*, creationType>(designerType, designerBaseType)));
    }
    // public System.String get_DesignerBaseTypeName()
    // Offset: 0x1183090
    ::StringW get_DesignerBaseTypeName();
    // public System.String get_DesignerTypeName()
    // Offset: 0x1183098
    ::StringW get_DesignerTypeName();
    // public override System.Object get_TypeId()
    // Offset: 0x11830A0
    // Implemented from: System.Attribute
    // Base method: System.Object Attribute::get_TypeId()
    ::Il2CppObject* get_TypeId();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1183130
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x11831E8
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.DesignerAttribute
  #pragma pack(pop)
  static check_size<sizeof(DesignerAttribute), 32 + sizeof(::StringW)> __System_ComponentModel_DesignerAttributeSizeCheck;
  static_assert(sizeof(DesignerAttribute) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::DesignerAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DesignerAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DesignerAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DesignerAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DesignerAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DesignerAttribute::get_DesignerBaseTypeName
// Il2CppName: get_DesignerBaseTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::DesignerAttribute::*)()>(&System::ComponentModel::DesignerAttribute::get_DesignerBaseTypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignerAttribute*), "get_DesignerBaseTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignerAttribute::get_DesignerTypeName
// Il2CppName: get_DesignerTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::DesignerAttribute::*)()>(&System::ComponentModel::DesignerAttribute::get_DesignerTypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignerAttribute*), "get_DesignerTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignerAttribute::get_TypeId
// Il2CppName: get_TypeId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::DesignerAttribute::*)()>(&System::ComponentModel::DesignerAttribute::get_TypeId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignerAttribute*), "get_TypeId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignerAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::DesignerAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::DesignerAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignerAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DesignerAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::DesignerAttribute::*)()>(&System::ComponentModel::DesignerAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DesignerAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
