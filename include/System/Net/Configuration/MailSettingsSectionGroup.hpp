// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Configuration.ConfigurationSectionGroup
#include "System/Configuration/ConfigurationSectionGroup.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Configuration
namespace System::Net::Configuration {
  // Forward declaring type: SmtpSection
  class SmtpSection;
}
// Completed forward declares
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Forward declaring type: MailSettingsSectionGroup
  class MailSettingsSectionGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Configuration::MailSettingsSectionGroup);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::MailSettingsSectionGroup*, "System.Net.Configuration", "MailSettingsSectionGroup");
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.MailSettingsSectionGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class MailSettingsSectionGroup : public ::System::Configuration::ConfigurationSectionGroup {
    public:
    // public System.Void .ctor()
    // Offset: 0x126D7F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MailSettingsSectionGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Configuration::MailSettingsSectionGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MailSettingsSectionGroup*, creationType>()));
    }
    // public System.Net.Configuration.SmtpSection get_Smtp()
    // Offset: 0x126D830
    ::System::Net::Configuration::SmtpSection* get_Smtp();
  }; // System.Net.Configuration.MailSettingsSectionGroup
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Configuration::MailSettingsSectionGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Configuration::MailSettingsSectionGroup::get_Smtp
// Il2CppName: get_Smtp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::SmtpSection* (System::Net::Configuration::MailSettingsSectionGroup::*)()>(&System::Net::Configuration::MailSettingsSectionGroup::get_Smtp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::MailSettingsSectionGroup*), "get_Smtp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
