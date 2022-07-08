// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.CustomAttributeTypedArgument
#include "System/Reflection/CustomAttributeTypedArgument.hpp"
// Including type: System.Reflection.CustomAttributeNamedArgument
#include "System/Reflection/CustomAttributeNamedArgument.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: MemberInfo
  class MemberInfo;
  // Forward declaring type: Module
  class Module;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: CustomAttributeData
  class CustomAttributeData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::CustomAttributeData);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::CustomAttributeData*, "System.Reflection", "CustomAttributeData");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.CustomAttributeData
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A51930
  class CustomAttributeData : public ::Il2CppObject {
    public:
    // Nested type: ::System::Reflection::CustomAttributeData::LazyCAttrData
    class LazyCAttrData;
    public:
    // private System.Reflection.ConstructorInfo ctorInfo
    // Size: 0x8
    // Offset: 0x10
    ::System::Reflection::ConstructorInfo* ctorInfo;
    // Field size check
    static_assert(sizeof(::System::Reflection::ConstructorInfo*) == 0x8);
    // private System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> ctorArgs
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* ctorArgs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>*) == 0x8);
    // private System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> namedArgs
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* namedArgs;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>*) == 0x8);
    // private System.Reflection.CustomAttributeData/LazyCAttrData lazyData
    // Size: 0x8
    // Offset: 0x28
    ::System::Reflection::CustomAttributeData::LazyCAttrData* lazyData;
    // Field size check
    static_assert(sizeof(::System::Reflection::CustomAttributeData::LazyCAttrData*) == 0x8);
    public:
    // Get instance field reference: private System.Reflection.ConstructorInfo ctorInfo
    [[deprecated("Use field access instead!")]] ::System::Reflection::ConstructorInfo*& dyn_ctorInfo();
    // Get instance field reference: private System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> ctorArgs
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>*& dyn_ctorArgs();
    // Get instance field reference: private System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> namedArgs
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>*& dyn_namedArgs();
    // Get instance field reference: private System.Reflection.CustomAttributeData/LazyCAttrData lazyData
    [[deprecated("Use field access instead!")]] ::System::Reflection::CustomAttributeData::LazyCAttrData*& dyn_lazyData();
    // System.Void .ctor(System.Reflection.ConstructorInfo ctorInfo, System.Reflection.Assembly assembly, System.IntPtr data, System.UInt32 data_length)
    // Offset: 0x11F45F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomAttributeData* New_ctor(::System::Reflection::ConstructorInfo* ctorInfo, ::System::Reflection::Assembly* assembly, ::System::IntPtr data, uint data_length) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::CustomAttributeData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomAttributeData*, creationType>(ctorInfo, assembly, data, data_length)));
    }
    // static private System.Void ResolveArgumentsInternal(System.Reflection.ConstructorInfo ctor, System.Reflection.Assembly assembly, System.IntPtr data, System.UInt32 data_length, out System.Object[] ctorArgs, out System.Object[] namedArgs)
    // Offset: 0x11F469C
    static void ResolveArgumentsInternal(::System::Reflection::ConstructorInfo* ctor, ::System::Reflection::Assembly* assembly, ::System::IntPtr data, uint data_length, ByRef<::ArrayW<::Il2CppObject*>> ctorArgs, ByRef<::ArrayW<::Il2CppObject*>> namedArgs);
    // private System.Void ResolveArguments()
    // Offset: 0x11F46A0
    void ResolveArguments();
    // public System.Reflection.ConstructorInfo get_Constructor()
    // Offset: 0x11F47C4
    ::System::Reflection::ConstructorInfo* get_Constructor();
    // public System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> get_ConstructorArguments()
    // Offset: 0x11F47CC
    ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* get_ConstructorArguments();
    // public System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> get_NamedArguments()
    // Offset: 0x11F47F0
    ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* get_NamedArguments();
    // static public System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributes(System.Reflection.Assembly target)
    // Offset: 0x11F4814
    static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributes(::System::Reflection::Assembly* target);
    // static public System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributes(System.Reflection.MemberInfo target)
    // Offset: 0x11F4878
    static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributes(::System::Reflection::MemberInfo* target);
    // static System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributesInternal(System.RuntimeType target)
    // Offset: 0x11F48DC
    static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesInternal(::System::RuntimeType* target);
    // static public System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributes(System.Reflection.Module target)
    // Offset: 0x11F4940
    static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributes(::System::Reflection::Module* target);
    // static public System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributes(System.Reflection.ParameterInfo target)
    // Offset: 0x11F49A4
    static ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributes(::System::Reflection::ParameterInfo* target);
    // public System.Type get_AttributeType()
    // Offset: 0x11F4A08
    ::System::Type* get_AttributeType();
    // static private T[] UnboxValues(System.Object[] values)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::ArrayW<T> UnboxValues(::ArrayW<::Il2CppObject*> values) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::CustomAttributeData::UnboxValues");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Reflection", "CustomAttributeData", "UnboxValues", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(values)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, values);
    }
    // protected System.Void .ctor()
    // Offset: 0x11F45F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomAttributeData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::CustomAttributeData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomAttributeData*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x11F4A28
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x11F4FA8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x11F5634
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Reflection.CustomAttributeData
  #pragma pack(pop)
  static check_size<sizeof(CustomAttributeData), 40 + sizeof(::System::Reflection::CustomAttributeData::LazyCAttrData*)> __System_Reflection_CustomAttributeDataSizeCheck;
  static_assert(sizeof(CustomAttributeData) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::CustomAttributeData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::CustomAttributeData::ResolveArgumentsInternal
// Il2CppName: ResolveArgumentsInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::ConstructorInfo*, ::System::Reflection::Assembly*, ::System::IntPtr, uint, ByRef<::ArrayW<::Il2CppObject*>>, ByRef<::ArrayW<::Il2CppObject*>>)>(&System::Reflection::CustomAttributeData::ResolveArgumentsInternal)> {
  static const MethodInfo* get() {
    static auto* ctor = &::il2cpp_utils::GetClassFromName("System.Reflection", "ConstructorInfo")->byval_arg;
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* data_length = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* ctorArgs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->this_arg;
    static auto* namedArgs = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeData*), "ResolveArgumentsInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctor, assembly, data, data_length, ctorArgs, namedArgs});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeData::ResolveArguments
// Il2CppName: ResolveArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::CustomAttributeData::*)()>(&System::Reflection::CustomAttributeData::ResolveArguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeData*), "ResolveArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeData::get_Constructor
// Il2CppName: get_Constructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo* (System::Reflection::CustomAttributeData::*)()>(&System::Reflection::CustomAttributeData::get_Constructor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeData*), "get_Constructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeData::get_ConstructorArguments
// Il2CppName: get_ConstructorArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeTypedArgument>* (System::Reflection::CustomAttributeData::*)()>(&System::Reflection::CustomAttributeData::get_ConstructorArguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeData*), "get_ConstructorArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeData::get_NamedArguments
// Il2CppName: get_NamedArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeNamedArgument>* (System::Reflection::CustomAttributeData::*)()>(&System::Reflection::CustomAttributeData::get_NamedArguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeData*), "get_NamedArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeData::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (*)(::System::Reflection::Assembly*)>(&System::Reflection::CustomAttributeData::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeData*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeData::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (*)(::System::Reflection::MemberInfo*)>(&System::Reflection::CustomAttributeData::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeData*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeData::GetCustomAttributesInternal
// Il2CppName: GetCustomAttributesInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (*)(::System::RuntimeType*)>(&System::Reflection::CustomAttributeData::GetCustomAttributesInternal)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeData*), "GetCustomAttributesInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeData::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (*)(::System::Reflection::Module*)>(&System::Reflection::CustomAttributeData::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Reflection", "Module")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeData*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeData::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (*)(::System::Reflection::ParameterInfo*)>(&System::Reflection::CustomAttributeData::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeData*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeData::get_AttributeType
// Il2CppName: get_AttributeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::CustomAttributeData::*)()>(&System::Reflection::CustomAttributeData::get_AttributeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeData*), "get_AttributeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeData::UnboxValues
// Il2CppName: UnboxValues
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Reflection::CustomAttributeData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::CustomAttributeData::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::CustomAttributeData::*)()>(&System::Reflection::CustomAttributeData::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeData*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeData::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::CustomAttributeData::*)(::Il2CppObject*)>(&System::Reflection::CustomAttributeData::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeData*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeData::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::CustomAttributeData::*)()>(&System::Reflection::CustomAttributeData::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeData*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
