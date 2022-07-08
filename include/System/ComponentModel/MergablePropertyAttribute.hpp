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
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: MergablePropertyAttribute
  class MergablePropertyAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::MergablePropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::MergablePropertyAttribute*, "System.ComponentModel", "MergablePropertyAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.MergablePropertyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A5EF14
  class MergablePropertyAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Boolean allowMerge
    // Size: 0x1
    // Offset: 0x10
    bool allowMerge;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return allowMerge;
    }
    // Get static field: static public readonly System.ComponentModel.MergablePropertyAttribute Yes
    static ::System::ComponentModel::MergablePropertyAttribute* _get_Yes();
    // Set static field: static public readonly System.ComponentModel.MergablePropertyAttribute Yes
    static void _set_Yes(::System::ComponentModel::MergablePropertyAttribute* value);
    // Get static field: static public readonly System.ComponentModel.MergablePropertyAttribute No
    static ::System::ComponentModel::MergablePropertyAttribute* _get_No();
    // Set static field: static public readonly System.ComponentModel.MergablePropertyAttribute No
    static void _set_No(::System::ComponentModel::MergablePropertyAttribute* value);
    // Get static field: static public readonly System.ComponentModel.MergablePropertyAttribute Default
    static ::System::ComponentModel::MergablePropertyAttribute* _get_Default();
    // Set static field: static public readonly System.ComponentModel.MergablePropertyAttribute Default
    static void _set_Default(::System::ComponentModel::MergablePropertyAttribute* value);
    // Get instance field reference: private System.Boolean allowMerge
    [[deprecated("Use field access instead!")]] bool& dyn_allowMerge();
    // public System.Void .ctor(System.Boolean allowMerge)
    // Offset: 0x11959C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MergablePropertyAttribute* New_ctor(bool allowMerge) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::MergablePropertyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MergablePropertyAttribute*, creationType>(allowMerge)));
    }
    // public System.Boolean get_AllowMerge()
    // Offset: 0x11959F0
    bool get_AllowMerge();
    // static private System.Void .cctor()
    // Offset: 0x1195B20
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x11959F8
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1195AA0
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
    // public override System.Boolean IsDefaultAttribute()
    // Offset: 0x1195AA8
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::IsDefaultAttribute()
    bool IsDefaultAttribute();
  }; // System.ComponentModel.MergablePropertyAttribute
  #pragma pack(pop)
  static check_size<sizeof(MergablePropertyAttribute), 16 + sizeof(bool)> __System_ComponentModel_MergablePropertyAttributeSizeCheck;
  static_assert(sizeof(MergablePropertyAttribute) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::MergablePropertyAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::MergablePropertyAttribute::get_AllowMerge
// Il2CppName: get_AllowMerge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::MergablePropertyAttribute::*)()>(&System::ComponentModel::MergablePropertyAttribute::get_AllowMerge)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MergablePropertyAttribute*), "get_AllowMerge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MergablePropertyAttribute::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::ComponentModel::MergablePropertyAttribute::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MergablePropertyAttribute*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MergablePropertyAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::MergablePropertyAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::MergablePropertyAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MergablePropertyAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MergablePropertyAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::MergablePropertyAttribute::*)()>(&System::ComponentModel::MergablePropertyAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MergablePropertyAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::MergablePropertyAttribute::IsDefaultAttribute
// Il2CppName: IsDefaultAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::MergablePropertyAttribute::*)()>(&System::ComponentModel::MergablePropertyAttribute::IsDefaultAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MergablePropertyAttribute*), "IsDefaultAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
