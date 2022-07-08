// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: PlayFab.Json
namespace PlayFab::Json {
  // Forward declaring type: IJsonSerializerStrategy
  class IJsonSerializerStrategy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::Json::IJsonSerializerStrategy);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::Json::IJsonSerializerStrategy*, "PlayFab.Json", "IJsonSerializerStrategy");
// Type namespace: PlayFab.Json
namespace PlayFab::Json {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.Json.IJsonSerializerStrategy
  // [TokenAttribute] Offset: FFFFFFFF
  // [GeneratedCodeAttribute] Offset: AD2950
  class IJsonSerializerStrategy {
    public:
    // public System.Boolean TrySerializeNonPrimitiveObject(System.Object input, out System.Object output)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TrySerializeNonPrimitiveObject(::Il2CppObject* input, ByRef<::Il2CppObject*> output);
    // public System.Object DeserializeObject(System.Object value, System.Type type)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* DeserializeObject(::Il2CppObject* value, ::System::Type* type);
  }; // PlayFab.Json.IJsonSerializerStrategy
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::Json::IJsonSerializerStrategy::TrySerializeNonPrimitiveObject
// Il2CppName: TrySerializeNonPrimitiveObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PlayFab::Json::IJsonSerializerStrategy::*)(::Il2CppObject*, ByRef<::Il2CppObject*>)>(&PlayFab::Json::IJsonSerializerStrategy::TrySerializeNonPrimitiveObject)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* output = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::IJsonSerializerStrategy*), "TrySerializeNonPrimitiveObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, output});
  }
};
// Writing MetadataGetter for method: PlayFab::Json::IJsonSerializerStrategy::DeserializeObject
// Il2CppName: DeserializeObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (PlayFab::Json::IJsonSerializerStrategy::*)(::Il2CppObject*, ::System::Type*)>(&PlayFab::Json::IJsonSerializerStrategy::DeserializeObject)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Json::IJsonSerializerStrategy*), "DeserializeObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, type});
  }
};
