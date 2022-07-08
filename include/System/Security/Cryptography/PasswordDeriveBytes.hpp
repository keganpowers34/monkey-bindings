// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.DeriveBytes
#include "System/Security/Cryptography/DeriveBytes.hpp"
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
  // Forward declaring type: HashAlgorithm
  class HashAlgorithm;
  // Forward declaring type: CspParameters
  class CspParameters;
  // Forward declaring type: CryptoStream
  class CryptoStream;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: PasswordDeriveBytes
  class PasswordDeriveBytes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::PasswordDeriveBytes);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::PasswordDeriveBytes*, "System.Security.Cryptography", "PasswordDeriveBytes");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.PasswordDeriveBytes
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A53410
  class PasswordDeriveBytes : public ::System::Security::Cryptography::DeriveBytes {
    public:
    public:
    // private System.Int32 _extraCount
    // Size: 0x4
    // Offset: 0x10
    int extraCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _prefix
    // Size: 0x4
    // Offset: 0x14
    int prefix;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _iterations
    // Size: 0x4
    // Offset: 0x18
    int iterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: iterations and: baseValue
    char __padding2[0x4] = {};
    // private System.Byte[] _baseValue
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> baseValue;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] _extra
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> extra;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] _salt
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<uint8_t> salt;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.String _hashName
    // Size: 0x8
    // Offset: 0x38
    ::StringW hashName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Byte[] _password
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint8_t> password;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Security.Cryptography.HashAlgorithm _hash
    // Size: 0x8
    // Offset: 0x48
    ::System::Security::Cryptography::HashAlgorithm* hash;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::HashAlgorithm*) == 0x8);
    public:
    // Get instance field reference: private System.Int32 _extraCount
    [[deprecated("Use field access instead!")]] int& dyn__extraCount();
    // Get instance field reference: private System.Int32 _prefix
    [[deprecated("Use field access instead!")]] int& dyn__prefix();
    // Get instance field reference: private System.Int32 _iterations
    [[deprecated("Use field access instead!")]] int& dyn__iterations();
    // Get instance field reference: private System.Byte[] _baseValue
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__baseValue();
    // Get instance field reference: private System.Byte[] _extra
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__extra();
    // Get instance field reference: private System.Byte[] _salt
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__salt();
    // Get instance field reference: private System.String _hashName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__hashName();
    // Get instance field reference: private System.Byte[] _password
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__password();
    // Get instance field reference: private System.Security.Cryptography.HashAlgorithm _hash
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::HashAlgorithm*& dyn__hash();
    // public System.Void .ctor(System.String strPassword, System.Byte[] rgbSalt)
    // Offset: 0x1222764
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PasswordDeriveBytes* New_ctor(::StringW strPassword, ::ArrayW<uint8_t> rgbSalt) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::PasswordDeriveBytes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PasswordDeriveBytes*, creationType>(strPassword, rgbSalt)));
    }
    // public System.Void .ctor(System.Byte[] password, System.Byte[] salt)
    // Offset: 0x1222864
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PasswordDeriveBytes* New_ctor(::ArrayW<uint8_t> password, ::ArrayW<uint8_t> salt) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::PasswordDeriveBytes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PasswordDeriveBytes*, creationType>(password, salt)));
    }
    // public System.Void .ctor(System.String strPassword, System.Byte[] rgbSalt, System.String strHashName, System.Int32 iterations)
    // Offset: 0x1222954
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PasswordDeriveBytes* New_ctor(::StringW strPassword, ::ArrayW<uint8_t> rgbSalt, ::StringW strHashName, int iterations) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::PasswordDeriveBytes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PasswordDeriveBytes*, creationType>(strPassword, rgbSalt, strHashName, iterations)));
    }
    // public System.Void .ctor(System.Byte[] password, System.Byte[] salt, System.String hashName, System.Int32 iterations)
    // Offset: 0x1222AA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PasswordDeriveBytes* New_ctor(::ArrayW<uint8_t> password, ::ArrayW<uint8_t> salt, ::StringW hashName, int iterations) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::PasswordDeriveBytes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PasswordDeriveBytes*, creationType>(password, salt, hashName, iterations)));
    }
    // public System.Void .ctor(System.String strPassword, System.Byte[] rgbSalt, System.Security.Cryptography.CspParameters cspParams)
    // Offset: 0x12227E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PasswordDeriveBytes* New_ctor(::StringW strPassword, ::ArrayW<uint8_t> rgbSalt, ::System::Security::Cryptography::CspParameters* cspParams) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::PasswordDeriveBytes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PasswordDeriveBytes*, creationType>(strPassword, rgbSalt, cspParams)));
    }
    // public System.Void .ctor(System.Byte[] password, System.Byte[] salt, System.Security.Cryptography.CspParameters cspParams)
    // Offset: 0x12228E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PasswordDeriveBytes* New_ctor(::ArrayW<uint8_t> password, ::ArrayW<uint8_t> salt, ::System::Security::Cryptography::CspParameters* cspParams) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::PasswordDeriveBytes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PasswordDeriveBytes*, creationType>(password, salt, cspParams)));
    }
    // public System.Void .ctor(System.String strPassword, System.Byte[] rgbSalt, System.String strHashName, System.Int32 iterations, System.Security.Cryptography.CspParameters cspParams)
    // Offset: 0x12229F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PasswordDeriveBytes* New_ctor(::StringW strPassword, ::ArrayW<uint8_t> rgbSalt, ::StringW strHashName, int iterations, ::System::Security::Cryptography::CspParameters* cspParams) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::PasswordDeriveBytes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PasswordDeriveBytes*, creationType>(strPassword, rgbSalt, strHashName, iterations, cspParams)));
    }
    // public System.Void .ctor(System.Byte[] password, System.Byte[] salt, System.String hashName, System.Int32 iterations, System.Security.Cryptography.CspParameters cspParams)
    // Offset: 0x1222B38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PasswordDeriveBytes* New_ctor(::ArrayW<uint8_t> password, ::ArrayW<uint8_t> salt, ::StringW hashName, int iterations, ::System::Security::Cryptography::CspParameters* cspParams) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::PasswordDeriveBytes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PasswordDeriveBytes*, creationType>(password, salt, hashName, iterations, cspParams)));
    }
    // public System.String get_HashName()
    // Offset: 0x1222F3C
    ::StringW get_HashName();
    // public System.Void set_HashName(System.String value)
    // Offset: 0x1222E0C
    void set_HashName(::StringW value);
    // public System.Int32 get_IterationCount()
    // Offset: 0x1222F44
    int get_IterationCount();
    // public System.Void set_IterationCount(System.Int32 value)
    // Offset: 0x1222BA4
    void set_IterationCount(int value);
    // public System.Byte[] get_Salt()
    // Offset: 0x1222F4C
    ::ArrayW<uint8_t> get_Salt();
    // public System.Void set_Salt(System.Byte[] value)
    // Offset: 0x1222CE0
    void set_Salt(::ArrayW<uint8_t> value);
    // public System.Byte[] CryptDeriveKey(System.String algname, System.String alghashname, System.Int32 keySize, System.Byte[] rgbIV)
    // Offset: 0x12237C4
    ::ArrayW<uint8_t> CryptDeriveKey(::StringW algname, ::StringW alghashname, int keySize, ::ArrayW<uint8_t> rgbIV);
    // private System.Byte[] ComputeBaseValue()
    // Offset: 0x122314C
    ::ArrayW<uint8_t> ComputeBaseValue();
    // private System.Byte[] ComputeBytes(System.Int32 cb)
    // Offset: 0x12232C8
    ::ArrayW<uint8_t> ComputeBytes(int cb);
    // private System.Void HashPrefix(System.Security.Cryptography.CryptoStream cs)
    // Offset: 0x1223884
    void HashPrefix(::System::Security::Cryptography::CryptoStream* cs);
    // public override System.Byte[] GetBytes(System.Int32 cb)
    // Offset: 0x1222FC8
    // Implemented from: System.Security.Cryptography.DeriveBytes
    // Base method: System.Byte[] DeriveBytes::GetBytes(System.Int32 cb)
    ::ArrayW<uint8_t> GetBytes(int cb);
    // public override System.Void Reset()
    // Offset: 0x122372C
    // Implemented from: System.Security.Cryptography.DeriveBytes
    // Base method: System.Void DeriveBytes::Reset()
    void Reset();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1223738
    // Implemented from: System.Security.Cryptography.DeriveBytes
    // Base method: System.Void DeriveBytes::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Security.Cryptography.PasswordDeriveBytes
  #pragma pack(pop)
  static check_size<sizeof(PasswordDeriveBytes), 72 + sizeof(::System::Security::Cryptography::HashAlgorithm*)> __System_Security_Cryptography_PasswordDeriveBytesSizeCheck;
  static_assert(sizeof(PasswordDeriveBytes) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::PasswordDeriveBytes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::PasswordDeriveBytes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::PasswordDeriveBytes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::PasswordDeriveBytes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::PasswordDeriveBytes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::PasswordDeriveBytes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::PasswordDeriveBytes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::PasswordDeriveBytes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Cryptography::PasswordDeriveBytes::get_HashName
// Il2CppName: get_HashName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Cryptography::PasswordDeriveBytes::*)()>(&System::Security::Cryptography::PasswordDeriveBytes::get_HashName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::PasswordDeriveBytes*), "get_HashName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::PasswordDeriveBytes::set_HashName
// Il2CppName: set_HashName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::PasswordDeriveBytes::*)(::StringW)>(&System::Security::Cryptography::PasswordDeriveBytes::set_HashName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::PasswordDeriveBytes*), "set_HashName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::PasswordDeriveBytes::get_IterationCount
// Il2CppName: get_IterationCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Cryptography::PasswordDeriveBytes::*)()>(&System::Security::Cryptography::PasswordDeriveBytes::get_IterationCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::PasswordDeriveBytes*), "get_IterationCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::PasswordDeriveBytes::set_IterationCount
// Il2CppName: set_IterationCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::PasswordDeriveBytes::*)(int)>(&System::Security::Cryptography::PasswordDeriveBytes::set_IterationCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::PasswordDeriveBytes*), "set_IterationCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::PasswordDeriveBytes::get_Salt
// Il2CppName: get_Salt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::PasswordDeriveBytes::*)()>(&System::Security::Cryptography::PasswordDeriveBytes::get_Salt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::PasswordDeriveBytes*), "get_Salt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::PasswordDeriveBytes::set_Salt
// Il2CppName: set_Salt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::PasswordDeriveBytes::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::PasswordDeriveBytes::set_Salt)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::PasswordDeriveBytes*), "set_Salt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::PasswordDeriveBytes::CryptDeriveKey
// Il2CppName: CryptDeriveKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::PasswordDeriveBytes::*)(::StringW, ::StringW, int, ::ArrayW<uint8_t>)>(&System::Security::Cryptography::PasswordDeriveBytes::CryptDeriveKey)> {
  static const MethodInfo* get() {
    static auto* algname = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* alghashname = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keySize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* rgbIV = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::PasswordDeriveBytes*), "CryptDeriveKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{algname, alghashname, keySize, rgbIV});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::PasswordDeriveBytes::ComputeBaseValue
// Il2CppName: ComputeBaseValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::PasswordDeriveBytes::*)()>(&System::Security::Cryptography::PasswordDeriveBytes::ComputeBaseValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::PasswordDeriveBytes*), "ComputeBaseValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::PasswordDeriveBytes::ComputeBytes
// Il2CppName: ComputeBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::PasswordDeriveBytes::*)(int)>(&System::Security::Cryptography::PasswordDeriveBytes::ComputeBytes)> {
  static const MethodInfo* get() {
    static auto* cb = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::PasswordDeriveBytes*), "ComputeBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cb});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::PasswordDeriveBytes::HashPrefix
// Il2CppName: HashPrefix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::PasswordDeriveBytes::*)(::System::Security::Cryptography::CryptoStream*)>(&System::Security::Cryptography::PasswordDeriveBytes::HashPrefix)> {
  static const MethodInfo* get() {
    static auto* cs = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "CryptoStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::PasswordDeriveBytes*), "HashPrefix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cs});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::PasswordDeriveBytes::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::PasswordDeriveBytes::*)(int)>(&System::Security::Cryptography::PasswordDeriveBytes::GetBytes)> {
  static const MethodInfo* get() {
    static auto* cb = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::PasswordDeriveBytes*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cb});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::PasswordDeriveBytes::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::PasswordDeriveBytes::*)()>(&System::Security::Cryptography::PasswordDeriveBytes::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::PasswordDeriveBytes*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::PasswordDeriveBytes::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::PasswordDeriveBytes::*)(bool)>(&System::Security::Cryptography::PasswordDeriveBytes::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::PasswordDeriveBytes*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
