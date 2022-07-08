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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSA
  class RSA;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Forward declaring type: MD5SHA1
  class MD5SHA1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Cryptography::MD5SHA1);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::MD5SHA1*, "Mono.Security.Cryptography", "MD5SHA1");
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.MD5SHA1
  // [TokenAttribute] Offset: FFFFFFFF
  class MD5SHA1 : public ::System::Security::Cryptography::HashAlgorithm {
    public:
    // Writing base type padding for base size: 0x25 to desired offset: 0x28
    char ___base_padding[0x3] = {};
    public:
    // private System.Security.Cryptography.HashAlgorithm md5
    // Size: 0x8
    // Offset: 0x28
    ::System::Security::Cryptography::HashAlgorithm* md5;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::HashAlgorithm*) == 0x8);
    // private System.Security.Cryptography.HashAlgorithm sha
    // Size: 0x8
    // Offset: 0x30
    ::System::Security::Cryptography::HashAlgorithm* sha;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::HashAlgorithm*) == 0x8);
    // private System.Boolean hashing
    // Size: 0x1
    // Offset: 0x38
    bool hashing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Security.Cryptography.HashAlgorithm md5
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::HashAlgorithm*& dyn_md5();
    // Get instance field reference: private System.Security.Cryptography.HashAlgorithm sha
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::HashAlgorithm*& dyn_sha();
    // Get instance field reference: private System.Boolean hashing
    [[deprecated("Use field access instead!")]] bool& dyn_hashing();
    // public System.Void .ctor()
    // Offset: 0x16D02B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MD5SHA1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Cryptography::MD5SHA1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MD5SHA1*, creationType>()));
    }
    // public System.Byte[] CreateSignature(System.Security.Cryptography.RSA rsa)
    // Offset: 0x16D0538
    ::ArrayW<uint8_t> CreateSignature(::System::Security::Cryptography::RSA* rsa);
    // public System.Boolean VerifySignature(System.Security.Cryptography.RSA rsa, System.Byte[] rgbSignature)
    // Offset: 0x16D0628
    bool VerifySignature(::System::Security::Cryptography::RSA* rsa, ::ArrayW<uint8_t> rgbSignature);
    // public override System.Void Initialize()
    // Offset: 0x16D0330
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::Initialize()
    void Initialize();
    // protected override System.Byte[] HashFinal()
    // Offset: 0x16D0384
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Byte[] HashAlgorithm::HashFinal()
    ::ArrayW<uint8_t> HashFinal();
    // protected override System.Void HashCore(System.Byte[] array, System.Int32 ibStart, System.Int32 cbSize)
    // Offset: 0x16D04B0
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::HashCore(System.Byte[] array, System.Int32 ibStart, System.Int32 cbSize)
    void HashCore(::ArrayW<uint8_t> array, int ibStart, int cbSize);
  }; // Mono.Security.Cryptography.MD5SHA1
  #pragma pack(pop)
  static check_size<sizeof(MD5SHA1), 56 + sizeof(bool)> __Mono_Security_Cryptography_MD5SHA1SizeCheck;
  static_assert(sizeof(MD5SHA1) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD5SHA1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD5SHA1::CreateSignature
// Il2CppName: CreateSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Cryptography::MD5SHA1::*)(::System::Security::Cryptography::RSA*)>(&Mono::Security::Cryptography::MD5SHA1::CreateSignature)> {
  static const MethodInfo* get() {
    static auto* rsa = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSA")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD5SHA1*), "CreateSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rsa});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD5SHA1::VerifySignature
// Il2CppName: VerifySignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Cryptography::MD5SHA1::*)(::System::Security::Cryptography::RSA*, ::ArrayW<uint8_t>)>(&Mono::Security::Cryptography::MD5SHA1::VerifySignature)> {
  static const MethodInfo* get() {
    static auto* rsa = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSA")->byval_arg;
    static auto* rgbSignature = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD5SHA1*), "VerifySignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rsa, rgbSignature});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD5SHA1::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::MD5SHA1::*)()>(&Mono::Security::Cryptography::MD5SHA1::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD5SHA1*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD5SHA1::HashFinal
// Il2CppName: HashFinal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Cryptography::MD5SHA1::*)()>(&Mono::Security::Cryptography::MD5SHA1::HashFinal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD5SHA1*), "HashFinal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Cryptography::MD5SHA1::HashCore
// Il2CppName: HashCore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Cryptography::MD5SHA1::*)(::ArrayW<uint8_t>, int, int)>(&Mono::Security::Cryptography::MD5SHA1::HashCore)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ibStart = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cbSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Cryptography::MD5SHA1*), "HashCore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, ibStart, cbSize});
  }
};
