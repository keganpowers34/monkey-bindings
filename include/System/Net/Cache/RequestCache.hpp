// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.Net.Cache
namespace System::Net::Cache {
  // Forward declaring type: RequestCache
  class RequestCache;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::Cache::RequestCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCache*, "System.Net.Cache", "RequestCache");
// Type namespace: System.Net.Cache
namespace System::Net::Cache {
  // Size: 0x12
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Cache.RequestCache
  // [TokenAttribute] Offset: FFFFFFFF
  class RequestCache : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean _IsPrivateCache
    // Size: 0x1
    // Offset: 0x10
    bool IsPrivateCache;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _CanWrite
    // Size: 0x1
    // Offset: 0x11
    bool CanWrite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static readonly System.Char[] LineSplits
    static ::ArrayW<::Il2CppChar> _get_LineSplits();
    // Set static field: static readonly System.Char[] LineSplits
    static void _set_LineSplits(::ArrayW<::Il2CppChar> value);
    // Get instance field reference: private System.Boolean _IsPrivateCache
    [[deprecated("Use field access instead!")]] bool& dyn__IsPrivateCache();
    // Get instance field reference: private System.Boolean _CanWrite
    [[deprecated("Use field access instead!")]] bool& dyn__CanWrite();
    // static private System.Void .cctor()
    // Offset: 0x1269768
    static void _cctor();
  }; // System.Net.Cache.RequestCache
  #pragma pack(pop)
  static check_size<sizeof(RequestCache), 17 + sizeof(bool)> __System_Net_Cache_RequestCacheSizeCheck;
  static_assert(sizeof(RequestCache) == 0x12);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::Cache::RequestCache::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::Cache::RequestCache::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::Cache::RequestCache*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
