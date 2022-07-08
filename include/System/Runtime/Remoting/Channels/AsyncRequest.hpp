// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
  // Forward declaring type: IMessage
  class IMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Forward declaring type: AsyncRequest
  class AsyncRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Channels::AsyncRequest);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::AsyncRequest*, "System.Runtime.Remoting.Channels", "AsyncRequest");
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Channels.AsyncRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class AsyncRequest : public ::Il2CppObject {
    public:
    public:
    // System.Runtime.Remoting.Messaging.IMessageSink ReplySink
    // Size: 0x8
    // Offset: 0x10
    ::System::Runtime::Remoting::Messaging::IMessageSink* ReplySink;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Messaging::IMessageSink*) == 0x8);
    // System.Runtime.Remoting.Messaging.IMessage MsgRequest
    // Size: 0x8
    // Offset: 0x18
    ::System::Runtime::Remoting::Messaging::IMessage* MsgRequest;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Messaging::IMessage*) == 0x8);
    public:
    // Get instance field reference: System.Runtime.Remoting.Messaging.IMessageSink ReplySink
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Messaging::IMessageSink*& dyn_ReplySink();
    // Get instance field reference: System.Runtime.Remoting.Messaging.IMessage MsgRequest
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Messaging::IMessage*& dyn_MsgRequest();
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMessage msgRequest, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0xE7EF58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncRequest* New_ctor(::System::Runtime::Remoting::Messaging::IMessage* msgRequest, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Channels::AsyncRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncRequest*, creationType>(msgRequest, replySink)));
    }
  }; // System.Runtime.Remoting.Channels.AsyncRequest
  #pragma pack(pop)
  static check_size<sizeof(AsyncRequest), 24 + sizeof(::System::Runtime::Remoting::Messaging::IMessage*)> __System_Runtime_Remoting_Channels_AsyncRequestSizeCheck;
  static_assert(sizeof(AsyncRequest) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::AsyncRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
