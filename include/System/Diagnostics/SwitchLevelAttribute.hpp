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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: SwitchLevelAttribute
  class SwitchLevelAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::SwitchLevelAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::SwitchLevelAttribute*, "System.Diagnostics", "SwitchLevelAttribute");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.SwitchLevelAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A5E544
  class SwitchLevelAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Type type
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Type*
    constexpr operator ::System::Type*() const noexcept {
      return type;
    }
    // Get instance field reference: private System.Type type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_type();
    // public System.Void .ctor(System.Type switchLevelType)
    // Offset: 0x14C9E44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SwitchLevelAttribute* New_ctor(::System::Type* switchLevelType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::SwitchLevelAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SwitchLevelAttribute*, creationType>(switchLevelType)));
    }
    // public System.Void set_SwitchLevelType(System.Type value)
    // Offset: 0x14C9E74
    void set_SwitchLevelType(::System::Type* value);
  }; // System.Diagnostics.SwitchLevelAttribute
  #pragma pack(pop)
  static check_size<sizeof(SwitchLevelAttribute), 16 + sizeof(::System::Type*)> __System_Diagnostics_SwitchLevelAttributeSizeCheck;
  static_assert(sizeof(SwitchLevelAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::SwitchLevelAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::SwitchLevelAttribute::set_SwitchLevelType
// Il2CppName: set_SwitchLevelType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::SwitchLevelAttribute::*)(::System::Type*)>(&System::Diagnostics::SwitchLevelAttribute::set_SwitchLevelType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::SwitchLevelAttribute*), "set_SwitchLevelType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
