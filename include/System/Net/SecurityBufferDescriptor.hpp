// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: SecurityBufferDescriptor
  class SecurityBufferDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::SecurityBufferDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::SecurityBufferDescriptor*, "System.Net", "SecurityBufferDescriptor");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.SecurityBufferDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  class SecurityBufferDescriptor : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Int32 Version
    // Size: 0x4
    // Offset: 0x10
    int Version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 Count
    // Size: 0x4
    // Offset: 0x14
    int Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Void* UnmanagedPointer
    // Size: 0x8
    // Offset: 0x18
    void* UnmanagedPointer;
    // Field size check
    static_assert(sizeof(void*) == 0x8);
    public:
    // Get instance field reference: public readonly System.Int32 Version
    [[deprecated("Use field access instead!")]] int& dyn_Version();
    // Get instance field reference: public readonly System.Int32 Count
    [[deprecated("Use field access instead!")]] int& dyn_Count();
    // Get instance field reference: public System.Void* UnmanagedPointer
    [[deprecated("Use field access instead!")]] void*& dyn_UnmanagedPointer();
    // public System.Void .ctor(System.Int32 count)
    // Offset: 0xEE3A88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecurityBufferDescriptor* New_ctor(int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::SecurityBufferDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecurityBufferDescriptor*, creationType>(count)));
    }
    // System.Void DebugDump()
    // Offset: 0xEE3AB8
    void DebugDump();
  }; // System.Net.SecurityBufferDescriptor
  #pragma pack(pop)
  static check_size<sizeof(SecurityBufferDescriptor), 24 + sizeof(void*)> __System_Net_SecurityBufferDescriptorSizeCheck;
  static_assert(sizeof(SecurityBufferDescriptor) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::SecurityBufferDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::SecurityBufferDescriptor::DebugDump
// Il2CppName: DebugDump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::SecurityBufferDescriptor::*)()>(&System::Net::SecurityBufferDescriptor::DebugDump)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::SecurityBufferDescriptor*), "DebugDump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
