// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Configuration
namespace System::Configuration {
  // Forward declaring type: NoSettingsVersionUpgradeAttribute
  class NoSettingsVersionUpgradeAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Configuration::NoSettingsVersionUpgradeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::NoSettingsVersionUpgradeAttribute*, "System.Configuration", "NoSettingsVersionUpgradeAttribute");
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.NoSettingsVersionUpgradeAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A6051C
  class NoSettingsVersionUpgradeAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x14C5748
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoSettingsVersionUpgradeAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Configuration::NoSettingsVersionUpgradeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoSettingsVersionUpgradeAttribute*, creationType>()));
    }
  }; // System.Configuration.NoSettingsVersionUpgradeAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Configuration::NoSettingsVersionUpgradeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
