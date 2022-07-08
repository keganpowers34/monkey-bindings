// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.AsymmetricAlgorithm
#include "System/Security/Cryptography/AsymmetricAlgorithm.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSAEncryptionPadding
  class RSAEncryptionPadding;
  // Forward declaring type: HashAlgorithmName
  struct HashAlgorithmName;
  // Forward declaring type: RSASignaturePadding
  class RSASignaturePadding;
  // Forward declaring type: RSAParameters
  struct RSAParameters;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSA
  class RSA;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::RSA);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSA*, "System.Security.Cryptography", "RSA");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RSA
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A53500
  class RSA : public ::System::Security::Cryptography::AsymmetricAlgorithm {
    public:
    // static public System.Security.Cryptography.RSA Create()
    // Offset: 0x15C7F38
    static ::System::Security::Cryptography::RSA* Create();
    // static public System.Security.Cryptography.RSA Create(System.String algName)
    // Offset: 0x15C7FE4
    static ::System::Security::Cryptography::RSA* Create(::StringW algName);
    // public System.Byte[] Encrypt(System.Byte[] data, System.Security.Cryptography.RSAEncryptionPadding padding)
    // Offset: 0x15C806C
    ::ArrayW<uint8_t> Encrypt(::ArrayW<uint8_t> data, ::System::Security::Cryptography::RSAEncryptionPadding* padding);
    // public System.Byte[] Decrypt(System.Byte[] data, System.Security.Cryptography.RSAEncryptionPadding padding)
    // Offset: 0x15C812C
    ::ArrayW<uint8_t> Decrypt(::ArrayW<uint8_t> data, ::System::Security::Cryptography::RSAEncryptionPadding* padding);
    // public System.Byte[] SignHash(System.Byte[] hash, System.Security.Cryptography.HashAlgorithmName hashAlgorithm, System.Security.Cryptography.RSASignaturePadding padding)
    // Offset: 0x15C8170
    ::ArrayW<uint8_t> SignHash(::ArrayW<uint8_t> hash, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding* padding);
    // public System.Boolean VerifyHash(System.Byte[] hash, System.Byte[] signature, System.Security.Cryptography.HashAlgorithmName hashAlgorithm, System.Security.Cryptography.RSASignaturePadding padding)
    // Offset: 0x15C81B4
    bool VerifyHash(::ArrayW<uint8_t> hash, ::ArrayW<uint8_t> signature, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding* padding);
    // protected System.Byte[] HashData(System.Byte[] data, System.Int32 offset, System.Int32 count, System.Security.Cryptography.HashAlgorithmName hashAlgorithm)
    // Offset: 0x15C81F8
    ::ArrayW<uint8_t> HashData(::ArrayW<uint8_t> data, int offset, int count, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);
    // protected System.Byte[] HashData(System.IO.Stream data, System.Security.Cryptography.HashAlgorithmName hashAlgorithm)
    // Offset: 0x15C823C
    ::ArrayW<uint8_t> HashData(::System::IO::Stream* data, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);
    // public System.Byte[] SignData(System.Byte[] data, System.Security.Cryptography.HashAlgorithmName hashAlgorithm, System.Security.Cryptography.RSASignaturePadding padding)
    // Offset: 0x15C8280
    ::ArrayW<uint8_t> SignData(::ArrayW<uint8_t> data, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding* padding);
    // public System.Byte[] SignData(System.Byte[] data, System.Int32 offset, System.Int32 count, System.Security.Cryptography.HashAlgorithmName hashAlgorithm, System.Security.Cryptography.RSASignaturePadding padding)
    // Offset: 0x15C8340
    ::ArrayW<uint8_t> SignData(::ArrayW<uint8_t> data, int offset, int count, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding* padding);
    // public System.Byte[] SignData(System.IO.Stream data, System.Security.Cryptography.HashAlgorithmName hashAlgorithm, System.Security.Cryptography.RSASignaturePadding padding)
    // Offset: 0x15C85A0
    ::ArrayW<uint8_t> SignData(::System::IO::Stream* data, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding* padding);
    // public System.Boolean VerifyData(System.Byte[] data, System.Byte[] signature, System.Security.Cryptography.HashAlgorithmName hashAlgorithm, System.Security.Cryptography.RSASignaturePadding padding)
    // Offset: 0x15C86E8
    bool VerifyData(::ArrayW<uint8_t> data, ::ArrayW<uint8_t> signature, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding* padding);
    // public System.Boolean VerifyData(System.Byte[] data, System.Int32 offset, System.Int32 count, System.Byte[] signature, System.Security.Cryptography.HashAlgorithmName hashAlgorithm, System.Security.Cryptography.RSASignaturePadding padding)
    // Offset: 0x15C87B0
    bool VerifyData(::ArrayW<uint8_t> data, int offset, int count, ::ArrayW<uint8_t> signature, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding* padding);
    // public System.Boolean VerifyData(System.IO.Stream data, System.Byte[] signature, System.Security.Cryptography.HashAlgorithmName hashAlgorithm, System.Security.Cryptography.RSASignaturePadding padding)
    // Offset: 0x15C899C
    bool VerifyData(::System::IO::Stream* data, ::ArrayW<uint8_t> signature, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding* padding);
    // static private System.Exception DerivedClassMustOverride()
    // Offset: 0x15C80B0
    static ::System::Exception* DerivedClassMustOverride();
    // static System.Exception HashAlgorithmNameNullOrEmpty()
    // Offset: 0x15C8504
    static ::System::Exception* HashAlgorithmNameNullOrEmpty();
    // public System.Byte[] DecryptValue(System.Byte[] rgb)
    // Offset: 0x15C8B0C
    ::ArrayW<uint8_t> DecryptValue(::ArrayW<uint8_t> rgb);
    // public System.Byte[] EncryptValue(System.Byte[] rgb)
    // Offset: 0x15C8B8C
    ::ArrayW<uint8_t> EncryptValue(::ArrayW<uint8_t> rgb);
    // public System.Security.Cryptography.RSAParameters ExportParameters(System.Boolean includePrivateParameters)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Security::Cryptography::RSAParameters ExportParameters(bool includePrivateParameters);
    // public System.Void ImportParameters(System.Security.Cryptography.RSAParameters parameters)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ImportParameters(::System::Security::Cryptography::RSAParameters parameters);
    // protected System.Void .ctor()
    // Offset: 0x15C7F30
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.Void AsymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSA* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::RSA::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSA*, creationType>()));
    }
    // public override System.String get_KeyExchangeAlgorithm()
    // Offset: 0x15C8C0C
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.String AsymmetricAlgorithm::get_KeyExchangeAlgorithm()
    ::StringW get_KeyExchangeAlgorithm();
    // public override System.String get_SignatureAlgorithm()
    // Offset: 0x15C8C54
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.String AsymmetricAlgorithm::get_SignatureAlgorithm()
    ::StringW get_SignatureAlgorithm();
    // public override System.Void FromXmlString(System.String xmlString)
    // Offset: 0x15C8C9C
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.Void AsymmetricAlgorithm::FromXmlString(System.String xmlString)
    void FromXmlString(::StringW xmlString);
    // public override System.String ToXmlString(System.Boolean includePrivateParameters)
    // Offset: 0x15C92D8
    // Implemented from: System.Security.Cryptography.AsymmetricAlgorithm
    // Base method: System.String AsymmetricAlgorithm::ToXmlString(System.Boolean includePrivateParameters)
    ::StringW ToXmlString(bool includePrivateParameters);
  }; // System.Security.Cryptography.RSA
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA* (*)()>(&System::Security::Cryptography::RSA::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA* (*)(::StringW)>(&System::Security::Cryptography::RSA::Create)> {
  static const MethodInfo* get() {
    static auto* algName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algName});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::Encrypt
// Il2CppName: Encrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>, ::System::Security::Cryptography::RSAEncryptionPadding*)>(&System::Security::Cryptography::RSA::Encrypt)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* padding = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSAEncryptionPadding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "Encrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, padding});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::Decrypt
// Il2CppName: Decrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>, ::System::Security::Cryptography::RSAEncryptionPadding*)>(&System::Security::Cryptography::RSA::Decrypt)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* padding = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSAEncryptionPadding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "Decrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, padding});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::SignHash
// Il2CppName: SignHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(&System::Security::Cryptography::RSA::SignHash)> {
  static const MethodInfo* get() {
    static auto* hash = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* hashAlgorithm = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "HashAlgorithmName")->byval_arg;
    static auto* padding = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSASignaturePadding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "SignHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hash, hashAlgorithm, padding});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::VerifyHash
// Il2CppName: VerifyHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(&System::Security::Cryptography::RSA::VerifyHash)> {
  static const MethodInfo* get() {
    static auto* hash = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* signature = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* hashAlgorithm = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "HashAlgorithmName")->byval_arg;
    static auto* padding = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSASignaturePadding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "VerifyHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hash, signature, hashAlgorithm, padding});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::HashData
// Il2CppName: HashData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>, int, int, ::System::Security::Cryptography::HashAlgorithmName)>(&System::Security::Cryptography::RSA::HashData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hashAlgorithm = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "HashAlgorithmName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "HashData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, count, hashAlgorithm});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::HashData
// Il2CppName: HashData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::RSA::*)(::System::IO::Stream*, ::System::Security::Cryptography::HashAlgorithmName)>(&System::Security::Cryptography::RSA::HashData)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* hashAlgorithm = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "HashAlgorithmName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "HashData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, hashAlgorithm});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::SignData
// Il2CppName: SignData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(&System::Security::Cryptography::RSA::SignData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* hashAlgorithm = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "HashAlgorithmName")->byval_arg;
    static auto* padding = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSASignaturePadding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "SignData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, hashAlgorithm, padding});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::SignData
// Il2CppName: SignData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>, int, int, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(&System::Security::Cryptography::RSA::SignData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hashAlgorithm = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "HashAlgorithmName")->byval_arg;
    static auto* padding = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSASignaturePadding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "SignData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, count, hashAlgorithm, padding});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::SignData
// Il2CppName: SignData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::RSA::*)(::System::IO::Stream*, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(&System::Security::Cryptography::RSA::SignData)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* hashAlgorithm = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "HashAlgorithmName")->byval_arg;
    static auto* padding = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSASignaturePadding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "SignData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, hashAlgorithm, padding});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::VerifyData
// Il2CppName: VerifyData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(&System::Security::Cryptography::RSA::VerifyData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* signature = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* hashAlgorithm = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "HashAlgorithmName")->byval_arg;
    static auto* padding = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSASignaturePadding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "VerifyData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, signature, hashAlgorithm, padding});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::VerifyData
// Il2CppName: VerifyData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(&System::Security::Cryptography::RSA::VerifyData)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* signature = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* hashAlgorithm = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "HashAlgorithmName")->byval_arg;
    static auto* padding = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSASignaturePadding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "VerifyData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, count, signature, hashAlgorithm, padding});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::VerifyData
// Il2CppName: VerifyData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Security::Cryptography::RSA::*)(::System::IO::Stream*, ::ArrayW<uint8_t>, ::System::Security::Cryptography::HashAlgorithmName, ::System::Security::Cryptography::RSASignaturePadding*)>(&System::Security::Cryptography::RSA::VerifyData)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* signature = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* hashAlgorithm = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "HashAlgorithmName")->byval_arg;
    static auto* padding = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSASignaturePadding")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "VerifyData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, signature, hashAlgorithm, padding});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::DerivedClassMustOverride
