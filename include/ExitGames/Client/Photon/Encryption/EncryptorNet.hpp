// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ExitGames.Client.Photon.Encryption.IPhotonEncryptor
#include "ExitGames/Client/Photon/Encryption/IPhotonEncryptor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: ExitGames.Client.Photon.Encryption
namespace ExitGames::Client::Photon::Encryption {
  // Forward declaring type: EncryptorNet
  class EncryptorNet;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::Encryption::EncryptorNet);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::Encryption::EncryptorNet*, "ExitGames.Client.Photon.Encryption", "EncryptorNet");
// Type namespace: ExitGames.Client.Photon.Encryption
namespace ExitGames::Client::Photon::Encryption {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.Encryption.EncryptorNet
  // [TokenAttribute] Offset: FFFFFFFF
  class EncryptorNet : public ::Il2CppObject/*, public ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*/ {
    public:
    // Creating interface conversion operator: operator ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor
    operator ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor() noexcept {
      return *reinterpret_cast<::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*>(this);
    }
    // public System.Void Init(System.Byte[] encryptionSecret, System.Byte[] hmacSecret, System.Byte[] ivBytes, System.Boolean chainingModeGCM, System.Int32 mtu)
    // Offset: 0x1099D50
    void Init(::ArrayW<uint8_t> encryptionSecret, ::ArrayW<uint8_t> hmacSecret, ::ArrayW<uint8_t> ivBytes, bool chainingModeGCM, int mtu);
    // public System.Void Encrypt2(System.Byte[] data, System.Int32 len, System.Byte[] header, System.Byte[] output, System.Int32 outOffset, ref System.Int32 outSize)
    // Offset: 0x1099DB0
    void Encrypt2(::ArrayW<uint8_t> data, int len, ::ArrayW<uint8_t> header, ::ArrayW<uint8_t> output, int outOffset, ByRef<int> outSize);
    // public System.Byte[] Decrypt2(System.Byte[] data, System.Int32 offset, System.Int32 len, System.Byte[] header, out System.Int32 outLen)
    // Offset: 0x1099E10
    ::ArrayW<uint8_t> Decrypt2(::ArrayW<uint8_t> data, int offset, int len, ::ArrayW<uint8_t> header, ByRef<int> outLen);
    // public System.Int32 CalculateEncryptedSize(System.Int32 unencryptedSize)
    // Offset: 0x1099E70
    int CalculateEncryptedSize(int unencryptedSize);
    // public System.Int32 CalculateFragmentLength()
    // Offset: 0x1099ED0
    int CalculateFragmentLength();
    // public System.Void .ctor()
    // Offset: 0x1099F30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EncryptorNet* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::Encryption::EncryptorNet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EncryptorNet*, creationType>()));
    }
  }; // ExitGames.Client.Photon.Encryption.EncryptorNet
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::Encryption::EncryptorNet::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::Encryption::EncryptorNet::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, bool, int)>(&ExitGames::Client::Photon::Encryption::EncryptorNet::Init)> {
  static const MethodInfo* get() {
    static auto* encryptionSecret = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* hmacSecret = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* ivBytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* chainingModeGCM = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* mtu = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::Encryption::EncryptorNet*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{encryptionSecret, hmacSecret, ivBytes, chainingModeGCM, mtu});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::Encryption::EncryptorNet::Encrypt2
// Il2CppName: Encrypt2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ExitGames::Client::Photon::Encryption::EncryptorNet::*)(::ArrayW<uint8_t>, int, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, int, ByRef<int>)>(&ExitGames::Client::Photon::Encryption::EncryptorNet::Encrypt2)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* header = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* output = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* outSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::Encryption::EncryptorNet*), "Encrypt2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, len, header, output, outOffset, outSize});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::Encryption::EncryptorNet::Decrypt2
// Il2CppName: Decrypt2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (ExitGames::Client::Photon::Encryption::EncryptorNet::*)(::ArrayW<uint8_t>, int, int, ::ArrayW<uint8_t>, ByRef<int>)>(&ExitGames::Client::Photon::Encryption::EncryptorNet::Decrypt2)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* header = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* outLen = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::Encryption::EncryptorNet*), "Decrypt2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, offset, len, header, outLen});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::Encryption::EncryptorNet::CalculateEncryptedSize
// Il2CppName: CalculateEncryptedSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::Encryption::EncryptorNet::*)(int)>(&ExitGames::Client::Photon::Encryption::EncryptorNet::CalculateEncryptedSize)> {
  static const MethodInfo* get() {
    static auto* unencryptedSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::Encryption::EncryptorNet*), "CalculateEncryptedSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unencryptedSize});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::Encryption::EncryptorNet::CalculateFragmentLength
// Il2CppName: CalculateFragmentLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::Encryption::EncryptorNet::*)()>(&ExitGames::Client::Photon::Encryption::EncryptorNet::CalculateFragmentLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::Encryption::EncryptorNet*), "CalculateFragmentLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::Encryption::EncryptorNet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
