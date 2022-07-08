// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.TransportType
#include "System/Net/TransportType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: EndpointPermission
  class EndpointPermission;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::EndpointPermission);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::EndpointPermission*, "System.Net", "EndpointPermission");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.EndpointPermission
  // [TokenAttribute] Offset: FFFFFFFF
  class EndpointPermission : public ::Il2CppObject {
    public:
    public:
    // private System.String hostname
    // Size: 0x8
    // Offset: 0x10
    ::StringW hostname;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 port
    // Size: 0x4
    // Offset: 0x18
    int port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Net.TransportType transport
    // Size: 0x4
    // Offset: 0x1C
    ::System::Net::TransportType transport;
    // Field size check
    static_assert(sizeof(::System::Net::TransportType) == 0x4);
    // private System.Boolean resolved
    // Size: 0x1
    // Offset: 0x20
    bool resolved;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hasWildcard
    // Size: 0x1
    // Offset: 0x21
    bool hasWildcard;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasWildcard and: addresses
    char __padding4[0x6] = {};
    // private System.Net.IPAddress[] addresses
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::System::Net::IPAddress*> addresses;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Net::IPAddress*>) == 0x8);
    public:
    // Get static field: static private System.Char[] dot_char
    static ::ArrayW<::Il2CppChar> _get_dot_char();
    // Set static field: static private System.Char[] dot_char
    static void _set_dot_char(::ArrayW<::Il2CppChar> value);
    // Get instance field reference: private System.String hostname
    [[deprecated("Use field access instead!")]] ::StringW& dyn_hostname();
    // Get instance field reference: private System.Int32 port
    [[deprecated("Use field access instead!")]] int& dyn_port();
    // Get instance field reference: private System.Net.TransportType transport
    [[deprecated("Use field access instead!")]] ::System::Net::TransportType& dyn_transport();
    // Get instance field reference: private System.Boolean resolved
    [[deprecated("Use field access instead!")]] bool& dyn_resolved();
    // Get instance field reference: private System.Boolean hasWildcard
    [[deprecated("Use field access instead!")]] bool& dyn_hasWildcard();
    // Get instance field reference: private System.Net.IPAddress[] addresses
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Net::IPAddress*>& dyn_addresses();
    // System.Void .ctor(System.String hostname, System.Int32 port, System.Net.TransportType transport)
    // Offset: 0xFE071C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EndpointPermission* New_ctor(::StringW hostname, int port, ::System::Net::TransportType transport) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::EndpointPermission::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EndpointPermission*, creationType>(hostname, port, transport)));
    }
    // public System.String get_Hostname()
    // Offset: 0xFE07D4
    ::StringW get_Hostname();
    // public System.Int32 get_Port()
    // Offset: 0xFE07DC
    int get_Port();
    // public System.Net.TransportType get_Transport()
    // Offset: 0xFE07E4
    ::System::Net::TransportType get_Transport();
    // System.Boolean IsSubsetOf(System.Net.EndpointPermission perm)
    // Offset: 0xFE0A90
    bool IsSubsetOf(::System::Net::EndpointPermission* perm);
    // private System.Boolean IsSubsetOf(System.String addr1, System.String addr2)
    // Offset: 0xFE0E6C
    bool IsSubsetOf(::StringW addr1, ::StringW addr2);
    // System.Net.EndpointPermission Intersect(System.Net.EndpointPermission perm)
    // Offset: 0xFE10C4
    ::System::Net::EndpointPermission* Intersect(::System::Net::EndpointPermission* perm);
    // private System.String IntersectHostname(System.Net.EndpointPermission perm)
    // Offset: 0xFE11D8
    ::StringW IntersectHostname(::System::Net::EndpointPermission* perm);
    // private System.String Intersect(System.String addr1, System.String addr2)
    // Offset: 0xFE13A8
    ::StringW Intersect(::StringW addr1, ::StringW addr2);
    // private System.Int32 ToNumber(System.String value)
    // Offset: 0xFE0FB0
    int ToNumber(::StringW value);
    // System.Void Resolve()
    // Offset: 0xFE0C1C
    void Resolve();
    // System.Void UndoResolve()
    // Offset: 0xFE16C4
    void UndoResolve();
    // static private System.Void .cctor()
    // Offset: 0xFE16CC
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0xFE1754
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EndpointPermission* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::EndpointPermission::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EndpointPermission*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFE07EC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xFE08C0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xFE08EC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Net.EndpointPermission
  #pragma pack(pop)
  static check_size<sizeof(EndpointPermission), 40 + sizeof(::ArrayW<::System::Net::IPAddress*>)> __System_Net_EndpointPermissionSizeCheck;
  static_assert(sizeof(EndpointPermission) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::EndpointPermission::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::EndpointPermission::get_Hostname
// Il2CppName: get_Hostname
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::EndpointPermission::*)()>(&System::Net::EndpointPermission::get_Hostname)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndpointPermission*), "get_Hostname", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::EndpointPermission::get_Port
// Il2CppName: get_Port
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::EndpointPermission::*)()>(&System::Net::EndpointPermission::get_Port)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndpointPermission*), "get_Port", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::EndpointPermission::get_Transport
// Il2CppName: get_Transport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::TransportType (System::Net::EndpointPermission::*)()>(&System::Net::EndpointPermission::get_Transport)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndpointPermission*), "get_Transport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::EndpointPermission::IsSubsetOf
// Il2CppName: IsSubsetOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::EndpointPermission::*)(::System::Net::EndpointPermission*)>(&System::Net::EndpointPermission::IsSubsetOf)> {
  static const MethodInfo* get() {
    static auto* perm = &::il2cpp_utils::GetClassFromName("System.Net", "EndpointPermission")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndpointPermission*), "IsSubsetOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{perm});
  }
};
// Writing MetadataGetter for method: System::Net::EndpointPermission::IsSubsetOf
// Il2CppName: IsSubsetOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::EndpointPermission::*)(::StringW, ::StringW)>(&System::Net::EndpointPermission::IsSubsetOf)> {
  static const MethodInfo* get() {
    static auto* addr1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* addr2 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndpointPermission*), "IsSubsetOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{addr1, addr2});
  }
};
// Writing MetadataGetter for method: System::Net::EndpointPermission::Intersect
// Il2CppName: Intersect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::EndpointPermission* (System::Net::EndpointPermission::*)(::System::Net::EndpointPermission*)>(&System::Net::EndpointPermission::Intersect)> {
  static const MethodInfo* get() {
    static auto* perm = &::il2cpp_utils::GetClassFromName("System.Net", "EndpointPermission")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndpointPermission*), "Intersect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{perm});
  }
};
// Writing MetadataGetter for method: System::Net::EndpointPermission::IntersectHostname
// Il2CppName: IntersectHostname
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::EndpointPermission::*)(::System::Net::EndpointPermission*)>(&System::Net::EndpointPermission::IntersectHostname)> {
  static const MethodInfo* get() {
    static auto* perm = &::il2cpp_utils::GetClassFromName("System.Net", "EndpointPermission")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndpointPermission*), "IntersectHostname", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{perm});
  }
};
// Writing MetadataGetter for method: System::Net::EndpointPermission::Intersect
// Il2CppName: Intersect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::EndpointPermission::*)(::StringW, ::StringW)>(&System::Net::EndpointPermission::Intersect)> {
  static const MethodInfo* get() {
    static auto* addr1 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* addr2 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndpointPermission*), "Intersect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{addr1, addr2});
  }
};
// Writing MetadataGetter for method: System::Net::EndpointPermission::ToNumber
// Il2CppName: ToNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::EndpointPermission::*)(::StringW)>(&System::Net::EndpointPermission::ToNumber)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndpointPermission*), "ToNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::EndpointPermission::Resolve
// Il2CppName: Resolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::EndpointPermission::*)()>(&System::Net::EndpointPermission::Resolve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndpointPermission*), "Resolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::EndpointPermission::UndoResolve
// Il2CppName: UndoResolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::EndpointPermission::*)()>(&System::Net::EndpointPermission::UndoResolve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndpointPermission*), "UndoResolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::EndpointPermission::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::EndpointPermission::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndpointPermission*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::EndpointPermission::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::EndpointPermission::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::EndpointPermission::*)(::Il2CppObject*)>(&System::Net::EndpointPermission::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndpointPermission*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Net::EndpointPermission::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Net::EndpointPermission::*)()>(&System::Net::EndpointPermission::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndpointPermission*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::EndpointPermission::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::EndpointPermission::*)()>(&System::Net::EndpointPermission::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::EndpointPermission*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
