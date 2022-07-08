// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.ICredentials
#include "System/Net/ICredentials.hpp"
// Including type: System.Net.ICredentialsByHost
#include "System/Net/ICredentialsByHost.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: NetworkCredential
  class NetworkCredential;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: CredentialCache
  class CredentialCache;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::CredentialCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CredentialCache*, "System.Net", "CredentialCache");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.CredentialCache
  // [TokenAttribute] Offset: FFFFFFFF
  class CredentialCache : public ::Il2CppObject/*, public ::System::Net::ICredentials, public ::System::Net::ICredentialsByHost, public ::System::Collections::IEnumerable*/ {
    public:
    // Nested type: ::System::Net::CredentialCache::CredentialEnumerator
    class CredentialEnumerator;
    public:
    // private System.Collections.Hashtable cache
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Hashtable* cache;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.Collections.Hashtable cacheForHosts
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Hashtable* cacheForHosts;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // System.Int32 m_version
    // Size: 0x4
    // Offset: 0x20
    int m_version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_NumbDefaultCredInCache
    // Size: 0x4
    // Offset: 0x24
    int m_NumbDefaultCredInCache;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Net::ICredentials
    operator ::System::Net::ICredentials() noexcept {
      return *reinterpret_cast<::System::Net::ICredentials*>(this);
    }
    // Creating interface conversion operator: operator ::System::Net::ICredentialsByHost
    operator ::System::Net::ICredentialsByHost() noexcept {
      return *reinterpret_cast<::System::Net::ICredentialsByHost*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::IEnumerable
    operator ::System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerable*>(this);
    }
    // Get instance field reference: private System.Collections.Hashtable cache
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_cache();
    // Get instance field reference: private System.Collections.Hashtable cacheForHosts
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_cacheForHosts();
    // Get instance field reference: System.Int32 m_version
    [[deprecated("Use field access instead!")]] int& dyn_m_version();
    // Get instance field reference: private System.Int32 m_NumbDefaultCredInCache
    [[deprecated("Use field access instead!")]] int& dyn_m_NumbDefaultCredInCache();
    // System.Boolean get_IsDefaultInCache()
    // Offset: 0x127C0E0
    bool get_IsDefaultInCache();
    // public System.Void .ctor()
    // Offset: 0x127C0F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CredentialCache* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::CredentialCache::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CredentialCache*, creationType>()));
    }
    // public System.Void Add(System.Uri uriPrefix, System.String authType, System.Net.NetworkCredential cred)
    // Offset: 0x127C178
    void Add(::System::Uri* uriPrefix, ::StringW authType, ::System::Net::NetworkCredential* cred);
    // public System.Void Add(System.String host, System.Int32 port, System.String authenticationType, System.Net.NetworkCredential credential)
    // Offset: 0x127C3C4
    void Add(::StringW host, int port, ::StringW authenticationType, ::System::Net::NetworkCredential* credential);
    // public System.Void Remove(System.Uri uriPrefix, System.String authType)
    // Offset: 0x127C6AC
    void Remove(::System::Uri* uriPrefix, ::StringW authType);
    // public System.Void Remove(System.String host, System.Int32 port, System.String authenticationType)
    // Offset: 0x127C7F0
    void Remove(::StringW host, int port, ::StringW authenticationType);
    // public System.Net.NetworkCredential GetCredential(System.Uri uriPrefix, System.String authType)
    // Offset: 0x127C91C
    ::System::Net::NetworkCredential* GetCredential(::System::Uri* uriPrefix, ::StringW authType);
    // public System.Net.NetworkCredential GetCredential(System.String host, System.Int32 port, System.String authenticationType)
    // Offset: 0x127CC30
    ::System::Net::NetworkCredential* GetCredential(::StringW host, int port, ::StringW authenticationType);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x127CFC0
    ::System::Collections::IEnumerator* GetEnumerator();
    // static public System.Net.ICredentials get_DefaultCredentials()
    // Offset: 0x127D048
    static ::System::Net::ICredentials* get_DefaultCredentials();
    // static public System.Net.NetworkCredential get_DefaultNetworkCredentials()
    // Offset: 0x127D0B0
    static ::System::Net::NetworkCredential* get_DefaultNetworkCredentials();
  }; // System.Net.CredentialCache
  #pragma pack(pop)
  static check_size<sizeof(CredentialCache), 36 + sizeof(int)> __System_Net_CredentialCacheSizeCheck;
  static_assert(sizeof(CredentialCache) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::CredentialCache::get_IsDefaultInCache
// Il2CppName: get_IsDefaultInCache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::CredentialCache::*)()>(&System::Net::CredentialCache::get_IsDefaultInCache)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialCache*), "get_IsDefaultInCache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CredentialCache::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::CredentialCache::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CredentialCache::*)(::System::Uri*, ::StringW, ::System::Net::NetworkCredential*)>(&System::Net::CredentialCache::Add)> {
  static const MethodInfo* get() {
    static auto* uriPrefix = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* authType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* cred = &::il2cpp_utils::GetClassFromName("System.Net", "NetworkCredential")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialCache*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uriPrefix, authType, cred});
  }
};
// Writing MetadataGetter for method: System::Net::CredentialCache::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CredentialCache::*)(::StringW, int, ::StringW, ::System::Net::NetworkCredential*)>(&System::Net::CredentialCache::Add)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* authenticationType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* credential = &::il2cpp_utils::GetClassFromName("System.Net", "NetworkCredential")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialCache*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, port, authenticationType, credential});
  }
};
// Writing MetadataGetter for method: System::Net::CredentialCache::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CredentialCache::*)(::System::Uri*, ::StringW)>(&System::Net::CredentialCache::Remove)> {
  static const MethodInfo* get() {
    static auto* uriPrefix = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* authType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialCache*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uriPrefix, authType});
  }
};
// Writing MetadataGetter for method: System::Net::CredentialCache::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::CredentialCache::*)(::StringW, int, ::StringW)>(&System::Net::CredentialCache::Remove)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* authenticationType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialCache*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, port, authenticationType});
  }
};
// Writing MetadataGetter for method: System::Net::CredentialCache::GetCredential
// Il2CppName: GetCredential
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkCredential* (System::Net::CredentialCache::*)(::System::Uri*, ::StringW)>(&System::Net::CredentialCache::GetCredential)> {
  static const MethodInfo* get() {
    static auto* uriPrefix = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    static auto* authType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialCache*), "GetCredential", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uriPrefix, authType});
  }
};
// Writing MetadataGetter for method: System::Net::CredentialCache::GetCredential
// Il2CppName: GetCredential
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkCredential* (System::Net::CredentialCache::*)(::StringW, int, ::StringW)>(&System::Net::CredentialCache::GetCredential)> {
  static const MethodInfo* get() {
    static auto* host = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* authenticationType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialCache*), "GetCredential", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{host, port, authenticationType});
  }
};
// Writing MetadataGetter for method: System::Net::CredentialCache::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Net::CredentialCache::*)()>(&System::Net::CredentialCache::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialCache*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CredentialCache::get_DefaultCredentials
// Il2CppName: get_DefaultCredentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ICredentials* (*)()>(&System::Net::CredentialCache::get_DefaultCredentials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialCache*), "get_DefaultCredentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CredentialCache::get_DefaultNetworkCredentials
// Il2CppName: get_DefaultNetworkCredentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkCredential* (*)()>(&System::Net::CredentialCache::get_DefaultNetworkCredentials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CredentialCache*), "get_DefaultNetworkCredentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
