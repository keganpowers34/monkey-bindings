// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Permissions.CodeAccessSecurityAttribute
#include "System/Security/Permissions/CodeAccessSecurityAttribute.hpp"
// Including type: System.Security.Permissions.SecurityPermissionFlag
#include "System/Security/Permissions/SecurityPermissionFlag.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: IPermission
  class IPermission;
}
// Completed forward declares
// Type namespace: System.Security.Permissions
namespace System::Security::Permissions {
  // Forward declaring type: SecurityPermissionAttribute
  class SecurityPermissionAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Permissions::SecurityPermissionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Permissions::SecurityPermissionAttribute*, "System.Security.Permissions", "SecurityPermissionAttribute");
// Type namespace: System.Security.Permissions
namespace System::Security::Permissions {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Permissions.SecurityPermissionAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A52F04
  // [ComVisibleAttribute] Offset: A52F04
  // [ObsoleteAttribute] Offset: A52F04
  class SecurityPermissionAttribute : public ::System::Security::Permissions::CodeAccessSecurityAttribute {
    public:
    // Writing base type padding for base size: 0x15 to desired offset: 0x18
    char ___base_padding[0x3] = {};
    public:
    // private System.Security.Permissions.SecurityPermissionFlag m_Flags
    // Size: 0x4
    // Offset: 0x18
    ::System::Security::Permissions::SecurityPermissionFlag m_Flags;
    // Field size check
    static_assert(sizeof(::System::Security::Permissions::SecurityPermissionFlag) == 0x4);
    public:
    // Creating conversion operator: operator ::System::Security::Permissions::SecurityPermissionFlag
    constexpr operator ::System::Security::Permissions::SecurityPermissionFlag() const noexcept {
      return m_Flags;
    }
    // Get instance field reference: private System.Security.Permissions.SecurityPermissionFlag m_Flags
    [[deprecated("Use field access instead!")]] ::System::Security::Permissions::SecurityPermissionFlag& dyn_m_Flags();
    // public System.Void set_SkipVerification(System.Boolean value)
    // Offset: 0x12F0574
    void set_SkipVerification(bool value);
    // public override System.Security.IPermission CreatePermission()
    // Offset: 0x12F0590
    // Implemented from: System.Security.Permissions.SecurityAttribute
    // Base method: System.Security.IPermission SecurityAttribute::CreatePermission()
    ::System::Security::IPermission* CreatePermission();
  }; // System.Security.Permissions.SecurityPermissionAttribute
  #pragma pack(pop)
  static check_size<sizeof(SecurityPermissionAttribute), 24 + sizeof(::System::Security::Permissions::SecurityPermissionFlag)> __System_Security_Permissions_SecurityPermissionAttributeSizeCheck;
  static_assert(sizeof(SecurityPermissionAttribute) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Permissions::SecurityPermissionAttribute::set_SkipVerification
// Il2CppName: set_SkipVerification
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Permissions::SecurityPermissionAttribute::*)(bool)>(&System::Security::Permissions::SecurityPermissionAttribute::set_SkipVerification)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Permissions::SecurityPermissionAttribute*), "set_SkipVerification", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Permissions::SecurityPermissionAttribute::CreatePermission
// Il2CppName: CreatePermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::IPermission* (System::Security::Permissions::SecurityPermissionAttribute::*)()>(&System::Security::Permissions::SecurityPermissionAttribute::CreatePermission)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Permissions::SecurityPermissionAttribute*), "CreatePermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
