// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.HttpListener
#include "System/Net/HttpListener.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Authentication::ExtendedProtection
namespace System::Security::Authentication::ExtendedProtection {
  // Forward declaring type: ExtendedProtectionPolicy
  class ExtendedProtectionPolicy;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpListenerRequest
  class HttpListenerRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::HttpListener::ExtendedProtectionSelector);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpListener::ExtendedProtectionSelector*, "System.Net", "HttpListener/ExtendedProtectionSelector");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpListener/ExtendedProtectionSelector
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpListener::ExtendedProtectionSelector : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xF3D944
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpListener::ExtendedProtectionSelector* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpListener::ExtendedProtectionSelector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpListener::ExtendedProtectionSelector*, creationType>(object, method)));
    }
    // public System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy Invoke(System.Net.HttpListenerRequest request)
    // Offset: 0xF3D954
    ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* Invoke(::System::Net::HttpListenerRequest* request);
    // public System.IAsyncResult BeginInvoke(System.Net.HttpListenerRequest request, System.AsyncCallback callback, System.Object object)
    // Offset: 0xF3DD14
    ::System::IAsyncResult* BeginInvoke(::System::Net::HttpListenerRequest* request, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy EndInvoke(System.IAsyncResult result)
    // Offset: 0xF3DD38
    ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* EndInvoke(::System::IAsyncResult* result);
  }; // System.Net.HttpListener/ExtendedProtectionSelector
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpListener::ExtendedProtectionSelector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpListener::ExtendedProtectionSelector::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* (System::Net::HttpListener::ExtendedProtectionSelector::*)(::System::Net::HttpListenerRequest*)>(&System::Net::HttpListener::ExtendedProtectionSelector::Invoke)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net", "HttpListenerRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener::ExtendedProtectionSelector*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::ExtendedProtectionSelector::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::HttpListener::ExtendedProtectionSelector::*)(::System::Net::HttpListenerRequest*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::HttpListener::ExtendedProtectionSelector::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("System.Net", "HttpListenerRequest")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener::ExtendedProtectionSelector*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, callback, object});
  }
};
// Writing MetadataGetter for method: System::Net::HttpListener::ExtendedProtectionSelector::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* (System::Net::HttpListener::ExtendedProtectionSelector::*)(::System::IAsyncResult*)>(&System::Net::HttpListener::ExtendedProtectionSelector::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpListener::ExtendedProtectionSelector*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
