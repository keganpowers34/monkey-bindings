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
  // Forward declaring type: AssemblyFileVersionAttribute
  class AssemblyFileVersionAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::AssemblyFileVersionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyFileVersionAttribute*, "System.Reflection", "AssemblyFileVersionAttribute");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.AssemblyFileVersionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A50FDC
  // [AttributeUsageAttribute] Offset: A50FDC
  class AssemblyFileVersionAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String _version
    // Size: 0x8
    // Offset: 0x10
    ::StringW version;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return version;
    }
    // Get instance field reference: private System.String _version
    [[deprecated("Use field access instead!")]] ::StringW& dyn__version();
    // public System.Void .ctor(System.String version)
    // Offset: 0x11F2FA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyFileVersionAttribute* New_ctor(::StringW version) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::AssemblyFileVersionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyFileVersionAttribute*, creationType>(version)));
    }
  }; // System.Reflection.AssemblyFileVersionAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssemblyFileVersionAttribute), 16 + sizeof(::StringW)> __System_Reflection_AssemblyFileVersionAttributeSizeCheck;
  static_assert(sizeof(AssemblyFileVersionAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::AssemblyFileVersionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
