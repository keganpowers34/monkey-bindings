// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessageSink
#include "System/Runtime/Remoting/Messaging/IMessageSink.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
}
// Forward declaring namespace: System::Runtime::Remoting::Proxies
namespace System::Runtime::Remoting::Proxies {
  // Forward declaring type: RealProxy
  class RealProxy;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMessageCtrl
  class IMessageCtrl;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: StackBuilderSink
  class StackBuilderSink;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::StackBuilderSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::StackBuilderSink*, "System.Runtime.Remoting.Messaging", "StackBuilderSink");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.StackBuilderSink
  // [TokenAttribute] Offset: FFFFFFFF
  class StackBuilderSink : public ::Il2CppObject/*, public ::System::Runtime::Remoting::Messaging::IMessageSink*/ {
    public:
    public:
    // private System.MarshalByRefObject _target
    // Size: 0x8
    // Offset: 0x10
    ::System::MarshalByRefObject* target;
    // Field size check
    static_assert(sizeof(::System::MarshalByRefObject*) == 0x8);
    // private System.Runtime.Remoting.Proxies.RealProxy _rp
    // Size: 0x8
    // Offset: 0x18
    ::System::Runtime::Remoting::Proxies::RealProxy* rp;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Proxies::RealProxy*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::Messaging::IMessageSink
    operator ::System::Runtime::Remoting::Messaging::IMessageSink() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(this);
    }
    // Get instance field reference: private System.MarshalByRefObject _target
    [[deprecated("Use field access instead!")]] ::System::MarshalByRefObject*& dyn__target();
    // Get instance field reference: private System.Runtime.Remoting.Proxies.RealProxy _rp
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Proxies::RealProxy*& dyn__rp();
    // public System.Void .ctor(System.MarshalByRefObject obj, System.Boolean forceInternalExecute)
    // Offset: 0x11A58BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StackBuilderSink* New_ctor(::System::MarshalByRefObject* obj, bool forceInternalExecute) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::StackBuilderSink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StackBuilderSink*, creationType>(obj, forceInternalExecute)));
    }
    // public System.Runtime.Remoting.Messaging.IMessage SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x11A5944
    ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);
    // public System.Runtime.Remoting.Messaging.IMessageCtrl AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x11A68A4
    ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);
    // private System.Void ExecuteAsyncMessage(System.Object ob)
    // Offset: 0x11A69B8
    void ExecuteAsyncMessage(::Il2CppObject* ob);
    // private System.Void CheckParameters(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x11A5A1C
    void CheckParameters(::System::Runtime::Remoting::Messaging::IMessage* msg);
    // private System.Void <AsyncProcessMessage>b__4_0(System.Object data)
    // Offset: 0x11A6BB8
    void $AsyncProcessMessage$b__4_0(::Il2CppObject* data);
  }; // System.Runtime.Remoting.Messaging.StackBuilderSink
  #pragma pack(pop)
  static check_size<sizeof(StackBuilderSink), 24 + sizeof(::System::Runtime::Remoting::Proxies::RealProxy*)> __System_Runtime_Remoting_Messaging_StackBuilderSinkSizeCheck;
  static_assert(sizeof(StackBuilderSink) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::StackBuilderSink::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::StackBuilderSink::SyncProcessMessage
// Il2CppName: SyncProcessMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (System::Runtime::Remoting::Messaging::StackBuilderSink::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&System::Runtime::Remoting::Messaging::StackBuilderSink::SyncProcessMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::StackBuilderSink*), "SyncProcessMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::StackBuilderSink::AsyncProcessMessage
// Il2CppName: AsyncProcessMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (System::Runtime::Remoting::Messaging::StackBuilderSink::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(&System::Runtime::Remoting::Messaging::StackBuilderSink::AsyncProcessMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    static auto* replySink = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessageSink")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::StackBuilderSink*), "AsyncProcessMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, replySink});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::StackBuilderSink::ExecuteAsyncMessage
// Il2CppName: ExecuteAsyncMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::StackBuilderSink::*)(::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::StackBuilderSink::ExecuteAsyncMessage)> {
  static const MethodInfo* get() {
    static auto* ob = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::StackBuilderSink*), "ExecuteAsyncMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ob});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::StackBuilderSink::CheckParameters
// Il2CppName: CheckParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::StackBuilderSink::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&System::Runtime::Remoting::Messaging::StackBuilderSink::CheckParameters)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::StackBuilderSink*), "CheckParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::StackBuilderSink::$AsyncProcessMessage$b__4_0
// Il2CppName: <AsyncProcessMessage>b__4_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::StackBuilderSink::*)(::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::StackBuilderSink::$AsyncProcessMessage$b__4_0)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::StackBuilderSink*), "<AsyncProcessMessage>b__4_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
