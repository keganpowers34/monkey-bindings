// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::Json
namespace PlayFab::Json {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Attribute
  class Attribute;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: PlayFab.Json
namespace PlayFab::Json {
  // Forward declaring type: ReflectionUtils
  class ReflectionUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::Json::ReflectionUtils);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::Json::ReflectionUtils*, "PlayFab.Json", "ReflectionUtils");
// Type namespace: PlayFab.Json
namespace PlayFab::Json {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.Json.ReflectionUtils
  // [TokenAttribute] Offset: FFFFFFFF
  // [GeneratedCodeAttribute] Offset: AD29E8
  class ReflectionUtils : public ::Il2CppObject {
    public:
    // Nested type: ::PlayFab::Json::ReflectionUtils::GetDelegate
    class GetDelegate;
    // Nested type: ::PlayFab::Json::ReflectionUtils::SetDelegate
    class SetDelegate;
    // Nested type: ::PlayFab::Json::ReflectionUtils::ConstructorDelegate
    class ConstructorDelegate;
    // Nested type: ::PlayFab::Json::ReflectionUtils::ThreadSafeDictionaryValueFactory_2<TKey, TValue>
    template<typename TKey, typename TValue>
    class ThreadSafeDictionaryValueFactory_2;
    // Nested type: ::PlayFab::Json::ReflectionUtils::ThreadSafeDictionary_2<TKey, TValue>
    template<typename TKey, typename TValue>
    class ThreadSafeDictionary_2;
    // Nested type: ::PlayFab::Json::ReflectionUtils::$$c__DisplayClass26_0
    class $$c__DisplayClass26_0;
    // Nested type: ::PlayFab::Json::ReflectionUtils::$$c__DisplayClass30_0
    class $$c__DisplayClass30_0;
    // Nested type: ::PlayFab::Json::ReflectionUtils::$$c__DisplayClass31_0
    class $$c__DisplayClass31_0;
    // Nested type: ::PlayFab::Json::ReflectionUtils::$$c__DisplayClass34_0
    class $$c__DisplayClass34_0;
    // Nested type: ::PlayFab::Json::ReflectionUtils::$$c__DisplayClass35_0
    class $$c__DisplayClass35_0;
    // Get static field: static private readonly System.Object[] EmptyObjects
    static ::ArrayW<::Il2CppObject*> _get_EmptyObjects();
    // Set static field: static private readonly System.Object[] EmptyObjects
    static void _set_EmptyObjects(::ArrayW<::Il2CppObject*> value);
    // Get static field: static private System.Object[] _1ObjArray
    static ::ArrayW<::Il2CppObject*> _get__1ObjArray();
    // Set static field: static private System.Object[] _1ObjArray
    static void _set__1ObjArray(::ArrayW<::Il2CppObject*> value);
    // static public System.Type GetTypeInfo(System.Type type)
    // Offset: 0xBCAE68
    static ::System::Type* GetTypeInfo(::System::Type* type);
    // static public System.Attribute GetAttribute(System.Reflection.MemberInfo info, System.Type type)
    // Offset: 0xBCAE6C
    static ::System::Attribute* GetAttribute(::System::Reflection::MemberInfo* info, ::System::Type* type);
    // static public System.Type GetGenericListElementType(System.Type type)
    // Offset: 0xBC9A94
    static ::System::Type* GetGenericListElementType(::System::Type* type);
    // static public System.Attribute GetAttribute(System.Type objectType, System.Type attributeType)
    // Offset: 0xBCAFAC
    static ::System::Attribute* GetAttribute(::System::Type* objectType, ::System::Type* attributeType);
    // static public System.Type[] GetGenericTypeArguments(System.Type type)
    // Offset: 0xBC4900
    static ::ArrayW<::System::Type*> GetGenericTypeArguments(::System::Type* type);
    // static public System.Boolean IsTypeGeneric(System.Type type)
    // Offset: 0xBCAF34
    static bool IsTypeGeneric(::System::Type* type);
    // static public System.Boolean IsTypeGenericeCollectionInterface(System.Type type)
    // Offset: 0xBC9914
    static bool IsTypeGenericeCollectionInterface(::System::Type* type);
    // static public System.Boolean IsAssignableFrom(System.Type type1, System.Type type2)
    // Offset: 0xBC2A58
    static bool IsAssignableFrom(::System::Type* type1, ::System::Type* type2);
    // static public System.Boolean IsTypeDictionary(System.Type type)
    // Offset: 0xBC8FBC
    static bool IsTypeDictionary(::System::Type* type);
    // static public System.Boolean IsNullableType(System.Type type)
    // Offset: 0xBC8ECC
    static bool IsNullableType(::System::Type* type);
    // static public System.Object ToNullableType(System.Object obj, System.Type nullableType)
    // Offset: 0xBC9F20
    static ::Il2CppObject* ToNullableType(::Il2CppObject* obj, ::System::Type* nullableType);
    // static public System.Boolean IsValueType(System.Type type)
    // Offset: 0xBCB08C
    static bool IsValueType(::System::Type* type);
    // static public System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo> GetConstructors(System.Type type)
    // Offset: 0xBCB0FC
    static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>* GetConstructors(::System::Type* type);
    // static public System.Reflection.ConstructorInfo GetConstructorInfo(System.Type type, params System.Type[] argsType)
    // Offset: 0xBCB114
    static ::System::Reflection::ConstructorInfo* GetConstructorInfo(::System::Type* type, ::ArrayW<::System::Type*> argsType);
    // static public System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> GetProperties(System.Type type)
    // Offset: 0xBC6228
    static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* GetProperties(::System::Type* type);
    // static public System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> GetFields(System.Type type)
    // Offset: 0xBC62D4
    static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* GetFields(::System::Type* type);
    // static public System.Reflection.MethodInfo GetGetterMethodInfo(System.Reflection.PropertyInfo propertyInfo)
    // Offset: 0xBC624C
    static ::System::Reflection::MethodInfo* GetGetterMethodInfo(::System::Reflection::PropertyInfo* propertyInfo);
    // static public System.Reflection.MethodInfo GetSetterMethodInfo(System.Reflection.PropertyInfo propertyInfo)
    // Offset: 0xBC6BE0
    static ::System::Reflection::MethodInfo* GetSetterMethodInfo(::System::Reflection::PropertyInfo* propertyInfo);
    // static public PlayFab.Json.ReflectionUtils/ConstructorDelegate GetContructor(System.Reflection.ConstructorInfo constructorInfo)
    // Offset: 0xBCB544
    static ::PlayFab::Json::ReflectionUtils::ConstructorDelegate* GetContructor(::System::Reflection::ConstructorInfo* constructorInfo);
    // static public PlayFab.Json.ReflectionUtils/ConstructorDelegate GetContructor(System.Type type, params System.Type[] argsType)
    // Offset: 0xBC5A30
    static ::PlayFab::Json::ReflectionUtils::ConstructorDelegate* GetContructor(::System::Type* type, ::ArrayW<::System::Type*> argsType);
    // static public PlayFab.Json.ReflectionUtils/ConstructorDelegate GetConstructorByReflection(System.Reflection.ConstructorInfo constructorInfo)
    // Offset: 0xBCB5A8
    static ::PlayFab::Json::ReflectionUtils::ConstructorDelegate* GetConstructorByReflection(::System::Reflection::ConstructorInfo* constructorInfo);
    // static public PlayFab.Json.ReflectionUtils/ConstructorDelegate GetConstructorByReflection(System.Type type, params System.Type[] argsType)
    // Offset: 0xBCB638
    static ::PlayFab::Json::ReflectionUtils::ConstructorDelegate* GetConstructorByReflection(::System::Type* type, ::ArrayW<::System::Type*> argsType);
    // static public PlayFab.Json.ReflectionUtils/GetDelegate GetGetMethod(System.Reflection.PropertyInfo propertyInfo)
    // Offset: 0xBC6270
    static ::PlayFab::Json::ReflectionUtils::GetDelegate* GetGetMethod(::System::Reflection::PropertyInfo* propertyInfo);
    // static public PlayFab.Json.ReflectionUtils/GetDelegate GetGetMethod(System.Reflection.FieldInfo fieldInfo)
    // Offset: 0xBC62F8
    static ::PlayFab::Json::ReflectionUtils::GetDelegate* GetGetMethod(::System::Reflection::FieldInfo* fieldInfo);
    // static public PlayFab.Json.ReflectionUtils/GetDelegate GetGetMethodByReflection(System.Reflection.PropertyInfo propertyInfo)
    // Offset: 0xBCB734
    static ::PlayFab::Json::ReflectionUtils::GetDelegate* GetGetMethodByReflection(::System::Reflection::PropertyInfo* propertyInfo);
    // static public PlayFab.Json.ReflectionUtils/GetDelegate GetGetMethodByReflection(System.Reflection.FieldInfo fieldInfo)
    // Offset: 0xBCB800
    static ::PlayFab::Json::ReflectionUtils::GetDelegate* GetGetMethodByReflection(::System::Reflection::FieldInfo* fieldInfo);
    // static public PlayFab.Json.ReflectionUtils/SetDelegate GetSetMethod(System.Reflection.PropertyInfo propertyInfo)
    // Offset: 0xBC6C04
    static ::PlayFab::Json::ReflectionUtils::SetDelegate* GetSetMethod(::System::Reflection::PropertyInfo* propertyInfo);
    // static public PlayFab.Json.ReflectionUtils/SetDelegate GetSetMethod(System.Reflection.FieldInfo fieldInfo)
    // Offset: 0xBC6C68
    static ::PlayFab::Json::ReflectionUtils::SetDelegate* GetSetMethod(::System::Reflection::FieldInfo* fieldInfo);
    // static public PlayFab.Json.ReflectionUtils/SetDelegate GetSetMethodByReflection(System.Reflection.PropertyInfo propertyInfo)
    // Offset: 0xBCB8B0
    static ::PlayFab::Json::ReflectionUtils::SetDelegate* GetSetMethodByReflection(::System::Reflection::PropertyInfo* propertyInfo);
    // static public PlayFab.Json.ReflectionUtils/SetDelegate GetSetMethodByReflection(System.Reflection.FieldInfo fieldInfo)
    // Offset: 0xBCB97C
    static ::PlayFab::Json::ReflectionUtils::SetDelegate* GetSetMethodByReflection(::System::Reflection::FieldInfo* fieldInfo);
    // public System.Void .ctor()
    // Offset: 0xBCBA2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionUtils* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Json::ReflectionUtils::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionUtils*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0xBCBA34
    static void _cctor();
  }; // PlayFab.Json.ReflectionUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetTypeInfo
// Il2CppName: GetTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&PlayFab::Json::ReflectionUtils::GetTypeInfo)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetAttribute
// Il2CppName: GetAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Attribute* (*)(::System::Reflection::MemberInfo*, ::System::Type*)>(&PlayFab::Json::ReflectionUtils::GetAttribute)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, type});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetGenericListElementType
// Il2CppName: GetGenericListElementType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&PlayFab::Json::ReflectionUtils::GetGenericListElementType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetGenericListElementType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetAttribute
// Il2CppName: GetAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Attribute* (*)(::System::Type*, ::System::Type*)>(&PlayFab::Json::ReflectionUtils::GetAttribute)> {
  static const MethodInfo* get() {
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectType, attributeType});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetGenericTypeArguments
// Il2CppName: GetGenericTypeArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (*)(::System::Type*)>(&PlayFab::Json::ReflectionUtils::GetGenericTypeArguments)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetGenericTypeArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::IsTypeGeneric
// Il2CppName: IsTypeGeneric
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&PlayFab::Json::ReflectionUtils::IsTypeGeneric)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "IsTypeGeneric", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::IsTypeGenericeCollectionInterface
// Il2CppName: IsTypeGenericeCollectionInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&PlayFab::Json::ReflectionUtils::IsTypeGenericeCollectionInterface)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "IsTypeGenericeCollectionInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::IsAssignableFrom
// Il2CppName: IsAssignableFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&PlayFab::Json::ReflectionUtils::IsAssignableFrom)> {
  static const MethodInfo* get() {
    static auto* type1 = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* type2 = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "IsAssignableFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type1, type2});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::IsTypeDictionary
// Il2CppName: IsTypeDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&PlayFab::Json::ReflectionUtils::IsTypeDictionary)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "IsTypeDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::IsNullableType
// Il2CppName: IsNullableType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&PlayFab::Json::ReflectionUtils::IsNullableType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "IsNullableType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::ToNullableType
// Il2CppName: ToNullableType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::Il2CppObject*, ::System::Type*)>(&PlayFab::Json::ReflectionUtils::ToNullableType)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* nullableType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "ToNullableType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, nullableType});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::IsValueType
// Il2CppName: IsValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&PlayFab::Json::ReflectionUtils::IsValueType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "IsValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetConstructors
// Il2CppName: GetConstructors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>* (*)(::System::Type*)>(&PlayFab::Json::ReflectionUtils::GetConstructors)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetConstructors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetConstructorInfo
// Il2CppName: GetConstructorInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo* (*)(::System::Type*, ::ArrayW<::System::Type*>)>(&PlayFab::Json::ReflectionUtils::GetConstructorInfo)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* argsType = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetConstructorInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, argsType});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetProperties
// Il2CppName: GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* (*)(::System::Type*)>(&PlayFab::Json::ReflectionUtils::GetProperties)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetFields
// Il2CppName: GetFields
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* (*)(::System::Type*)>(&PlayFab::Json::ReflectionUtils::GetFields)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetFields", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetGetterMethodInfo
// Il2CppName: GetGetterMethodInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Reflection::PropertyInfo*)>(&PlayFab::Json::ReflectionUtils::GetGetterMethodInfo)> {
  static const MethodInfo* get() {
    static auto* propertyInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "PropertyInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetGetterMethodInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyInfo});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetSetterMethodInfo
// Il2CppName: GetSetterMethodInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Reflection::PropertyInfo*)>(&PlayFab::Json::ReflectionUtils::GetSetterMethodInfo)> {
  static const MethodInfo* get() {
    static auto* propertyInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "PropertyInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetSetterMethodInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyInfo});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetContructor
// Il2CppName: GetContructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PlayFab::Json::ReflectionUtils::ConstructorDelegate* (*)(::System::Reflection::ConstructorInfo*)>(&PlayFab::Json::ReflectionUtils::GetContructor)> {
  static const MethodInfo* get() {
    static auto* constructorInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "ConstructorInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetContructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constructorInfo});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetContructor
// Il2CppName: GetContructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PlayFab::Json::ReflectionUtils::ConstructorDelegate* (*)(::System::Type*, ::ArrayW<::System::Type*>)>(&PlayFab::Json::ReflectionUtils::GetContructor)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* argsType = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetContructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, argsType});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetConstructorByReflection
// Il2CppName: GetConstructorByReflection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PlayFab::Json::ReflectionUtils::ConstructorDelegate* (*)(::System::Reflection::ConstructorInfo*)>(&PlayFab::Json::ReflectionUtils::GetConstructorByReflection)> {
  static const MethodInfo* get() {
    static auto* constructorInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "ConstructorInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetConstructorByReflection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constructorInfo});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetConstructorByReflection
// Il2CppName: GetConstructorByReflection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PlayFab::Json::ReflectionUtils::ConstructorDelegate* (*)(::System::Type*, ::ArrayW<::System::Type*>)>(&PlayFab::Json::ReflectionUtils::GetConstructorByReflection)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* argsType = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetConstructorByReflection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, argsType});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetGetMethod
// Il2CppName: GetGetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PlayFab::Json::ReflectionUtils::GetDelegate* (*)(::System::Reflection::PropertyInfo*)>(&PlayFab::Json::ReflectionUtils::GetGetMethod)> {
  static const MethodInfo* get() {
    static auto* propertyInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "PropertyInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetGetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyInfo});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetGetMethod
// Il2CppName: GetGetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PlayFab::Json::ReflectionUtils::GetDelegate* (*)(::System::Reflection::FieldInfo*)>(&PlayFab::Json::ReflectionUtils::GetGetMethod)> {
  static const MethodInfo* get() {
    static auto* fieldInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetGetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fieldInfo});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetGetMethodByReflection
// Il2CppName: GetGetMethodByReflection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PlayFab::Json::ReflectionUtils::GetDelegate* (*)(::System::Reflection::PropertyInfo*)>(&PlayFab::Json::ReflectionUtils::GetGetMethodByReflection)> {
  static const MethodInfo* get() {
    static auto* propertyInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "PropertyInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetGetMethodByReflection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyInfo});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetGetMethodByReflection
// Il2CppName: GetGetMethodByReflection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PlayFab::Json::ReflectionUtils::GetDelegate* (*)(::System::Reflection::FieldInfo*)>(&PlayFab::Json::ReflectionUtils::GetGetMethodByReflection)> {
  static const MethodInfo* get() {
    static auto* fieldInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetGetMethodByReflection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fieldInfo});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetSetMethod
// Il2CppName: GetSetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PlayFab::Json::ReflectionUtils::SetDelegate* (*)(::System::Reflection::PropertyInfo*)>(&PlayFab::Json::ReflectionUtils::GetSetMethod)> {
  static const MethodInfo* get() {
    static auto* propertyInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "PropertyInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetSetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyInfo});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetSetMethod
// Il2CppName: GetSetMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PlayFab::Json::ReflectionUtils::SetDelegate* (*)(::System::Reflection::FieldInfo*)>(&PlayFab::Json::ReflectionUtils::GetSetMethod)> {
  static const MethodInfo* get() {
    static auto* fieldInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetSetMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fieldInfo});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetSetMethodByReflection
// Il2CppName: GetSetMethodByReflection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PlayFab::Json::ReflectionUtils::SetDelegate* (*)(::System::Reflection::PropertyInfo*)>(&PlayFab::Json::ReflectionUtils::GetSetMethodByReflection)> {
  static const MethodInfo* get() {
    static auto* propertyInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "PropertyInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetSetMethodByReflection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyInfo});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::GetSetMethodByReflection
// Il2CppName: GetSetMethodByReflection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::PlayFab::Json::ReflectionUtils::SetDelegate* (*)(::System::Reflection::FieldInfo*)>(&PlayFab::Json::ReflectionUtils::GetSetMethodByReflection)> {
  static const MethodInfo* get() {
    static auto* fieldInfo = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), "GetSetMethodByReflection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fieldInfo});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PlayFab::Json::ReflectionUtils::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PlayFab::Json::ReflectionUtils::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::ReflectionUtils*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
