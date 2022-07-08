// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Configuration.ConfigurationElementCollection
#include "System/Configuration/ConfigurationElementCollection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Configuration
namespace System::Net::Configuration {
  // Forward declaring type: AuthenticationModuleElement
  class AuthenticationModuleElement;
}
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Skipping declaration: ConfigurationElement because it is already included!
}
// Completed forward declares
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Forward declaring type: AuthenticationModuleElementCollection
  class AuthenticationModuleElementCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Configuration::AuthenticationModuleElementCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::AuthenticationModuleElementCollection*, "System.Net.Configuration", "AuthenticationModuleElementCollection");
// Type namespace: System.Net.Configuration
namespace System::Net::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Configuration.AuthenticationModuleElementCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [ConfigurationCollectionAttribute] Offset: A6023C
  // [DefaultMemberAttribute] Offset: A6023C
  class AuthenticationModuleElementCollection : public ::System::Configuration::ConfigurationElementCollection {
    public:
    // public System.Void .ctor()
    // Offset: 0x126B944
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticationModuleElementCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Configuration::AuthenticationModuleElementCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticationModuleElementCollection*, creationType>()));
    }
    // public System.Net.Configuration.AuthenticationModuleElement get_Item(System.Int32 index)
    // Offset: 0x126B984
    ::System::Net::Configuration::AuthenticationModuleElement* get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Net.Configuration.AuthenticationModuleElement value)
    // Offset: 0x126B9C4
    void set_Item(int index, ::System::Net::Configuration::AuthenticationModuleElement* value);
    // public System.Net.Configuration.AuthenticationModuleElement get_Item(System.String name)
    // Offset: 0x126BA04
    ::System::Net::Configuration::AuthenticationModuleElement* get_Item(::StringW name);
    // public System.Void set_Item(System.String name, System.Net.Configuration.AuthenticationModuleElement value)
    // Offset: 0x126BA44
    void set_Item(::StringW name, ::System::Net::Configuration::AuthenticationModuleElement* value);
    // public System.Void Add(System.Net.Configuration.AuthenticationModuleElement element)
    // Offset: 0x126BA84
    void Add(::System::Net::Configuration::AuthenticationModuleElement* element);
    // public System.Void Clear()
    // Offset: 0x126BAC4
    void Clear();
    // public System.Int32 IndexOf(System.Net.Configuration.AuthenticationModuleElement element)
    // Offset: 0x126BB84
    int IndexOf(::System::Net::Configuration::AuthenticationModuleElement* element);
    // public System.Void Remove(System.Net.Configuration.AuthenticationModuleElement element)
    // Offset: 0x126BBC4
    void Remove(::System::Net::Configuration::AuthenticationModuleElement* element);
    // public System.Void Remove(System.String name)
    // Offset: 0x126BC04
    void Remove(::StringW name);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x126BC44
    void RemoveAt(int index);
    // protected override System.Configuration.ConfigurationElement CreateNewElement()
    // Offset: 0x126BB04
    // Implemented from: System.Configuration.ConfigurationElementCollection
    // Base method: System.Configuration.ConfigurationElement ConfigurationElementCollection::CreateNewElement()
    ::System::Configuration::ConfigurationElement* CreateNewElement();
    // protected override System.Object GetElementKey(System.Configuration.ConfigurationElement element)
    // Offset: 0x126BB44
    // Implemented from: System.Configuration.ConfigurationElementCollection
    // Base method: System.Object ConfigurationElementCollection::GetElementKey(System.Configuration.ConfigurationElement element)
    ::Il2CppObject* GetElementKey(::System::Configuration::ConfigurationElement* element);
  }; // System.Net.Configuration.AuthenticationModuleElementCollection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Configuration::AuthenticationModuleElementCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Configuration::AuthenticationModuleElementCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::AuthenticationModuleElement* (System::Net::Configuration::AuthenticationModuleElementCollection::*)(int)>(&System::Net::Configuration::AuthenticationModuleElementCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::AuthenticationModuleElementCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::AuthenticationModuleElementCollection::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::AuthenticationModuleElementCollection::*)(int, ::System::Net::Configuration::AuthenticationModuleElement*)>(&System::Net::Configuration::AuthenticationModuleElementCollection::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Configuration", "AuthenticationModuleElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::AuthenticationModuleElementCollection*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::AuthenticationModuleElementCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Configuration::AuthenticationModuleElement* (System::Net::Configuration::AuthenticationModuleElementCollection::*)(::StringW)>(&System::Net::Configuration::AuthenticationModuleElementCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::AuthenticationModuleElementCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::AuthenticationModuleElementCollection::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::AuthenticationModuleElementCollection::*)(::StringW, ::System::Net::Configuration::AuthenticationModuleElement*)>(&System::Net::Configuration::AuthenticationModuleElementCollection::set_Item)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net.Configuration", "AuthenticationModuleElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::AuthenticationModuleElementCollection*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::AuthenticationModuleElementCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::AuthenticationModuleElementCollection::*)(::System::Net::Configuration::AuthenticationModuleElement*)>(&System::Net::Configuration::AuthenticationModuleElementCollection::Add)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Net.Configuration", "AuthenticationModuleElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::AuthenticationModuleElementCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::AuthenticationModuleElementCollection::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::AuthenticationModuleElementCollection::*)()>(&System::Net::Configuration::AuthenticationModuleElementCollection::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::AuthenticationModuleElementCollection*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::AuthenticationModuleElementCollection::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::Configuration::AuthenticationModuleElementCollection::*)(::System::Net::Configuration::AuthenticationModuleElement*)>(&System::Net::Configuration::AuthenticationModuleElementCollection::IndexOf)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Net.Configuration", "AuthenticationModuleElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::AuthenticationModuleElementCollection*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::AuthenticationModuleElementCollection::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::AuthenticationModuleElementCollection::*)(::System::Net::Configuration::AuthenticationModuleElement*)>(&System::Net::Configuration::AuthenticationModuleElementCollection::Remove)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Net.Configuration", "AuthenticationModuleElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::AuthenticationModuleElementCollection*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::AuthenticationModuleElementCollection::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::AuthenticationModuleElementCollection::*)(::StringW)>(&System::Net::Configuration::AuthenticationModuleElementCollection::Remove)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::AuthenticationModuleElementCollection*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::AuthenticationModuleElementCollection::RemoveAt
// Il2CppName: RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::Configuration::AuthenticationModuleElementCollection::*)(int)>(&System::Net::Configuration::AuthenticationModuleElementCollection::RemoveAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::AuthenticationModuleElementCollection*), "RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::AuthenticationModuleElementCollection::CreateNewElement
// Il2CppName: CreateNewElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::ConfigurationElement* (System::Net::Configuration::AuthenticationModuleElementCollection::*)()>(&System::Net::Configuration::AuthenticationModuleElementCollection::CreateNewElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::AuthenticationModuleElementCollection*), "CreateNewElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Configuration::AuthenticationModuleElementCollection::GetElementKey
// Il2CppName: GetElementKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::Configuration::AuthenticationModuleElementCollection::*)(::System::Configuration::ConfigurationElement*)>(&System::Net::Configuration::AuthenticationModuleElementCollection::GetElementKey)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Configuration", "ConfigurationElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::Configuration::AuthenticationModuleElementCollection*), "GetElementKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
