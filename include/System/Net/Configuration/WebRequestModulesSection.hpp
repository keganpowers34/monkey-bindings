// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Configuration.ConfigurationSection
#include "System/Configuration/ConfigurationSection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Configuration
namespace System::Net::Configuration {
  // Forward declaring type: WebRequestModuleElementCollection
  class WebRequestModuleElementCollection;
}
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationPropertyCollection
  class ConfigurationPropertyCollection;
}
// Completed forward declares
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Forward declaring type: WebRequestModulesSection
  class WebRequestModulesSection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Configuration::WebRequestModulesSection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::WebRequestModulesSection*, "System.Net.Configuration", "WebRequestModulesSection");
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.WebRequestModulesSection
  // [TokenAttribute] Offset: FFFFFFFF
  class WebRequestModulesSection : public ::System::Configuration::ConfigurationSection {
    public:
    // public System.Void .ctor()
    // Offset: 0x126FC70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebRequestModulesSection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Configuration::WebRequestModulesSection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebRequestModulesSection*, creationType>()));
    }
    // public System.Net.Configuration.WebRequestModuleElementCollection get_WebRequestModules()
    // Offset: 0x126FCF0
    ::System::Net::Configuration::WebRequestModuleElementCollection* get_WebRequestModules();
    // protected override System.Configuration.ConfigurationPropertyCollection get_Properties()
    // Offset: 0x126FCB0
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Configuration.ConfigurationPropertyCollection ConfigurationElement::get_Properties()
    ::System::Configuration::ConfigurationPropertyCollection* get_Properties();
    // protected override System.Void InitializeDefault()
    // Offset: 0x126FD30
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Void ConfigurationElement::InitializeDefault()
    void InitializeDefault();
    // protected override System.Void PostDeserialize()
    // Offset: 0x126FD70
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Void ConfigurationElement::PostDeserialize()
    void PostDeserialize();
  }; // System.Net.Configuration.WebRequestModulesSection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Configuration::WebRequestModulesSection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Configuration::WebRequestModulesSection::get_WebRequestModules
// Il2CppName: get_WebRequestModules
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::WebRequestModuleElementCollection* (System::Net::Configuration::WebRequestModulesSection::*)()>(&System::Net::Configuration::WebRequestModulesSection::get_WebRequestModules)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::WebRequestModulesSection*), "get_WebRequestModules", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::WebRequestModulesSection::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (System::Net::Configuration::WebRequestModulesSection::*)()>(&System::Net::Configuration::WebRequestModulesSection::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::WebRequestModulesSection*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::WebRequestModulesSection::InitializeDefault
// Il2CppName: InitializeDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::WebRequestModulesSection::*)()>(&System::Net::Configuration::WebRequestModulesSection::InitializeDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::WebRequestModulesSection*), "InitializeDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::WebRequestModulesSection::PostDeserialize
// Il2CppName: PostDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::WebRequestModulesSection::*)()>(&System::Net::Configuration::WebRequestModulesSection::PostDeserialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::WebRequestModulesSection*), "PostDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
