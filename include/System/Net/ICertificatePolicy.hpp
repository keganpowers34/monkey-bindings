// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ServicePoint
  class ServicePoint;
  // Forward declaring type: WebRequest
  class WebRequest;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: ICertificatePolicy
  class ICertificatePolicy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::ICertificatePolicy);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ICertificatePolicy*, "System.Net", "ICertificatePolicy");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ICertificatePolicy
  // [TokenAttribute] Offset: FFFFFFFF
  class ICertificatePolicy {
    public:
    // public System.Boolean CheckValidationResult(System.Net.ServicePoint srvPoint, System.Security.Cryptography.X509Certificates.X509Certificate certificate, System.Net.WebRequest request, System.Int32 certificateProblem)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool CheckValidationResult(::System::Net::ServicePoint* srvPoint, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::System::Net::WebRequest* request, int certificateProblem);
  }; // System.Net.ICertificatePolicy
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ICertificatePolicy::CheckValidationResult
// Il2CppName: CheckValidationResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::ICertificatePolicy::*)(::System::Net::ServicePoint*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Net::WebRequest*, int)>(&System::Net::ICertificatePolicy::CheckValidationResult)> {
  static const MethodInfo* get() {
    static auto* srvPoint = &::il2cpp_utils::GetClassFromName("System.Net", "ServicePoint")->byval_arg;
    static auto* certificate = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography.X509Certificates", "X509Certificate")->byval_arg;
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net", "WebRequest")->byval_arg;
    static auto* certificateProblem = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ICertificatePolicy*), "CheckValidationResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{srvPoint, certificate, request, certificateProblem});
  }
};
