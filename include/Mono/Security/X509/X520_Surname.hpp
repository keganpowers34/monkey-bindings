// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.X509.X520
#include "Mono/Security/X509/X520.hpp"
// Including type: Mono.Security.X509.X520/AttributeTypeAndValue
#include "Mono/Security/X509/X520_AttributeTypeAndValue.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::X509::X520::Surname);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X520::Surname*, "Mono.Security.X509", "X520/Surname");
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.X520/Surname
  // [TokenAttribute] Offset: FFFFFFFF
  class X520::Surname : public ::Mono::Security::X509::X520::AttributeTypeAndValue {
    public:
    // public System.Void .ctor()
    // Offset: 0x1B2C2F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X520::Surname* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::X509::X520::Surname::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X520::Surname*, creationType>()));
    }
  }; // Mono.Security.X509.X520/Surname
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::X520::Surname::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
