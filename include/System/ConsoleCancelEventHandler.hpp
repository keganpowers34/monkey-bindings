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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ConsoleCancelEventArgs
  class ConsoleCancelEventArgs;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: ConsoleCancelEventHandler
  class ConsoleCancelEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ConsoleCancelEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ConsoleCancelEventHandler*, "System", "ConsoleCancelEventHandler");
// Type namespace: System
namespace System {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.ConsoleCancelEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class ConsoleCancelEventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x13DAC28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConsoleCancelEventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ConsoleCancelEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConsoleCancelEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.ConsoleCancelEventArgs e)
    // Offset: 0x13DA078
    void Invoke(::Il2CppObject* sender, ::System::ConsoleCancelEventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.ConsoleCancelEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0x13DAC38
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, ::System::ConsoleCancelEventArgs* e, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x13DAC68
    void EndInvoke(::System::IAsyncResult* result);
  }; // System.ConsoleCancelEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ConsoleCancelEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ConsoleCancelEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ConsoleCancelEventHandler::*)(::Il2CppObject*, ::System::ConsoleCancelEventArgs*)>(&System::ConsoleCancelEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "ConsoleCancelEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ConsoleCancelEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: System::ConsoleCancelEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::ConsoleCancelEventHandler::*)(::Il2CppObject*, ::System::ConsoleCancelEventArgs*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::ConsoleCancelEventHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "ConsoleCancelEventArgs")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ConsoleCancelEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e, callback, object});
  }
};
// Writing MetadataGetter for method: System::ConsoleCancelEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ConsoleCancelEventHandler::*)(::System::IAsyncResult*)>(&System::ConsoleCancelEventHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ConsoleCancelEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
