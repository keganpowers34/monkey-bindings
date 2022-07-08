// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.DescriptionAttribute
#include "System/ComponentModel/DescriptionAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: SRDescriptionAttribute
  class SRDescriptionAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::SRDescriptionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::SRDescriptionAttribute*, "System", "SRDescriptionAttribute");
// Type namespace: System
namespace System {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: System.SRDescriptionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A5E39C
  class SRDescriptionAttribute : public ::System::ComponentModel::DescriptionAttribute {
    public:
    public:
    // private System.Boolean isReplaced
    // Size: 0x1
    // Offset: 0x18
    bool isReplaced;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept = delete;
    // Get instance field reference: private System.Boolean isReplaced
    [[deprecated("Use field access instead!")]] bool& dyn_isReplaced();
    // public System.Void .ctor(System.String description)
    // Offset: 0xD91760
    // Implemented from: System.ComponentModel.DescriptionAttribute
    // Base method: System.Void DescriptionAttribute::.ctor(System.String description)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SRDescriptionAttribute* New_ctor(::StringW description) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::SRDescriptionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SRDescriptionAttribute*, creationType>(description)));
    }
    // public override System.String get_Description()
    // Offset: 0xD917D8
    // Implemented from: System.ComponentModel.DescriptionAttribute
    // Base method: System.String DescriptionAttribute::get_Description()
    ::StringW get_Description();
  }; // System.SRDescriptionAttribute
  #pragma pack(pop)
  static check_size<sizeof(SRDescriptionAttribute), 24 + sizeof(bool)> __System_SRDescriptionAttributeSizeCheck;
  static_assert(sizeof(SRDescriptionAttribute) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::SRDescriptionAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::SRDescriptionAttribute::get_Description
// Il2CppName: get_Description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::SRDescriptionAttribute::*)()>(&System::SRDescriptionAttribute::get_Description)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::SRDescriptionAttribute*), "get_Description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
