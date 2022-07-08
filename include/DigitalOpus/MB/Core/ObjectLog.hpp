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
// Begin forward declares
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB2_LogLevel
  struct MB2_LogLevel;
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: ObjectLog
  class ObjectLog;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::ObjectLog);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::ObjectLog*, "DigitalOpus.MB.Core", "ObjectLog");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.ObjectLog
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectLog : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 pos
    // Size: 0x4
    // Offset: 0x10
    int pos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: pos and: logMessages
    char __padding0[0x4] = {};
    // private System.String[] logMessages
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::StringW> logMessages;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Get instance field reference: private System.Int32 pos
    [[deprecated("Use field access instead!")]] int& dyn_pos();
    // Get instance field reference: private System.String[] logMessages
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_logMessages();
    // private System.Void _CacheLogMessage(System.String msg)
    // Offset: 0x1128CAC
    void _CacheLogMessage(::StringW msg);
    // public System.Void .ctor(System.Int16 bufferSize)
    // Offset: 0x1128D54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectLog* New_ctor(int16_t bufferSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::ObjectLog::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectLog*, creationType>(bufferSize)));
    }
    // public System.Void Log(DigitalOpus.MB.Core.MB2_LogLevel l, System.String msg, DigitalOpus.MB.Core.MB2_LogLevel currentThreshold)
    // Offset: 0x1128DC4
    void Log(::DigitalOpus::MB::Core::MB2_LogLevel l, ::StringW msg, ::DigitalOpus::MB::Core::MB2_LogLevel currentThreshold);
    // public System.Void Error(System.String msg, params System.Object[] args)
    // Offset: 0x1128E00
    void Error(::StringW msg, ::ArrayW<::Il2CppObject*> args);
    // public System.Void Warn(System.String msg, params System.Object[] args)
    // Offset: 0x1128E34
    void Warn(::StringW msg, ::ArrayW<::Il2CppObject*> args);
    // public System.Void Info(System.String msg, params System.Object[] args)
    // Offset: 0x1128E68
    void Info(::StringW msg, ::ArrayW<::Il2CppObject*> args);
    // public System.Void LogDebug(System.String msg, params System.Object[] args)
    // Offset: 0x1128E9C
    void LogDebug(::StringW msg, ::ArrayW<::Il2CppObject*> args);
    // public System.Void Trace(System.String msg, params System.Object[] args)
    // Offset: 0x1128ED0
    void Trace(::StringW msg, ::ArrayW<::Il2CppObject*> args);
    // public System.String Dump()
    // Offset: 0x1128F04
    ::StringW Dump();
  }; // DigitalOpus.MB.Core.ObjectLog
  #pragma pack(pop)
  static check_size<sizeof(ObjectLog), 24 + sizeof(::ArrayW<::StringW>)> __DigitalOpus_MB_Core_ObjectLogSizeCheck;
  static_assert(sizeof(ObjectLog) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::ObjectLog::_CacheLogMessage
// Il2CppName: _CacheLogMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::ObjectLog::*)(::StringW)>(&DigitalOpus::MB::Core::ObjectLog::_CacheLogMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::ObjectLog*), "_CacheLogMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::ObjectLog::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::ObjectLog::Log
// Il2CppName: Log
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::ObjectLog::*)(::DigitalOpus::MB::Core::MB2_LogLevel, ::StringW, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&DigitalOpus::MB::Core::ObjectLog::Log)> {
  static const MethodInfo* get() {
    static auto* l = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_LogLevel")->byval_arg;
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* currentThreshold = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "MB2_LogLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::ObjectLog*), "Log", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{l, msg, currentThreshold});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::ObjectLog::Error
// Il2CppName: Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::ObjectLog::*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&DigitalOpus::MB::Core::ObjectLog::Error)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::ObjectLog*), "Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, args});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::ObjectLog::Warn
// Il2CppName: Warn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::ObjectLog::*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&DigitalOpus::MB::Core::ObjectLog::Warn)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::ObjectLog*), "Warn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, args});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::ObjectLog::Info
// Il2CppName: Info
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::ObjectLog::*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&DigitalOpus::MB::Core::ObjectLog::Info)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::ObjectLog*), "Info", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, args});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::ObjectLog::LogDebug
// Il2CppName: LogDebug
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::ObjectLog::*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&DigitalOpus::MB::Core::ObjectLog::LogDebug)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::ObjectLog*), "LogDebug", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, args});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::ObjectLog::Trace
// Il2CppName: Trace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::ObjectLog::*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&DigitalOpus::MB::Core::ObjectLog::Trace)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::ObjectLog*), "Trace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, args});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::ObjectLog::Dump
// Il2CppName: Dump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (DigitalOpus::MB::Core::ObjectLog::*)()>(&DigitalOpus::MB::Core::ObjectLog::Dump)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::ObjectLog*), "Dump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
