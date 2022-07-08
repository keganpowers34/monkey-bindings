// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: AssemblyKeyFileAttribute
  class AssemblyKeyFileAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::AssemblyKeyFileAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyKeyFileAttribute*, "System.Reflection", "AssemblyKeyFileAttribute");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.AssemblyKeyFileAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A51028
  // [AttributeUsageAttribute] Offset: A51028
  class AssemblyKeyFileAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String m_keyFile
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_keyFile;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return m_keyFile;
    }
    // Get instance field reference: private System.String m_keyFile
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_keyFile();
    // public System.Void .ctor(System.String keyFile)
    // Offset: 0x11F306C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyKeyFileAttribute* New_ctor(::StringW keyFile) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::AssemblyKeyFileAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyKeyFileAttribute*, creationType>(keyFile)));
    }
  }; // System.Reflection.AssemblyKeyFileAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssemblyKeyFileAttribute), 16 + sizeof(::StringW)> __System_Reflection_AssemblyKeyFileAttributeSizeCheck;
  static_assert(sizeof(AssemblyKeyFileAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::AssemblyKeyFileAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
