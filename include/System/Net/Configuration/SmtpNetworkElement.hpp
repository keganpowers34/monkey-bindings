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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationPropertyCollection
  class ConfigurationPropertyCollection;
}
// Completed forward declares
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Forward declaring type: SmtpNetworkElement
  class SmtpNetworkElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Configuration::SmtpNetworkElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::SmtpNetworkElement*, "System.Net.Configuration", "SmtpNetworkElement");
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.SmtpNetworkElement
  // [TokenAttribute] Offset: FFFFFFFF
  class SmtpNetworkElement : public ::System::Configuration::ConfigurationElement {
    public:
    // public System.Void .ctor()
    // Offset: 0x126EB70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SmtpNetworkElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Configuration::SmtpNetworkElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SmtpNetworkElement*, creationType>()));
    }
    // public System.String get_ClientDomain()
    // Offset: 0x126EBB0
    ::StringW get_ClientDomain();
    // public System.Void set_ClientDomain(System.String value)
    // Offset: 0x126EBF0
    void set_ClientDomain(::StringW value);
    // public System.Boolean get_DefaultCredentials()
    // Offset: 0x126EC30
    bool get_DefaultCredentials();
    // public System.Void set_DefaultCredentials(System.Boolean value)
    // Offset: 0x126EC70
    void set_DefaultCredentials(bool value);
    // public System.Boolean get_EnableSsl()
    // Offset: 0x126ECB0
    bool get_EnableSsl();
    // public System.Void set_EnableSsl(System.Boolean value)
    // Offset: 0x126ECF0
    void set_EnableSsl(bool value);
    // public System.String get_Host()
    // Offset: 0x126ED30
    ::StringW get_Host();
    // public System.Void set_Host(System.String value)
    // Offset: 0x126ED70
    void set_Host(::StringW value);
    // public System.String get_Password()
    // Offset: 0x126EDB0
    ::StringW get_Password();
    // public System.Void set_Password(System.String value)
    // Offset: 0x126EDF0
    void set_Password(::StringW value);
    // public System.Int32 get_Port()
    // Offset: 0x126EE30
    int get_Port();
    // public System.Void set_Port(System.Int32 value)
    // Offset: 0x126EE70
    void set_Port(int value);
    // public System.String get_TargetName()
    // Offset: 0x126EEF0
    ::StringW get_TargetName();
    // public System.Void set_TargetName(System.String value)
    // Offset: 0x126EF30
    void set_TargetName(::StringW value);
    // public System.String get_UserName()
    // Offset: 0x126EF70
    ::StringW get_UserName();
    // public System.Void set_UserName(System.String value)
    // Offset: 0x126EFB0
    void set_UserName(::StringW value);
    // protected override System.Configuration.ConfigurationPropertyCollection get_Properties()
    // Offset: 0x126EEB0
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Configuration.ConfigurationPropertyCollection ConfigurationElement::get_Properties()
    ::System::Configuration::ConfigurationPropertyCollection* get_Properties();
    // protected override System.Void PostDeserialize()
    // Offset: 0x126EFF0
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Void ConfigurationElement::PostDeserialize()
    void PostDeserialize();
  }; // System.Net.Configuration.SmtpNetworkElement
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Configuration::SmtpNetworkElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Configuration::SmtpNetworkElement::get_ClientDomain
// Il2CppName: get_ClientDomain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Configuration::SmtpNetworkElement::*)()>(&System::Net::Configuration::SmtpNetworkElement::get_ClientDomain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SmtpNetworkElement*), "get_ClientDomain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SmtpNetworkElement::set_ClientDomain
// Il2CppName: set_ClientDomain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::SmtpNetworkElement::*)(::StringW)>(&System::Net::Configuration::SmtpNetworkElement::set_ClientDomain)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SmtpNetworkElement*), "set_ClientDomain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SmtpNetworkElement::get_DefaultCredentials
// Il2CppName: get_DefaultCredentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Configuration::SmtpNetworkElement::*)()>(&System::Net::Configuration::SmtpNetworkElement::get_DefaultCredentials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SmtpNetworkElement*), "get_DefaultCredentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SmtpNetworkElement::set_DefaultCredentials
// Il2CppName: set_DefaultCredentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::SmtpNetworkElement::*)(bool)>(&System::Net::Configuration::SmtpNetworkElement::set_DefaultCredentials)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SmtpNetworkElement*), "set_DefaultCredentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SmtpNetworkElement::get_EnableSsl
// Il2CppName: get_EnableSsl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Configuration::SmtpNetworkElement::*)()>(&System::Net::Configuration::SmtpNetworkElement::get_EnableSsl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SmtpNetworkElement*), "get_EnableSsl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SmtpNetworkElement::set_EnableSsl
// Il2CppName: set_EnableSsl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::SmtpNetworkElement::*)(bool)>(&System::Net::Configuration::SmtpNetworkElement::set_EnableSsl)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SmtpNetworkElement*), "set_EnableSsl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SmtpNetworkElement::get_Host
// Il2CppName: get_Host
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Configuration::SmtpNetworkElement::*)()>(&System::Net::Configuration::SmtpNetworkElement::get_Host)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SmtpNetworkElement*), "get_Host", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SmtpNetworkElement::set_Host
// Il2CppName: set_Host
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::SmtpNetworkElement::*)(::StringW)>(&System::Net::Configuration::SmtpNetworkElement::set_Host)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SmtpNetworkElement*), "set_Host", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SmtpNetworkElement::get_Password
// Il2CppName: get_Password
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Configuration::SmtpNetworkElement::*)()>(&System::Net::Configuration::SmtpNetworkElement::get_Password)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SmtpNetworkElement*), "get_Password", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SmtpNetworkElement::set_Password
// Il2CppName: set_Password
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::SmtpNetworkElement::*)(::StringW)>(&System::Net::Configuration::SmtpNetworkElement::set_Password)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SmtpNetworkElement*), "set_Password", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SmtpNetworkElement::get_Port
// Il2CppName: get_Port
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Configuration::SmtpNetworkElement::*)()>(&System::Net::Configuration::SmtpNetworkElement::get_Port)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SmtpNetworkElement*), "get_Port", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SmtpNetworkElement::set_Port
// Il2CppName: set_Port
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::SmtpNetworkElement::*)(int)>(&System::Net::Configuration::SmtpNetworkElement::set_Port)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SmtpNetworkElement*), "set_Port", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SmtpNetworkElement::get_TargetName
// Il2CppName: get_TargetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Configuration::SmtpNetworkElement::*)()>(&System::Net::Configuration::SmtpNetworkElement::get_TargetName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SmtpNetworkElement*), "get_TargetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SmtpNetworkElement::set_TargetName
// Il2CppName: set_TargetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::SmtpNetworkElement::*)(::StringW)>(&System::Net::Configuration::SmtpNetworkElement::set_TargetName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SmtpNetworkElement*), "set_TargetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SmtpNetworkElement::get_UserName
// Il2CppName: get_UserName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Configuration::SmtpNetworkElement::*)()>(&System::Net::Configuration::SmtpNetworkElement::get_UserName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SmtpNetworkElement*), "get_UserName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SmtpNetworkElement::set_UserName
// Il2CppName: set_UserName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::SmtpNetworkElement::*)(::StringW)>(&System::Net::Configuration::SmtpNetworkElement::set_UserName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SmtpNetworkElement*), "set_UserName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SmtpNetworkElement::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (System::Net::Configuration::SmtpNetworkElement::*)()>(&System::Net::Configuration::SmtpNetworkElement::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SmtpNetworkElement*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::SmtpNetworkElement::PostDeserialize
// Il2CppName: PostDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::SmtpNetworkElement::*)()>(&System::Net::Configuration::SmtpNetworkElement::PostDeserialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::SmtpNetworkElement*), "PostDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
