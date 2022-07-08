// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.PropertyInfo
#include "System/Reflection/PropertyInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: PropertyAttributes
  struct PropertyAttributes;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Forward declaring type: PropertyBuilder
  class PropertyBuilder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::Emit::PropertyBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::PropertyBuilder*, "System.Reflection.Emit", "PropertyBuilder");
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.Emit.PropertyBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class PropertyBuilder : public ::System::Reflection::PropertyInfo {
    public:
    // public override System.Reflection.PropertyAttributes get_Attributes()
    // Offset: 0x1324C48
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Reflection.PropertyAttributes PropertyInfo::get_Attributes()
    ::System::Reflection::PropertyAttributes get_Attributes();
    // public override System.Boolean get_CanRead()
    // Offset: 0x1324CA8
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Boolean PropertyInfo::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x1324D08
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Boolean PropertyInfo::get_CanWrite()
    bool get_CanWrite();
    // public override System.Type get_DeclaringType()
    // Offset: 0x1324D68
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_DeclaringType()
    ::System::Type* get_DeclaringType();
    // public override System.String get_Name()
    // Offset: 0x1324DC8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::StringW get_Name();
    // public override System.Type get_PropertyType()
    // Offset: 0x1324E28
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Type PropertyInfo::get_PropertyType()
    ::System::Type* get_PropertyType();
    // public override System.Reflection.ParameterInfo[] GetIndexParameters()
    // Offset: 0x1324E88
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Reflection.ParameterInfo[] PropertyInfo::GetIndexParameters()
    ::ArrayW<::System::Reflection::ParameterInfo*> GetIndexParameters();
    // public override System.Type get_ReflectedType()
    // Offset: 0x1324EE8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_ReflectedType()
    ::System::Type* get_ReflectedType();
    // public override System.Reflection.MethodInfo[] GetAccessors(System.Boolean nonPublic)
    // Offset: 0x1324F28
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Reflection.MethodInfo[] PropertyInfo::GetAccessors(System.Boolean nonPublic)
    ::ArrayW<::System::Reflection::MethodInfo*> GetAccessors(bool nonPublic);
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x1324F68
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::ArrayW<::Il2CppObject*> GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1324FA8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::ArrayW<::Il2CppObject*> GetCustomAttributes(::System::Type* attributeType, bool inherit);
    // public override System.Reflection.MethodInfo GetGetMethod(System.Boolean nonPublic)
    // Offset: 0x1324FE8
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Reflection.MethodInfo PropertyInfo::GetGetMethod(System.Boolean nonPublic)
    ::System::Reflection::MethodInfo* GetGetMethod(bool nonPublic);
    // public override System.Reflection.MethodInfo GetSetMethod(System.Boolean nonPublic)
    // Offset: 0x1325028
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Reflection.MethodInfo PropertyInfo::GetSetMethod(System.Boolean nonPublic)
    ::System::Reflection::MethodInfo* GetSetMethod(bool nonPublic);
    // public override System.Object GetValue(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] index, System.Globalization.CultureInfo culture)
    // Offset: 0x1325068
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Object PropertyInfo::GetValue(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] index, System.Globalization.CultureInfo culture)
    ::Il2CppObject* GetValue(::Il2CppObject* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::ArrayW<::Il2CppObject*> index, ::System::Globalization::CultureInfo* culture);
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x13250A8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(::System::Type* attributeType, bool inherit);
    // public override System.Void SetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] index, System.Globalization.CultureInfo culture)
    // Offset: 0x13250E8
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Void PropertyInfo::SetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] index, System.Globalization.CultureInfo culture)
    void SetValue(::Il2CppObject* obj, ::Il2CppObject* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::ArrayW<::Il2CppObject*> index, ::System::Globalization::CultureInfo* culture);
  }; // System.Reflection.Emit.PropertyBuilder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::Emit::PropertyBuilder::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::PropertyAttributes (System::Reflection::Emit::PropertyBuilder::*)()>(&System::Reflection::Emit::PropertyBuilder::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::PropertyBuilder*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::PropertyBuilder::get_CanRead
