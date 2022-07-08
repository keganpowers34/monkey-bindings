// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Cryptography.RSAPKCS1SignatureDescription
#include "System/Security/Cryptography/RSAPKCS1SignatureDescription.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSAPKCS1SHA384SignatureDescription
  class RSAPKCS1SHA384SignatureDescription;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::RSAPKCS1SHA384SignatureDescription);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAPKCS1SHA384SignatureDescription*, "System.Security.Cryptography", "RSAPKCS1SHA384SignatureDescription");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RSAPKCS1SHA384SignatureDescription
  // [TokenAttribute] Offset: FFFFFFFF
  class RSAPKCS1SHA384SignatureDescription : public ::System::Security::Cryptography::RSAPKCS1SignatureDescription {
    public:
    // public System.Void .ctor()
    // Offset: 0x15CE1D0
    // Implemented from: System.Security.Cryptography.SignatureDescription
    // Base method: System.Void SignatureDescription::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSAPKCS1SHA384SignatureDescription* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Cryptography::RSAPKCS1SHA384SignatureDescription::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSAPKCS1SHA384SignatureDescription*, creationType>()));
    }
  }; // System.Security.Cryptography.RSAPKCS1SHA384SignatureDescription
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::RSAPKCS1SHA384SignatureDescription::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
