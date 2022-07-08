// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.HashAlgorithm
#include "System/Security/Cryptography/HashAlgorithm.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: SHA1
  class SHA1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::SHA1);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::SHA1*, "System.Security.Cryptography", "SHA1");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.SHA1
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A53578
  class SHA1 : public ::System::Security::Cryptography::HashAlgorithm {
    public:
    // static public System.Security.Cryptography.SHA1 Create()
    // Offset: 0x15CBA94
    static ::System::Security::Cryptography::SHA1* Create();
    // static public System.Security.Cryptography.SHA1 Create(System.String hashName)
    // Offset: 0x15D3494
    static ::System::Security::Cryptography::SHA1* Create(::StringW hashName);
    // protected System.Void .ctor()
    // Offset: 0x15D33F8
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SHA1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::SHA1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SHA1*, creationType>()));
    }
  }; // System.Security.Cryptography.SHA1
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::SHA1* (*)()>(&System::Security::Cryptography::SHA1::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::SHA1* (*)(::StringW)>(&System::Security::Cryptography::SHA1::Create)> {
  static const MethodInfo* get() {
    static auto* hashName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::SHA1*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashName});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::SHA1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
