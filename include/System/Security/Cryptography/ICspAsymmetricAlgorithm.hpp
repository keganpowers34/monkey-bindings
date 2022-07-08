// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: CspKeyContainerInfo
  class CspKeyContainerInfo;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: ICspAsymmetricAlgorithm
  class ICspAsymmetricAlgorithm;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::ICspAsymmetricAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::ICspAsymmetricAlgorithm*, "System.Security.Cryptography", "ICspAsymmetricAlgorithm");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.ICspAsymmetricAlgorithm
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A536B8
  class ICspAsymmetricAlgorithm {
    public:
    // public System.Byte[] ExportCspBlob(System.Boolean includePrivateParameters)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<uint8_t> ExportCspBlob(bool includePrivateParameters);
    // public System.Void ImportCspBlob(System.Byte[] rawData)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ImportCspBlob(::ArrayW<uint8_t> rawData);
    // public System.Security.Cryptography.CspKeyContainerInfo get_CspKeyContainerInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Security::Cryptography::CspKeyContainerInfo* get_CspKeyContainerInfo();
  }; // System.Security.Cryptography.ICspAsymmetricAlgorithm
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::ICspAsymmetricAlgorithm::ExportCspBlob
// Il2CppName: ExportCspBlob
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Security::Cryptography::ICspAsymmetricAlgorithm::*)(bool)>(&System::Security::Cryptography::ICspAsymmetricAlgorithm::ExportCspBlob)> {
  static const MethodInfo* get() {
    static auto* includePrivateParameters = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::ICspAsymmetricAlgorithm*), "ExportCspBlob", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{includePrivateParameters});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::ICspAsymmetricAlgorithm::ImportCspBlob
// Il2CppName: ImportCspBlob
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Cryptography::ICspAsymmetricAlgorithm::*)(::ArrayW<uint8_t>)>(&System::Security::Cryptography::ICspAsymmetricAlgorithm::ImportCspBlob)> {
  static const MethodInfo* get() {
    static auto* rawData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::ICspAsymmetricAlgorithm*), "ImportCspBlob", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawData});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::ICspAsymmetricAlgorithm::get_CspKeyContainerInfo
// Il2CppName: get_CspKeyContainerInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::CspKeyContainerInfo* (System::Security::Cryptography::ICspAsymmetricAlgorithm::*)()>(&System::Security::Cryptography::ICspAsymmetricAlgorithm::get_CspKeyContainerInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::ICspAsymmetricAlgorithm*), "get_CspKeyContainerInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