// Il2CppName: get_CanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Emit::PropertyBuilder::*)()>(&System::Reflection::Emit::PropertyBuilder::get_CanRead)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::PropertyBuilder*), "get_CanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::PropertyBuilder::get_CanWrite
// Il2CppName: get_CanWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Emit::PropertyBuilder::*)()>(&System::Reflection::Emit::PropertyBuilder::get_CanWrite)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::PropertyBuilder*), "get_CanWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::PropertyBuilder::get_DeclaringType
// Il2CppName: get_DeclaringType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::Emit::PropertyBuilder::*)()>(&System::Reflection::Emit::PropertyBuilder::get_DeclaringType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::PropertyBuilder*), "get_DeclaringType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::PropertyBuilder::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::Emit::PropertyBuilder::*)()>(&System::Reflection::Emit::PropertyBuilder::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::PropertyBuilder*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::PropertyBuilder::get_PropertyType
// Il2CppName: get_PropertyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::Emit::PropertyBuilder::*)()>(&System::Reflection::Emit::PropertyBuilder::get_PropertyType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::PropertyBuilder*), "get_PropertyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::PropertyBuilder::GetIndexParameters
// Il2CppName: GetIndexParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (System::Reflection::Emit::PropertyBuilder::*)()>(&System::Reflection::Emit::PropertyBuilder::GetIndexParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::PropertyBuilder*), "GetIndexParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::PropertyBuilder::get_ReflectedType
// Il2CppName: get_ReflectedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::Emit::PropertyBuilder::*)()>(&System::Reflection::Emit::PropertyBuilder::get_ReflectedType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::PropertyBuilder*), "get_ReflectedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::PropertyBuilder::GetAccessors
// Il2CppName: GetAccessors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::MethodInfo*> (System::Reflection::Emit::PropertyBuilder::*)(bool)>(&System::Reflection::Emit::PropertyBuilder::GetAccessors)> {
  static const MethodInfo* get() {
    static auto* nonPublic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::PropertyBuilder*), "GetAccessors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nonPublic});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::PropertyBuilder::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Reflection::Emit::PropertyBuilder::*)(bool)>(&System::Reflection::Emit::PropertyBuilder::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::PropertyBuilder*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::PropertyBuilder::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Reflection::Emit::PropertyBuilder::*)(::System::Type*, bool)>(&System::Reflection::Emit::PropertyBuilder::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::PropertyBuilder*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::PropertyBuilder::GetGetMethod
// Il2CppName: GetGetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Reflection::Emit::PropertyBuilder::*)(bool)>(&System::Reflection::Emit::PropertyBuilder::GetGetMethod)> {
  static const MethodInfo* get() {
    static auto* nonPublic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::PropertyBuilder*), "GetGetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nonPublic});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::PropertyBuilder::GetSetMethod
// Il2CppName: GetSetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Reflection::Emit::PropertyBuilder::*)(bool)>(&System::Reflection::Emit::PropertyBuilder::GetSetMethod)> {
  static const MethodInfo* get() {
    static auto* nonPublic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::PropertyBuilder*), "GetSetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{nonPublic});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::PropertyBuilder::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::Emit::PropertyBuilder::*)(::Il2CppObject*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::Il2CppObject*>, ::System::Globalization::CultureInfo*)>(&System::Reflection::Emit::PropertyBuilder::GetValue)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* invokeAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* index = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::PropertyBuilder*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, invokeAttr, binder, index, culture});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::PropertyBuilder::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Emit::PropertyBuilder::*)(::System::Type*, bool)>(&System::Reflection::Emit::PropertyBuilder::IsDefined)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::PropertyBuilder*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::PropertyBuilder::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::Emit::PropertyBuilder::*)(::Il2CppObject*, ::Il2CppObject*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::Il2CppObject*>, ::System::Globalization::CultureInfo*)>(&System::Reflection::Emit::PropertyBuilder::SetValue)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* invokeAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* index = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::PropertyBuilder*), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, value, invokeAttr, binder, index, culture});
  }
};
