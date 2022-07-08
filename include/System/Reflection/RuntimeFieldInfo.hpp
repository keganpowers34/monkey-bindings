// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.FieldInfo
#include "System/Reflection/FieldInfo.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: RuntimeModule
  class RuntimeModule;
  // Forward declaring type: Module
  class Module;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: RuntimeFieldInfo
  class RuntimeFieldInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::RuntimeFieldInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimeFieldInfo*, "System.Reflection", "RuntimeFieldInfo");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.RuntimeFieldInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimeFieldInfo : public ::System::Reflection::FieldInfo/*, public ::System::Runtime::Serialization::ISerializable*/ {
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // System.Reflection.BindingFlags get_BindingFlags()
    // Offset: 0x132FD54
    ::System::Reflection::BindingFlags get_BindingFlags();
    // System.RuntimeType GetDeclaringTypeInternal()
    // Offset: 0x132FD80
    ::System::RuntimeType* GetDeclaringTypeInternal();
    // private System.RuntimeType get_ReflectedTypeInternal()
    // Offset: 0x132FE0C
    ::System::RuntimeType* get_ReflectedTypeInternal();
    // System.Reflection.RuntimeModule GetRuntimeModule()
    // Offset: 0x132FD60
    ::System::Reflection::RuntimeModule* GetRuntimeModule();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x132FE98
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public override System.Reflection.Module get_Module()
    // Offset: 0x132FD5C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.Module MemberInfo::get_Module()
    ::System::Reflection::Module* get_Module();
    // protected System.Void .ctor()
    // Offset: 0x132F668
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Void FieldInfo::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeFieldInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::RuntimeFieldInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeFieldInfo*, creationType>()));
    }
  }; // System.Reflection.RuntimeFieldInfo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::RuntimeFieldInfo::get_BindingFlags
// Il2CppName: get_BindingFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::BindingFlags (System::Reflection::RuntimeFieldInfo::*)()>(&System::Reflection::RuntimeFieldInfo::get_BindingFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeFieldInfo*), "get_BindingFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeFieldInfo::GetDeclaringTypeInternal
// Il2CppName: GetDeclaringTypeInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType* (System::Reflection::RuntimeFieldInfo::*)()>(&System::Reflection::RuntimeFieldInfo::GetDeclaringTypeInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeFieldInfo*), "GetDeclaringTypeInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeFieldInfo::get_ReflectedTypeInternal
// Il2CppName: get_ReflectedTypeInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType* (System::Reflection::RuntimeFieldInfo::*)()>(&System::Reflection::RuntimeFieldInfo::get_ReflectedTypeInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeFieldInfo*), "get_ReflectedTypeInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeFieldInfo::GetRuntimeModule
// Il2CppName: GetRuntimeModule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::RuntimeModule* (System::Reflection::RuntimeFieldInfo::*)()>(&System::Reflection::RuntimeFieldInfo::GetRuntimeModule)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeFieldInfo*), "GetRuntimeModule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeFieldInfo::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::RuntimeFieldInfo::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Reflection::RuntimeFieldInfo::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeFieldInfo*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeFieldInfo::get_Module
// Il2CppName: get_Module
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Module* (System::Reflection::RuntimeFieldInfo::*)()>(&System::Reflection::RuntimeFieldInfo::get_Module)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::RuntimeFieldInfo*), "get_Module", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::RuntimeFieldInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
