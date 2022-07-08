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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security
namespace System::Security {
  // Forward declaring type: SecurityElement
  class SecurityElement;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: AsymmetricSignatureDeformatter
  class AsymmetricSignatureDeformatter;
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
  // Forward declaring type: AsymmetricSignatureFormatter
  class AsymmetricSignatureFormatter;
  // Forward declaring type: HashAlgorithm
  class HashAlgorithm;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: SignatureDescription
  class SignatureDescription;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::SignatureDescription);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::SignatureDescription*, "System.Security.Cryptography", "SignatureDescription");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.SignatureDescription
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A53618
  class SignatureDescription : public ::Il2CppObject {
    public:
    public:
    // private System.String _strKey
    // Size: 0x8
    // Offset: 0x10
    ::StringW strKey;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _strDigest
    // Size: 0x8
    // Offset: 0x18
    ::StringW strDigest;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _strFormatter
    // Size: 0x8
    // Offset: 0x20
    ::StringW strFormatter;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _strDeformatter
    // Size: 0x8
    // Offset: 0x28
    ::StringW strDeformatter;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String _strKey
    [[deprecated("Use field access instead!")]] ::StringW& dyn__strKey();
    // Get instance field reference: private System.String _strDigest
    [[deprecated("Use field access instead!")]] ::StringW& dyn__strDigest();
    // Get instance field reference: private System.String _strFormatter
    [[deprecated("Use field access instead!")]] ::StringW& dyn__strFormatter();
    // Get instance field reference: private System.String _strDeformatter
    [[deprecated("Use field access instead!")]] ::StringW& dyn__strDeformatter();
    // public System.Void .ctor(System.Security.SecurityElement el)
    // Offset: 0x15D88F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignatureDescription* New_ctor(::System::Security::SecurityElement* el) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::SignatureDescription::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignatureDescription*, creationType>(el)));
    }
    // public System.String get_KeyAlgorithm()
    // Offset: 0x15D8A00
    ::StringW get_KeyAlgorithm();
    // public System.Void set_KeyAlgorithm(System.String value)
    // Offset: 0x15D8A08
    void set_KeyAlgorithm(::StringW value);
    // public System.String get_DigestAlgorithm()
    // Offset: 0x15D8A10
    ::StringW get_DigestAlgorithm();
    // public System.Void set_DigestAlgorithm(System.String value)
    // Offset: 0x15D8A18
    void set_DigestAlgorithm(::StringW value);
    // public System.String get_FormatterAlgorithm()
    // Offset: 0x15D8A20
    ::StringW get_FormatterAlgorithm();
    // public System.Void set_FormatterAlgorithm(System.String value)
    // Offset: 0x15D8A28
    void set_FormatterAlgorithm(::StringW value);
    // public System.String get_DeformatterAlgorithm()
    // Offset: 0x15D8A30
    ::StringW get_DeformatterAlgorithm();
    // public System.Void set_DeformatterAlgorithm(System.String value)
    // Offset: 0x15D8A38
    void set_DeformatterAlgorithm(::StringW value);
    // public System.Security.Cryptography.AsymmetricSignatureDeformatter CreateDeformatter(System.Security.Cryptography.AsymmetricAlgorithm key)
    // Offset: 0x15CE5BC
    ::System::Security::Cryptography::AsymmetricSignatureDeformatter* CreateDeformatter(::System::Security::Cryptography::AsymmetricAlgorithm* key);
    // public System.Security.Cryptography.AsymmetricSignatureFormatter CreateFormatter(System.Security.Cryptography.AsymmetricAlgorithm key)
    // Offset: 0x15CE6B0
    ::System::Security::Cryptography::AsymmetricSignatureFormatter* CreateFormatter(::System::Security::Cryptography::AsymmetricAlgorithm* key);
    // public System.Security.Cryptography.HashAlgorithm CreateDigest()
    // Offset: 0x15D8A40
    ::System::Security::Cryptography::HashAlgorithm* CreateDigest();
    // public System.Void .ctor()
    // Offset: 0x15CE574
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignatureDescription* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::SignatureDescription::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignatureDescription*, creationType>()));
    }
  }; // System.Security.Cryptography.SignatureDescription
  #pragma pack(pop)
  static check_size<sizeof(SignatureDescription), 40 + sizeof(::StringW)> __System_Security_Cryptography_SignatureDescriptionSizeCheck;
  static_assert(sizeof(SignatureDescription) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::SignatureDescription::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::SignatureDescription::get_KeyAlgorithm
// Il2CppName: get_KeyAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::SignatureDescription::*)()>(&System::Security::Cryptography::SignatureDescription::get_KeyAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SignatureDescription*), "get_KeyAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SignatureDescription::set_KeyAlgorithm
// Il2CppName: set_KeyAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SignatureDescription::*)(::StringW)>(&System::Security::Cryptography::SignatureDescription::set_KeyAlgorithm)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SignatureDescription*), "set_KeyAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SignatureDescription::get_DigestAlgorithm
// Il2CppName: get_DigestAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::SignatureDescription::*)()>(&System::Security::Cryptography::SignatureDescription::get_DigestAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SignatureDescription*), "get_DigestAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SignatureDescription::set_DigestAlgorithm
// Il2CppName: set_DigestAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SignatureDescription::*)(::StringW)>(&System::Security::Cryptography::SignatureDescription::set_DigestAlgorithm)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SignatureDescription*), "set_DigestAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SignatureDescription::get_FormatterAlgorithm
// Il2CppName: get_FormatterAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::SignatureDescription::*)()>(&System::Security::Cryptography::SignatureDescription::get_FormatterAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SignatureDescription*), "get_FormatterAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SignatureDescription::set_FormatterAlgorithm
// Il2CppName: set_FormatterAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SignatureDescription::*)(::StringW)>(&System::Security::Cryptography::SignatureDescription::set_FormatterAlgorithm)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SignatureDescription*), "set_FormatterAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SignatureDescription::get_DeformatterAlgorithm
// Il2CppName: get_DeformatterAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::SignatureDescription::*)()>(&System::Security::Cryptography::SignatureDescription::get_DeformatterAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SignatureDescription*), "get_DeformatterAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SignatureDescription::set_DeformatterAlgorithm
// Il2CppName: set_DeformatterAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::SignatureDescription::*)(::StringW)>(&System::Security::Cryptography::SignatureDescription::set_DeformatterAlgorithm)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SignatureDescription*), "set_DeformatterAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SignatureDescription::CreateDeformatter
// Il2CppName: CreateDeformatter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::AsymmetricSignatureDeformatter* (System::Security::Cryptography::SignatureDescription::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&System::Security::Cryptography::SignatureDescription::CreateDeformatter)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "AsymmetricAlgorithm")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SignatureDescription*), "CreateDeformatter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SignatureDescription::CreateFormatter
// Il2CppName: CreateFormatter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::AsymmetricSignatureFormatter* (System::Security::Cryptography::SignatureDescription::*)(::System::Security::Cryptography::AsymmetricAlgorithm*)>(&System::Security::Cryptography::SignatureDescription::CreateFormatter)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "AsymmetricAlgorithm")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SignatureDescription*), "CreateFormatter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SignatureDescription::CreateDigest
// Il2CppName: CreateDigest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::HashAlgorithm* (System::Security::Cryptography::SignatureDescription::*)()>(&System::Security::Cryptography::SignatureDescription::CreateDigest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SignatureDescription*), "CreateDigest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SignatureDescription::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
