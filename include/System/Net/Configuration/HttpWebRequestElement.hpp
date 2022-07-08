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
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationPropertyCollection
  class ConfigurationPropertyCollection;
}
// Completed forward declares
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Forward declaring type: HttpWebRequestElement
  class HttpWebRequestElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Configuration::HttpWebRequestElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::HttpWebRequestElement*, "System.Net.Configuration", "HttpWebRequestElement");
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.HttpWebRequestElement
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpWebRequestElement : public ::System::Configuration::ConfigurationElement {
    public:
    // public System.Void .ctor()
    // Offset: 0x126D430
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpWebRequestElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Configuration::HttpWebRequestElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpWebRequestElement*, creationType>()));
    }
    // public System.Int32 get_MaximumErrorResponseLength()
    // Offset: 0x126D470
    int get_MaximumErrorResponseLength();
    // public System.Void set_MaximumErrorResponseLength(System.Int32 value)
    // Offset: 0x126D4B0
    void set_MaximumErrorResponseLength(int value);
    // public System.Int32 get_MaximumResponseHeadersLength()
    // Offset: 0x126D4F0
    int get_MaximumResponseHeadersLength();
    // public System.Void set_MaximumResponseHeadersLength(System.Int32 value)
    // Offset: 0x126D530
    void set_MaximumResponseHeadersLength(int value);
    // public System.Int32 get_MaximumUnauthorizedUploadLength()
    // Offset: 0x126D570
    int get_MaximumUnauthorizedUploadLength();
    // public System.Void set_MaximumUnauthorizedUploadLength(System.Int32 value)
    // Offset: 0x126D5B0
    void set_MaximumUnauthorizedUploadLength(int value);
    // public System.Boolean get_UseUnsafeHeaderParsing()
    // Offset: 0x126D630
    bool get_UseUnsafeHeaderParsing();
    // public System.Void set_UseUnsafeHeaderParsing(System.Boolean value)
    // Offset: 0x126D670
    void set_UseUnsafeHeaderParsing(bool value);
    // protected override System.Configuration.ConfigurationPropertyCollection get_Properties()
    // Offset: 0x126D5F0
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Configuration.ConfigurationPropertyCollection ConfigurationElement::get_Properties()
    ::System::Configuration::ConfigurationPropertyCollection* get_Properties();
    // protected override System.Void PostDeserialize()
    // Offset: 0x126D6B0
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Void ConfigurationElement::PostDeserialize()
    void PostDeserialize();
  }; // System.Net.Configuration.HttpWebRequestElement
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Configuration::HttpWebRequestElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Configuration::HttpWebRequestElement::get_MaximumErrorResponseLength
// Il2CppName: get_MaximumErrorResponseLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Configuration::HttpWebRequestElement::*)()>(&System::Net::Configuration::HttpWebRequestElement::get_MaximumErrorResponseLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpWebRequestElement*), "get_MaximumErrorResponseLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpWebRequestElement::set_MaximumErrorResponseLength
// Il2CppName: set_MaximumErrorResponseLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::HttpWebRequestElement::*)(int)>(&System::Net::Configuration::HttpWebRequestElement::set_MaximumErrorResponseLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpWebRequestElement*), "set_MaximumErrorResponseLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpWebRequestElement::get_MaximumResponseHeadersLength
// Il2CppName: get_MaximumResponseHeadersLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Configuration::HttpWebRequestElement::*)()>(&System::Net::Configuration::HttpWebRequestElement::get_MaximumResponseHeadersLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpWebRequestElement*), "get_MaximumResponseHeadersLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpWebRequestElement::set_MaximumResponseHeadersLength
// Il2CppName: set_MaximumResponseHeadersLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::HttpWebRequestElement::*)(int)>(&System::Net::Configuration::HttpWebRequestElement::set_MaximumResponseHeadersLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpWebRequestElement*), "set_MaximumResponseHeadersLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpWebRequestElement::get_MaximumUnauthorizedUploadLength
// Il2CppName: get_MaximumUnauthorizedUploadLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Configuration::HttpWebRequestElement::*)()>(&System::Net::Configuration::HttpWebRequestElement::get_MaximumUnauthorizedUploadLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpWebRequestElement*), "get_MaximumUnauthorizedUploadLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpWebRequestElement::set_MaximumUnauthorizedUploadLength
// Il2CppName: set_MaximumUnauthorizedUploadLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::HttpWebRequestElement::*)(int)>(&System::Net::Configuration::HttpWebRequestElement::set_MaximumUnauthorizedUploadLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpWebRequestElement*), "set_MaximumUnauthorizedUploadLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpWebRequestElement::get_UseUnsafeHeaderParsing
// Il2CppName: get_UseUnsafeHeaderParsing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::Configuration::HttpWebRequestElement::*)()>(&System::Net::Configuration::HttpWebRequestElement::get_UseUnsafeHeaderParsing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpWebRequestElement*), "get_UseUnsafeHeaderParsing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpWebRequestElement::set_UseUnsafeHeaderParsing
// Il2CppName: set_UseUnsafeHeaderParsing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::HttpWebRequestElement::*)(bool)>(&System::Net::Configuration::HttpWebRequestElement::set_UseUnsafeHeaderParsing)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpWebRequestElement*), "set_UseUnsafeHeaderParsing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpWebRequestElement::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (System::Net::Configuration::HttpWebRequestElement::*)()>(&System::Net::Configuration::HttpWebRequestElement::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpWebRequestElement*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::HttpWebRequestElement::PostDeserialize
// Il2CppName: PostDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::HttpWebRequestElement::*)()>(&System::Net::Configuration::HttpWebRequestElement::PostDeserialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::HttpWebRequestElement*), "PostDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
