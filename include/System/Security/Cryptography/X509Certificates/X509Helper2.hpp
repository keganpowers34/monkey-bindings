// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509CertificateImpl
  class X509CertificateImpl;
  // Forward declaring type: X509Certificate2Impl
  class X509Certificate2Impl;
  // Forward declaring type: X509KeyStorageFlags
  struct X509KeyStorageFlags;
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
  // Forward declaring type: X509ChainImpl
  class X509ChainImpl;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Helper2
  class X509Helper2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Helper2);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Helper2*, "System.Security.Cryptography.X509Certificates", "X509Helper2");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Helper2
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Helper2 : public ::Il2CppObject {
    public:
    // Nested type: ::System::Security::Cryptography::X509Certificates::X509Helper2::MyNativeHelper
    class MyNativeHelper;
    // static System.Int64 GetSubjectNameHash(System.Security.Cryptography.X509Certificates.X509Certificate certificate)
    // Offset: 0x1202C24
    static int64_t GetSubjectNameHash(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate);
    // static System.Int64 GetSubjectNameHash(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
    // Offset: 0x1202C4C
    static int64_t GetSubjectNameHash(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
    // static System.Void ExportAsPEM(System.Security.Cryptography.X509Certificates.X509Certificate certificate, System.IO.Stream stream, System.Boolean includeHumanReadableForm)
    // Offset: 0x1202CE0
    static void ExportAsPEM(::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::IO::Stream* stream, bool includeHumanReadableForm);
    // static System.Void ExportAsPEM(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl, System.IO.Stream stream, System.Boolean includeHumanReadableForm)
    // Offset: 0x1202D18
    static void ExportAsPEM(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl, ::System::IO::Stream* stream, bool includeHumanReadableForm);
    // static System.Void Initialize()
    // Offset: 0x1202D4C
    static void Initialize();
    // static System.Void ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
    // Offset: 0x11F69D4
    static void ThrowIfContextInvalid(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
    // static private System.Security.Cryptography.X509Certificates.X509Certificate GetNativeInstance(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
    // Offset: 0x1202C80
    static ::System::Security::Cryptography::X509Certificates::X509Certificate* GetNativeInstance(::System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
    // static System.Security.Cryptography.X509Certificates.X509Certificate2Impl Import(System.Byte[] rawData, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags, System.Boolean disableProvider)
    // Offset: 0x11F6FC4
    static ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::ArrayW<uint8_t> rawData, ::StringW password, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags, bool disableProvider);
    // static System.Security.Cryptography.X509Certificates.X509Certificate2Impl Import(System.Security.Cryptography.X509Certificates.X509Certificate cert, System.Boolean disableProvider)
    // Offset: 0x11F6BD8
    static ::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* Import(::System::Security::Cryptography::X509Certificates::X509Certificate* cert, bool disableProvider);
    // static Mono.Security.X509.X509Certificate GetMonoCertificate(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    // Offset: 0x11F771C
    static ::Mono::Security::X509::X509Certificate* GetMonoCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);
    // static System.Security.Cryptography.X509Certificates.X509ChainImpl CreateChainImpl(System.Boolean useMachineContext)
    // Offset: 0x11FD5E4
    static ::System::Security::Cryptography::X509Certificates::X509ChainImpl* CreateChainImpl(bool useMachineContext);
    // static public System.Boolean IsValid(System.Security.Cryptography.X509Certificates.X509ChainImpl impl)
    // Offset: 0x1202DB4
    static bool IsValid(::System::Security::Cryptography::X509Certificates::X509ChainImpl* impl);
    // static System.Void ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509ChainImpl impl)
    // Offset: 0x11FD514
    static void ThrowIfContextInvalid(::System::Security::Cryptography::X509Certificates::X509ChainImpl* impl);
    // static System.Exception GetInvalidChainContextException()
    // Offset: 0x1202DC8
    static ::System::Exception* GetInvalidChainContextException();
  }; // System.Security.Cryptography.X509Certificates.X509Helper2
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::GetSubjectNameHash
// Il2CppName: GetSubjectNameHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::Security::Cryptography::X509Certificates::X509Certificate*)>(&System::Security::Cryptography::X509Certificates::X509Helper2::GetSubjectNameHash)> {
  static const MethodInfo* get() {
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "GetSubjectNameHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certificate});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::GetSubjectNameHash
// Il2CppName: GetSubjectNameHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*)>(&System::Security::Cryptography::X509Certificates::X509Helper2::GetSubjectNameHash)> {
  static const MethodInfo* get() {
    static auto* impl = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateImpl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "GetSubjectNameHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{impl});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::ExportAsPEM
// Il2CppName: ExportAsPEM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::IO::Stream*, bool)>(&System::Security::Cryptography::X509Certificates::X509Helper2::ExportAsPEM)> {
  static const MethodInfo* get() {
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* includeHumanReadableForm = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "ExportAsPEM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certificate, stream, includeHumanReadableForm});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::ExportAsPEM
// Il2CppName: ExportAsPEM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*, ::System::IO::Stream*, bool)>(&System::Security::Cryptography::X509Certificates::X509Helper2::ExportAsPEM)> {
  static const MethodInfo* get() {
    static auto* impl = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateImpl")->byval_arg;
    static auto* stream = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* includeHumanReadableForm = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "ExportAsPEM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{impl, stream, includeHumanReadableForm});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Cryptography::X509Certificates::X509Helper2::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::ThrowIfContextInvalid
// Il2CppName: ThrowIfContextInvalid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*)>(&System::Security::Cryptography::X509Certificates::X509Helper2::ThrowIfContextInvalid)> {
  static const MethodInfo* get() {
    static auto* impl = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateImpl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "ThrowIfContextInvalid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{impl});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::GetNativeInstance
// Il2CppName: GetNativeInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (*)(::System::Security::Cryptography::X509Certificates::X509CertificateImpl*)>(&System::Security::Cryptography::X509Certificates::X509Helper2::GetNativeInstance)> {
  static const MethodInfo* get() {
    static auto* impl = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509CertificateImpl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "GetNativeInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{impl});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::Import
// Il2CppName: Import
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (*)(::ArrayW<uint8_t>, ::StringW, ::System::Security::Cryptography::X509Certificates::X509KeyStorageFlags, bool)>(&System::Security::Cryptography::X509Certificates::X509Helper2::Import)> {
  static const MethodInfo* get() {
    static auto* rawData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* password = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keyStorageFlags = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509KeyStorageFlags")->byval_arg;
    static auto* disableProvider = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "Import", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawData, password, keyStorageFlags, disableProvider});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::Import
// Il2CppName: Import
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2Impl* (*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, bool)>(&System::Security::Cryptography::X509Certificates::X509Helper2::Import)> {
  static const MethodInfo* get() {
    static auto* cert = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* disableProvider = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "Import", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cert, disableProvider});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::GetMonoCertificate
// Il2CppName: GetMonoCertificate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509Certificate* (*)(::System::Security::Cryptography::X509Certificates::X509Certificate2*)>(&System::Security::Cryptography::X509Certificates::X509Helper2::GetMonoCertificate)> {
  static const MethodInfo* get() {
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "GetMonoCertificate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certificate});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::CreateChainImpl
// Il2CppName: CreateChainImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509ChainImpl* (*)(bool)>(&System::Security::Cryptography::X509Certificates::X509Helper2::CreateChainImpl)> {
  static const MethodInfo* get() {
    static auto* useMachineContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "CreateChainImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{useMachineContext});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Security::Cryptography::X509Certificates::X509ChainImpl*)>(&System::Security::Cryptography::X509Certificates::X509Helper2::IsValid)> {
  static const MethodInfo* get() {
    static auto* impl = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509ChainImpl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{impl});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::ThrowIfContextInvalid
// Il2CppName: ThrowIfContextInvalid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Security::Cryptography::X509Certificates::X509ChainImpl*)>(&System::Security::Cryptography::X509Certificates::X509Helper2::ThrowIfContextInvalid)> {
  static const MethodInfo* get() {
    static auto* impl = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509ChainImpl")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "ThrowIfContextInvalid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{impl});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Helper2::GetInvalidChainContextException
// Il2CppName: GetInvalidChainContextException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)()>(&System::Security::Cryptography::X509Certificates::X509Helper2::GetInvalidChainContextException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Helper2*), "GetInvalidChainContextException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
