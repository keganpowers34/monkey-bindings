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
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: RefreshEventArgs
  class RefreshEventArgs;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: RefreshEventHandler
  class RefreshEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::RefreshEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::RefreshEventHandler*, "System.ComponentModel", "RefreshEventHandler");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.RefreshEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class RefreshEventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x123C4E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RefreshEventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::RefreshEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RefreshEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.ComponentModel.RefreshEventArgs e)
    // Offset: 0x123C4F4
    void Invoke(::System::ComponentModel::RefreshEventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.ComponentModel.RefreshEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0x123C8AC
    ::System::IAsyncResult* BeginInvoke(::System::ComponentModel::RefreshEventArgs* e, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x123C8D0
    void EndInvoke(::System::IAsyncResult* result);
  }; // System.ComponentModel.RefreshEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::RefreshEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::RefreshEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::RefreshEventHandler::*)(::System::ComponentModel::RefreshEventArgs*)>(&System::ComponentModel::RefreshEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "RefreshEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::RefreshEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::RefreshEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::ComponentModel::RefreshEventHandler::*)(::System::ComponentModel::RefreshEventArgs*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::ComponentModel::RefreshEventHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "RefreshEventArgs")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::RefreshEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e, callback, object});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::RefreshEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::RefreshEventHandler::*)(::System::IAsyncResult*)>(&System::ComponentModel::RefreshEventHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::RefreshEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
