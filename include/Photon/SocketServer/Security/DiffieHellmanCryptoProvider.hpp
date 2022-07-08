// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.SocketServer.Security.ICryptoProvider
#include "Photon/SocketServer/Security/ICryptoProvider.hpp"
// Including type: System.Numerics.BigInteger
#include "System/Numerics/BigInteger.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: Rijndael
  class Rijndael;
}
// Completed forward declares
// Type namespace: Photon.SocketServer.Security
namespace Photon::SocketServer::Security {
  // Forward declaring type: DiffieHellmanCryptoProvider
  class DiffieHellmanCryptoProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::SocketServer::Security::DiffieHellmanCryptoProvider);
DEFINE_IL2CPP_ARG_TYPE(::Photon::SocketServer::Security::DiffieHellmanCryptoProvider*, "Photon.SocketServer.Security", "DiffieHellmanCryptoProvider");
// Type namespace: Photon.SocketServer.Security
namespace Photon::SocketServer::Security {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Photon.SocketServer.Security.DiffieHellmanCryptoProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class DiffieHellmanCryptoProvider : public ::Il2CppObject/*, public ::Photon::SocketServer::Security::ICryptoProvider*/ {
    public:
    public:
    // private readonly System.Numerics.BigInteger prime
    // Size: 0x10
    // Offset: 0x10
    ::System::Numerics::BigInteger prime;
    // Field size check
    static_assert(sizeof(::System::Numerics::BigInteger) == 0x10);
    // private readonly System.Numerics.BigInteger secret
    // Size: 0x10
    // Offset: 0x20
    ::System::Numerics::BigInteger secret;
    // Field size check
    static_assert(sizeof(::System::Numerics::BigInteger) == 0x10);
    // private readonly System.Numerics.BigInteger publicKey
    // Size: 0x10
    // Offset: 0x30
    ::System::Numerics::BigInteger publicKey;
    // Field size check
    static_assert(sizeof(::System::Numerics::BigInteger) == 0x10);
    // private System.Security.Cryptography.Rijndael crypto
    // Size: 0x8
    // Offset: 0x40
    ::System::Security::Cryptography::Rijndael* crypto;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::Rijndael*) == 0x8);
    // private System.Byte[] sharedKey
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint8_t> sharedKey;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Photon::SocketServer::Security::ICryptoProvider
    operator ::Photon::SocketServer::Security::ICryptoProvider() noexcept {
      return *reinterpret_cast<::Photon::SocketServer::Security::ICryptoProvider*>(this);
    }
    // Get static field: static private readonly System.Numerics.BigInteger primeRoot
    static ::System::Numerics::BigInteger _get_primeRoot();
    // Set static field: static private readonly System.Numerics.BigInteger primeRoot
    static void _set_primeRoot(::System::Numerics::BigInteger value);
    // Get instance field reference: private readonly System.Numerics.BigInteger prime
    [[deprecated("Use field access instead!")]] ::System::Numerics::BigInteger& dyn_prime();
    // Get instance field reference: private readonly System.Numerics.BigInteger secret
    [[deprecated("Use field access instead!")]] ::System::Numerics::BigInteger& dyn_secret();
    // Get instance field reference: private readonly System.Numerics.BigInteger publicKey
    [[deprecated("Use field access instead!")]] ::System::Numerics::BigInteger& dyn_publicKey();
    // Get instance field reference: private System.Security.Cryptography.Rijndael crypto
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::Rijndael*& dyn_crypto();
    // Get instance field reference: private System.Byte[] sharedKey
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_sharedKey();
    // public System.Void .ctor()
    // Offset: 0x1ABC6FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiffieHellmanCryptoProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiffieHellmanCryptoProvider*, creationType>()));
    }
    // public System.Void .ctor(System.Byte[] cryptoKey)
    // Offset: 0x1ABC9E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiffieHellmanCryptoProvider* New_ctor(::ArrayW<uint8_t> cryptoKey) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::SocketServer::Security::DiffieHellmanCryptoProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiffieHellmanCryptoProvider*, creationType>(cryptoKey)));
    }
    // public System.Byte[] get_PublicKey()
    // Offset: 0x1ABCAC4
    ::ArrayW<uint8_t> get_PublicKey();
    // public System.Void DeriveSharedKey(System.Byte[] otherPartyPublicKey)
    // Offset: 0x1ABCBA8
    void DeriveSharedKey(::ArrayW<uint8_t> otherPartyPublicKey);
    // private System.Byte[] PhotonBigIntArrayToMsBigIntArray(System.Byte[] array)
    // Offset: 0x1ABCDC0
    ::ArrayW<uint8_t> PhotonBigIntArrayToMsBigIntArray(::ArrayW<uint8_t> array);
    // private System.Byte[] MsBigIntArrayToPhotonBigIntArray(System.Byte[] array)
    // Offset: 0x1ABCAF8
    ::ArrayW<uint8_t> MsBigIntArrayToPhotonBigIntArray(::ArrayW<uint8_t> array);
    // public System.Byte[] Encrypt(System.Byte[] data, System.Int32 offset, System.Int32 count)
    // Offset: 0x1ABCF14
    ::ArrayW<uint8_t> Encrypt(::ArrayW<uint8_t> data, int offset, int count);
    // public System.Byte[] Decrypt(System.Byte[] data, System.Int32 offset, System.Int32 count)
    // Offset: 0x1ABD0D0
    ::ArrayW<uint8_t> Decrypt(::ArrayW<uint8_t> data, int offset, int count);
    // public System.Void Dispose()
    // Offset: 0x1ABD28C
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1ABD2F4
    void Dispose(bool disposing);
    // private System.Numerics.BigInteger CalculatePublicKey()
    // Offset: 0x1ABC924
    ::System::Numerics::BigInteger CalculatePublicKey();
    // private System.Numerics.BigInteger CalculateSharedKey(System.Numerics.BigInteger otherPartyPublicKey)
    // Offset: 0x1ABCE78
    ::System::Numerics::BigInteger CalculateSharedKey(::System::Numerics::BigInteger otherPartyPublicKey);
    // private System.Numerics.BigInteger GenerateRandomSecret(System.Int32 secretLength)
    // Offset: 0x1ABC7B0
    ::System::Numerics::BigInteger GenerateRandomSecret(int secretLength);
    // static private System.Void .cctor()
    // Offset: 0x1ABD2F8
    static void _cctor();
  }; // Photon.SocketServer.Security.DiffieHellmanCryptoProvider
  #pragma pack(pop)
  static check_size<sizeof(DiffieHellmanCryptoProvider), 72 + sizeof(::ArrayW<uint8_t>)> __Photon_SocketServer_Security_DiffieHellmanCryptoProviderSizeCheck;
  static_assert(sizeof(DiffieHellmanCryptoProvider) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::SocketServer::Security::DiffieHellmanCryptoProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::SocketServer::Security::DiffieHellmanCryptoProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::SocketServer::Security::DiffieHellmanCryptoProvider::get_PublicKey
// Il2CppName: get_PublicKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)()>(&Photon::SocketServer::Security::DiffieHellmanCryptoProvider::get_PublicKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::SocketServer::Security::DiffieHellmanCryptoProvider*), "get_PublicKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::SocketServer::Security::DiffieHellmanCryptoProvider::DeriveSharedKey
// Il2CppName: DeriveSharedKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)(::ArrayW<uint8_t>)>(&Photon::SocketServer::Security::DiffieHellmanCryptoProvider::DeriveSharedKey)> {
  static const MethodInfo* get() {
    static auto* otherPartyPublicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::SocketServer::Security::DiffieHellmanCryptoProvider*), "DeriveSharedKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{otherPartyPublicKey});
  }
};
// Writing MetadataGetter for method: Photon::SocketServer::Security::DiffieHellmanCryptoProvider::PhotonBigIntArrayToMsBigIntArray
// Il2CppName: PhotonBigIntArrayToMsBigIntArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)(::ArrayW<uint8_t>)>(&Photon::SocketServer::Security::DiffieHellmanCryptoProvider::PhotonBigIntArrayToMsBigIntArray)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::SocketServer::Security::DiffieHellmanCryptoProvider*), "PhotonBigIntArrayToMsBigIntArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array});
  }
};
// Writing MetadataGetter for method: Photon::SocketServer::Security::DiffieHellmanCryptoProvider::MsBigIntArrayToPhotonBigIntArray
// Il2CppName: MsBigIntArrayToPhotonBigIntArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)(::ArrayW<uint8_t>)>(&Photon::SocketServer::Security::DiffieHellmanCryptoProvider::MsBigIntArrayToPhotonBigIntArray)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::SocketServer::Security::DiffieHellmanCryptoProvider*), "MsBigIntArrayToPhotonBigIntArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array});
  }
};
// Writing MetadataGetter for method: Photon::SocketServer::Security::DiffieHellmanCryptoProvider::Encrypt
// Il2CppName: Encrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)(::ArrayW<uint8_t>, int, int)>(&Photon::SocketServer::Security::DiffieHellmanCryptoProvider::Encrypt)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::SocketServer::Security::DiffieHellmanCryptoProvider*), "Encrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, count});
  }
};
// Writing MetadataGetter for method: Photon::SocketServer::Security::DiffieHellmanCryptoProvider::Decrypt
// Il2CppName: Decrypt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)(::ArrayW<uint8_t>, int, int)>(&Photon::SocketServer::Security::DiffieHellmanCryptoProvider::Decrypt)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::SocketServer::Security::DiffieHellmanCryptoProvider*), "Decrypt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, count});
  }
};
// Writing MetadataGetter for method: Photon::SocketServer::Security::DiffieHellmanCryptoProvider::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)()>(&Photon::SocketServer::Security::DiffieHellmanCryptoProvider::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::SocketServer::Security::DiffieHellmanCryptoProvider*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::SocketServer::Security::DiffieHellmanCryptoProvider::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)(bool)>(&Photon::SocketServer::Security::DiffieHellmanCryptoProvider::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::SocketServer::Security::DiffieHellmanCryptoProvider*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: Photon::SocketServer::Security::DiffieHellmanCryptoProvider::CalculatePublicKey
// Il2CppName: CalculatePublicKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::BigInteger (Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)()>(&Photon::SocketServer::Security::DiffieHellmanCryptoProvider::CalculatePublicKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::SocketServer::Security::DiffieHellmanCryptoProvider*), "CalculatePublicKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::SocketServer::Security::DiffieHellmanCryptoProvider::CalculateSharedKey
// Il2CppName: CalculateSharedKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::BigInteger (Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)(::System::Numerics::BigInteger)>(&Photon::SocketServer::Security::DiffieHellmanCryptoProvider::CalculateSharedKey)> {
  static const MethodInfo* get() {
    static auto* otherPartyPublicKey = &::il2cpp_utils::GetClassFromName("System.Numerics", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::SocketServer::Security::DiffieHellmanCryptoProvider*), "CalculateSharedKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{otherPartyPublicKey});
  }
};
// Writing MetadataGetter for method: Photon::SocketServer::Security::DiffieHellmanCryptoProvider::GenerateRandomSecret
// Il2CppName: GenerateRandomSecret
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Numerics::BigInteger (Photon::SocketServer::Security::DiffieHellmanCryptoProvider::*)(int)>(&Photon::SocketServer::Security::DiffieHellmanCryptoProvider::GenerateRandomSecret)> {
  static const MethodInfo* get() {
    static auto* secretLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::SocketServer::Security::DiffieHellmanCryptoProvider*), "GenerateRandomSecret", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{secretLength});
  }
};
// Writing MetadataGetter for method: Photon::SocketServer::Security::DiffieHellmanCryptoProvider::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Photon::SocketServer::Security::DiffieHellmanCryptoProvider::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::SocketServer::Security::DiffieHellmanCryptoProvider*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
