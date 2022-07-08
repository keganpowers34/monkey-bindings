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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Mono.Security.Protocol.Tls
namespace Mono::Security::Protocol::Tls {
  // Forward declaring type: DebugHelper
  class DebugHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Protocol::Tls::DebugHelper);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Tls::DebugHelper*, "Mono.Security.Protocol.Tls", "DebugHelper");
// Type namespace: Mono.Security.Protocol.Tls
namespace Mono::Security::Protocol::Tls {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Tls.DebugHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class DebugHelper : public ::Il2CppObject {
    public:
    // Get static field: static private System.Boolean isInitialized
    static bool _get_isInitialized();
    // Set static field: static private System.Boolean isInitialized
    static void _set_isInitialized(bool value);
    // static public System.Void Initialize()
    // Offset: 0x10753CC
    static void Initialize();
    // static public System.Void WriteLine(System.String format, params System.Object[] args)
    // Offset: 0x1075428
    static void WriteLine(::StringW format, ::ArrayW<::Il2CppObject*> args);
    // static public System.Void WriteLine(System.String message)
    // Offset: 0x107542C
    static void WriteLine(::StringW message);
    // static public System.Void WriteLine(System.String message, System.Byte[] buffer)
    // Offset: 0x1075430
    static void WriteLine(::StringW message, ::ArrayW<uint8_t> buffer);
    // static public System.Void WriteBuffer(System.Byte[] buffer)
    // Offset: 0x1075434
    static void WriteBuffer(::ArrayW<uint8_t> buffer);
    // static public System.Void WriteBuffer(System.Byte[] buffer, System.Int32 index, System.Int32 length)
    // Offset: 0x1075438
    static void WriteBuffer(::ArrayW<uint8_t> buffer, int index, int length);
    // public System.Void .ctor()
    // Offset: 0x107555C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Protocol::Tls::DebugHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugHelper*, creationType>()));
    }
  }; // Mono.Security.Protocol.Tls.DebugHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::DebugHelper::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Security::Protocol::Tls::DebugHelper::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::DebugHelper*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::DebugHelper::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&Mono::Security::Protocol::Tls::DebugHelper::WriteLine)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::DebugHelper*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, args});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::DebugHelper::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&Mono::Security::Protocol::Tls::DebugHelper::WriteLine)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::DebugHelper*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::DebugHelper::WriteLine
// Il2CppName: WriteLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<uint8_t>)>(&Mono::Security::Protocol::Tls::DebugHelper::WriteLine)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::DebugHelper*), "WriteLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, buffer});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::DebugHelper::WriteBuffer
// Il2CppName: WriteBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>)>(&Mono::Security::Protocol::Tls::DebugHelper::WriteBuffer)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::DebugHelper*), "WriteBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::DebugHelper::WriteBuffer
// Il2CppName: WriteBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, int, int)>(&Mono::Security::Protocol::Tls::DebugHelper::WriteBuffer)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Tls::DebugHelper*), "WriteBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, length});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Tls::DebugHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
