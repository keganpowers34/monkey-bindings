// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.Cache.RequestCacheLevel
#include "System/Net/Cache/RequestCacheLevel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Net.Cache
namespace System::Net::Cache {
  // Forward declaring type: RequestCachePolicy
  class RequestCachePolicy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Cache::RequestCachePolicy);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCachePolicy*, "System.Net.Cache", "RequestCachePolicy");
// Type namespace: System.Net.Cache
namespace System::Net::Cache {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Cache.RequestCachePolicy
  // [TokenAttribute] Offset: FFFFFFFF
  class RequestCachePolicy : public ::Il2CppObject {
    public:
    public:
    // private System.Net.Cache.RequestCacheLevel m_Level
    // Size: 0x4
    // Offset: 0x10
    ::System::Net::Cache::RequestCacheLevel m_Level;
    // Field size check
    static_assert(sizeof(::System::Net::Cache::RequestCacheLevel) == 0x4);
    public:
    // Creating conversion operator: operator ::System::Net::Cache::RequestCacheLevel
    constexpr operator ::System::Net::Cache::RequestCacheLevel() const noexcept {
      return m_Level;
    }
    // Get instance field reference: private System.Net.Cache.RequestCacheLevel m_Level
    [[deprecated("Use field access instead!")]] ::System::Net::Cache::RequestCacheLevel& dyn_m_Level();
    // public System.Void .ctor(System.Net.Cache.RequestCacheLevel level)
    // Offset: 0x1269EF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RequestCachePolicy* New_ctor(::System::Net::Cache::RequestCacheLevel level) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::Cache::RequestCachePolicy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RequestCachePolicy*, creationType>(level)));
    }
    // public System.Net.Cache.RequestCacheLevel get_Level()
    // Offset: 0x1269F90
    ::System::Net::Cache::RequestCacheLevel get_Level();
    // public override System.String ToString()
    // Offset: 0x1269F98
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Net.Cache.RequestCachePolicy
  #pragma pack(pop)
  static check_size<sizeof(RequestCachePolicy), 16 + sizeof(::System::Net::Cache::RequestCacheLevel)> __System_Net_Cache_RequestCachePolicySizeCheck;
  static_assert(sizeof(RequestCachePolicy) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Cache::RequestCachePolicy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::Cache::RequestCachePolicy::get_Level
// Il2CppName: get_Level
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Cache::RequestCacheLevel (System::Net::Cache::RequestCachePolicy::*)()>(&System::Net::Cache::RequestCachePolicy::get_Level)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cache::RequestCachePolicy*), "get_Level", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::Cache::RequestCachePolicy::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::Cache::RequestCachePolicy::*)()>(&System::Net::Cache::RequestCachePolicy::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cache::RequestCachePolicy*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