// Il2CppName: DerivedClassMustOverride
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)()>(&System::Security::Cryptography::RSA::DerivedClassMustOverride)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "DerivedClassMustOverride", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::HashAlgorithmNameNullOrEmpty
// Il2CppName: HashAlgorithmNameNullOrEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)()>(&System::Security::Cryptography::RSA::HashAlgorithmNameNullOrEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "HashAlgorithmNameNullOrEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::DecryptValue
// Il2CppName: DecryptValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::RSA::DecryptValue)> {
  static const MethodInfo* get() {
    static auto* rgb = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "DecryptValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgb});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::EncryptValue
// Il2CppName: EncryptValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::RSA::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::RSA::EncryptValue)> {
  static const MethodInfo* get() {
    static auto* rgb = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "EncryptValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rgb});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::ExportParameters
// Il2CppName: ExportParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSAParameters (System::Security::Cryptography::RSA::*)(bool)>(&System::Security::Cryptography::RSA::ExportParameters)> {
  static const MethodInfo* get() {
    static auto* includePrivateParameters = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "ExportParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{includePrivateParameters});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::ImportParameters
// Il2CppName: ImportParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSA::*)(::System::Security::Cryptography::RSAParameters)>(&System::Security::Cryptography::RSA::ImportParameters)> {
  static const MethodInfo* get() {
    static auto* parameters = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSAParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "ImportParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameters});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::get_KeyExchangeAlgorithm
// Il2CppName: get_KeyExchangeAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::RSA::*)()>(&System::Security::Cryptography::RSA::get_KeyExchangeAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "get_KeyExchangeAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::get_SignatureAlgorithm
// Il2CppName: get_SignatureAlgorithm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::RSA::*)()>(&System::Security::Cryptography::RSA::get_SignatureAlgorithm)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "get_SignatureAlgorithm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::FromXmlString
// Il2CppName: FromXmlString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::RSA::*)(::StringW)>(&System::Security::Cryptography::RSA::FromXmlString)> {
  static const MethodInfo* get() {
    static auto* xmlString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "FromXmlString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmlString});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::RSA::ToXmlString
// Il2CppName: ToXmlString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::RSA::*)(bool)>(&System::Security::Cryptography::RSA::ToXmlString)> {
  static const MethodInfo* get() {
    static auto* includePrivateParameters = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::RSA*), "ToXmlString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{includePrivateParameters});
  }
};
