// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ParameterizedStrings
#include "System/ParameterizedStrings.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ParameterizedStrings::LowLevelStack);
DEFINE_IL2CPP_ARG_TYPE(::System::ParameterizedStrings::LowLevelStack*, "System", "ParameterizedStrings/LowLevelStack");
// Type namespace: System
namespace System {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.ParameterizedStrings/LowLevelStack
  // [TokenAttribute] Offset: FFFFFFFF
  class ParameterizedStrings::LowLevelStack : public ::Il2CppObject {
    public:
    public:
    // private System.ParameterizedStrings/FormatParam[] _arr
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::System::ParameterizedStrings::FormatParam> arr;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::ParameterizedStrings::FormatParam>) == 0x8);
    // private System.Int32 _count
    // Size: 0x4
    // Offset: 0x18
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.ParameterizedStrings/FormatParam[] _arr
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::ParameterizedStrings::FormatParam>& dyn__arr();
    // Get instance field reference: private System.Int32 _count
    [[deprecated("Use field access instead!")]] int& dyn__count();
    // public System.ParameterizedStrings/FormatParam Pop()
    // Offset: 0x11EF64C
    ::System::ParameterizedStrings::FormatParam Pop();
    // public System.Void Push(System.ParameterizedStrings/FormatParam item)
    // Offset: 0x11EF9E8
    void Push(::System::ParameterizedStrings::FormatParam item);
    // public System.Void Clear()
    // Offset: 0x11EED70
    void Clear();
    // public System.Void .ctor()
    // Offset: 0x11EED18
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParameterizedStrings::LowLevelStack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ParameterizedStrings::LowLevelStack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParameterizedStrings::LowLevelStack*, creationType>()));
    }
  }; // System.ParameterizedStrings/LowLevelStack
  #pragma pack(pop)
  static check_size<sizeof(ParameterizedStrings::LowLevelStack), 24 + sizeof(int)> __System_ParameterizedStrings_LowLevelStackSizeCheck;
  static_assert(sizeof(ParameterizedStrings::LowLevelStack) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ParameterizedStrings::LowLevelStack::Pop
// Il2CppName: Pop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ParameterizedStrings::FormatParam (System::ParameterizedStrings::LowLevelStack::*)()>(&System::ParameterizedStrings::LowLevelStack::Pop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ParameterizedStrings::LowLevelStack*), "Pop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ParameterizedStrings::LowLevelStack::Push
// Il2CppName: Push
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ParameterizedStrings::LowLevelStack::*)(::System::ParameterizedStrings::FormatParam)>(&System::ParameterizedStrings::LowLevelStack::Push)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("System", "ParameterizedStrings/FormatParam")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ParameterizedStrings::LowLevelStack*), "Push", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: System::ParameterizedStrings::LowLevelStack::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ParameterizedStrings::LowLevelStack::*)()>(&System::ParameterizedStrings::LowLevelStack::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ParameterizedStrings::LowLevelStack*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ParameterizedStrings::LowLevelStack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
