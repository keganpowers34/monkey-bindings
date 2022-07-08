// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.HttpWebRequest
#include "System/Net/HttpWebRequest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebAsyncResult
  class WebAsyncResult;
  // Forward declaring type: SimpleAsyncResult
  class SimpleAsyncResult;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::HttpWebRequest::$$c__DisplayClass238_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpWebRequest::$$c__DisplayClass238_0*, "System.Net", "HttpWebRequest/<>c__DisplayClass238_0");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpWebRequest/<>c__DisplayClass238_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: A5F920
  class HttpWebRequest::$$c__DisplayClass238_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Net.WebAsyncResult aread
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::WebAsyncResult* aread;
    // Field size check
    static_assert(sizeof(::System::Net::WebAsyncResult*) == 0x8);
    // public System.Net.HttpWebRequest <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::System::Net::HttpWebRequest* $$4__this;
    // Field size check
    static_assert(sizeof(::System::Net::HttpWebRequest*) == 0x8);
    public:
    // Get instance field reference: public System.Net.WebAsyncResult aread
    [[deprecated("Use field access instead!")]] ::System::Net::WebAsyncResult*& dyn_aread();
    // Get instance field reference: public System.Net.HttpWebRequest <>4__this
    [[deprecated("Use field access instead!")]] ::System::Net::HttpWebRequest*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0xF47CEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpWebRequest::$$c__DisplayClass238_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpWebRequest::$$c__DisplayClass238_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpWebRequest::$$c__DisplayClass238_0*, creationType>()));
    }
    // System.Void <BeginGetResponse>b__0(System.Net.SimpleAsyncResult inner)
    // Offset: 0xF4B8D8
    void $BeginGetResponse$b__0(::System::Net::SimpleAsyncResult* inner);
  }; // System.Net.HttpWebRequest/<>c__DisplayClass238_0
  #pragma pack(pop)
  static check_size<sizeof(HttpWebRequest::$$c__DisplayClass238_0), 24 + sizeof(::System::Net::HttpWebRequest*)> __System_Net_HttpWebRequest_$$c__DisplayClass238_0SizeCheck;
  static_assert(sizeof(HttpWebRequest::$$c__DisplayClass238_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpWebRequest::$$c__DisplayClass238_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpWebRequest::$$c__DisplayClass238_0::$BeginGetResponse$b__0
// Il2CppName: <BeginGetResponse>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpWebRequest::$$c__DisplayClass238_0::*)(::System::Net::SimpleAsyncResult*)>(&System::Net::HttpWebRequest::$$c__DisplayClass238_0::$BeginGetResponse$b__0)> {
  static const MethodInfo* get() {
    static auto* inner = &::il2cpp_utils::GetClassFromName("System.Net", "SimpleAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpWebRequest::$$c__DisplayClass238_0*), "<BeginGetResponse>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inner});
  }
};
