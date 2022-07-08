// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Configuration.ConfigurationElement
#include "System/Configuration/ConfigurationElement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationPropertyCollection
  class ConfigurationPropertyCollection;
}
// Completed forward declares
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Forward declaring type: WebProxyScriptElement
  class WebProxyScriptElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Configuration::WebProxyScriptElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::WebProxyScriptElement*, "System.Net.Configuration", "WebProxyScriptElement");
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.WebProxyScriptElement
  // [TokenAttribute] Offset: FFFFFFFF
  class WebProxyScriptElement : public ::System::Configuration::ConfigurationElement {
    public:
    // public System.Void .ctor()
    // Offset: 0x126F5F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebProxyScriptElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Configuration::WebProxyScriptElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebProxyScriptElement*, creationType>()));
    }
    // public System.TimeSpan get_DownloadTimeout()
    // Offset: 0x126F630
    ::System::TimeSpan get_DownloadTimeout();
    // public System.Void set_DownloadTimeout(System.TimeSpan value)
    // Offset: 0x126F670
    void set_DownloadTimeout(::System::TimeSpan value);
    // protected override System.Configuration.ConfigurationPropertyCollection get_Properties()
    // Offset: 0x126F6B0
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Configuration.ConfigurationPropertyCollection ConfigurationElement::get_Properties()
    ::System::Configuration::ConfigurationPropertyCollection* get_Properties();
    // protected override System.Void PostDeserialize()
    // Offset: 0x126F6F0
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Void ConfigurationElement::PostDeserialize()
    void PostDeserialize();
  }; // System.Net.Configuration.WebProxyScriptElement
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Configuration::WebProxyScriptElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Configuration::WebProxyScriptElement::get_DownloadTimeout
// Il2CppName: get_DownloadTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (System::Net::Configuration::WebProxyScriptElement::*)()>(&System::Net::Configuration::WebProxyScriptElement::get_DownloadTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::WebProxyScriptElement*), "get_DownloadTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::WebProxyScriptElement::set_DownloadTimeout
// Il2CppName: set_DownloadTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::WebProxyScriptElement::*)(::System::TimeSpan)>(&System::Net::Configuration::WebProxyScriptElement::set_DownloadTimeout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::WebProxyScriptElement*), "set_DownloadTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::WebProxyScriptElement::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (System::Net::Configuration::WebProxyScriptElement::*)()>(&System::Net::Configuration::WebProxyScriptElement::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::WebProxyScriptElement*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::WebProxyScriptElement::PostDeserialize
// Il2CppName: PostDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::WebProxyScriptElement::*)()>(&System::Net::Configuration::WebProxyScriptElement::PostDeserialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::WebProxyScriptElement*), "PostDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
