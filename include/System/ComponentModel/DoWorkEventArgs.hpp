// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.CancelEventArgs
#include "System/ComponentModel/CancelEventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: DoWorkEventArgs
  class DoWorkEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::DoWorkEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DoWorkEventArgs*, "System.ComponentModel", "DoWorkEventArgs");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.DoWorkEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class DoWorkEventArgs : public ::System::ComponentModel::CancelEventArgs {
    public:
    // Writing base type padding for base size: 0x11 to desired offset: 0x18
    char ___base_padding[0x7] = {};
    public:
    // private System.Object result
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* result;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object argument
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* argument;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // Get instance field reference: private System.Object result
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_result();
    // Get instance field reference: private System.Object argument
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_argument();
    // public System.Void .ctor(System.Object argument)
    // Offset: 0x1183A04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DoWorkEventArgs* New_ctor(::Il2CppObject* argument) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::DoWorkEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DoWorkEventArgs*, creationType>(argument)));
    }
    // public System.Object get_Argument()
    // Offset: 0x1183A30
    ::Il2CppObject* get_Argument();
    // public System.Object get_Result()
    // Offset: 0x1183A38
    ::Il2CppObject* get_Result();
    // public System.Void set_Result(System.Object value)
    // Offset: 0x1183A40
    void set_Result(::Il2CppObject* value);
  }; // System.ComponentModel.DoWorkEventArgs
  #pragma pack(pop)
  static check_size<sizeof(DoWorkEventArgs), 32 + sizeof(::Il2CppObject*)> __System_ComponentModel_DoWorkEventArgsSizeCheck;
  static_assert(sizeof(DoWorkEventArgs) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::DoWorkEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::DoWorkEventArgs::get_Argument
// Il2CppName: get_Argument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::DoWorkEventArgs::*)()>(&System::ComponentModel::DoWorkEventArgs::get_Argument)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DoWorkEventArgs*), "get_Argument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DoWorkEventArgs::get_Result
// Il2CppName: get_Result
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::DoWorkEventArgs::*)()>(&System::ComponentModel::DoWorkEventArgs::get_Result)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DoWorkEventArgs*), "get_Result", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::DoWorkEventArgs::set_Result
// Il2CppName: set_Result
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::DoWorkEventArgs::*)(::Il2CppObject*)>(&System::ComponentModel::DoWorkEventArgs::set_Result)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::DoWorkEventArgs*), "set_Result", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
