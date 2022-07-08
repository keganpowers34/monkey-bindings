// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: DownloadDataCompletedEventArgs
  class DownloadDataCompletedEventArgs;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: DownloadDataCompletedEventHandler
  class DownloadDataCompletedEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::DownloadDataCompletedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::DownloadDataCompletedEventHandler*, "System.Net", "DownloadDataCompletedEventHandler");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.DownloadDataCompletedEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class DownloadDataCompletedEventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFDC5F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DownloadDataCompletedEventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::DownloadDataCompletedEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DownloadDataCompletedEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.Net.DownloadDataCompletedEventArgs e)
    // Offset: 0xFDC608
    void Invoke(::Il2CppObject* sender, ::System::Net::DownloadDataCompletedEventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.Net.DownloadDataCompletedEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFDCA0C
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, ::System::Net::DownloadDataCompletedEventArgs* e, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xFDCA3C
    void EndInvoke(::System::IAsyncResult* result);
  }; // System.Net.DownloadDataCompletedEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::DownloadDataCompletedEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::DownloadDataCompletedEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::DownloadDataCompletedEventHandler::*)(::Il2CppObject*, ::System::Net::DownloadDataCompletedEventArgs*)>(&System::Net::DownloadDataCompletedEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Net", "DownloadDataCompletedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::DownloadDataCompletedEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: System::Net::DownloadDataCompletedEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::DownloadDataCompletedEventHandler::*)(::Il2CppObject*, ::System::Net::DownloadDataCompletedEventArgs*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::DownloadDataCompletedEventHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Net", "DownloadDataCompletedEventArgs")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::DownloadDataCompletedEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e, callback, object});
  }
};
// Writing MetadataGetter for method: System::Net::DownloadDataCompletedEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::DownloadDataCompletedEventHandler::*)(::System::IAsyncResult*)>(&System::Net::DownloadDataCompletedEventHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::DownloadDataCompletedEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
