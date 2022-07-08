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
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: AssemblyDelaySignAttribute
  class AssemblyDelaySignAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::AssemblyDelaySignAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyDelaySignAttribute*, "System.Reflection", "AssemblyDelaySignAttribute");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.AssemblyDelaySignAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A51074
  // [AttributeUsageAttribute] Offset: A51074
  class AssemblyDelaySignAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Boolean m_delaySign
    // Size: 0x1
    // Offset: 0x10
    bool m_delaySign;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return m_delaySign;
    }
    // Get instance field reference: private System.Boolean m_delaySign
    [[deprecated("Use field access instead!")]] bool& dyn_m_delaySign();
    // public System.Void .ctor(System.Boolean delaySign)
    // Offset: 0x11F2F48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyDelaySignAttribute* New_ctor(bool delaySign) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::AssemblyDelaySignAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyDelaySignAttribute*, creationType>(delaySign)));
    }
  }; // System.Reflection.AssemblyDelaySignAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssemblyDelaySignAttribute), 16 + sizeof(bool)> __System_Reflection_AssemblyDelaySignAttributeSizeCheck;
  static_assert(sizeof(AssemblyDelaySignAttribute) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::AssemblyDelaySignAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
