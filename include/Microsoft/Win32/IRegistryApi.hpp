// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Microsoft::Win32
namespace Microsoft::Win32 {
  // Forward declaring type: RegistryKey
  class RegistryKey;
  // Forward declaring type: RegistryValueOptions
  struct RegistryValueOptions;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Forward declaring type: IRegistryApi
  class IRegistryApi;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Microsoft::Win32::IRegistryApi);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::IRegistryApi*, "Microsoft.Win32", "IRegistryApi");
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.IRegistryApi
  // [TokenAttribute] Offset: FFFFFFFF
  class IRegistryApi {
    public:
    // public Microsoft.Win32.RegistryKey OpenSubKey(Microsoft.Win32.RegistryKey rkey, System.String keyname, System.Boolean writtable)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Microsoft::Win32::RegistryKey* OpenSubKey(::Microsoft::Win32::RegistryKey* rkey, ::StringW keyname, bool writtable);
    // public System.Void Flush(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Flush(::Microsoft::Win32::RegistryKey* rkey);
    // public System.Void Close(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Close(::Microsoft::Win32::RegistryKey* rkey);
    // public System.Object GetValue(Microsoft.Win32.RegistryKey rkey, System.String name, System.Object default_value, Microsoft.Win32.RegistryValueOptions options)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* GetValue(::Microsoft::Win32::RegistryKey* rkey, ::StringW name, ::Il2CppObject* default_value, ::Microsoft::Win32::RegistryValueOptions options);
    // public System.String[] GetSubKeyNames(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::StringW> GetSubKeyNames(::Microsoft::Win32::RegistryKey* rkey);
    // public System.String ToString(Microsoft.Win32.RegistryKey rkey)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW ToString(::Microsoft::Win32::RegistryKey* rkey);
    // public System.IntPtr GetHandle(Microsoft.Win32.RegistryKey key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::IntPtr GetHandle(::Microsoft::Win32::RegistryKey* key);
  }; // Microsoft.Win32.IRegistryApi
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Microsoft::Win32::IRegistryApi::OpenSubKey
// Il2CppName: OpenSubKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Microsoft::Win32::RegistryKey* (Microsoft::Win32::IRegistryApi::*)(::Microsoft::Win32::RegistryKey*, ::StringW, bool)>(&Microsoft::Win32::IRegistryApi::OpenSubKey)> {
  static const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    static auto* keyname = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* writtable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::IRegistryApi*), "OpenSubKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey, keyname, writtable});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::IRegistryApi::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::IRegistryApi::*)(::Microsoft::Win32::RegistryKey*)>(&Microsoft::Win32::IRegistryApi::Flush)> {
  static const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::IRegistryApi*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::IRegistryApi::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Microsoft::Win32::IRegistryApi::*)(::Microsoft::Win32::RegistryKey*)>(&Microsoft::Win32::IRegistryApi::Close)> {
  static const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::IRegistryApi*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::IRegistryApi::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Microsoft::Win32::IRegistryApi::*)(::Microsoft::Win32::RegistryKey*, ::StringW, ::Il2CppObject*, ::Microsoft::Win32::RegistryValueOptions)>(&Microsoft::Win32::IRegistryApi::GetValue)> {
  static const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* default_value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryValueOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::IRegistryApi*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey, name, default_value, options});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::IRegistryApi::GetSubKeyNames
// Il2CppName: GetSubKeyNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (Microsoft::Win32::IRegistryApi::*)(::Microsoft::Win32::RegistryKey*)>(&Microsoft::Win32::IRegistryApi::GetSubKeyNames)> {
  static const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::IRegistryApi*), "GetSubKeyNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::IRegistryApi::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Microsoft::Win32::IRegistryApi::*)(::Microsoft::Win32::RegistryKey*)>(&Microsoft::Win32::IRegistryApi::ToString)> {
  static const MethodInfo* get() {
    static auto* rkey = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::IRegistryApi*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rkey});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::IRegistryApi::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (Microsoft::Win32::IRegistryApi::*)(::Microsoft::Win32::RegistryKey*)>(&Microsoft::Win32::IRegistryApi::GetHandle)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("Microsoft.Win32", "RegistryKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::IRegistryApi*), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
