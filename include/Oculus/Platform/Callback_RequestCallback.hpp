// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Callback
#include "Oculus/Platform/Callback.hpp"
// Including type: Oculus.Platform.Message
#include "Oculus/Platform/Message.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Callback::RequestCallback);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Callback::RequestCallback*, "Oculus.Platform", "Callback/RequestCallback");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Callback/RequestCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class Callback::RequestCallback : public ::Il2CppObject {
    public:
    public:
    // private Oculus.Platform.Message/Callback messageCallback
    // Size: 0x8
    // Offset: 0x10
    ::Oculus::Platform::Message::Callback* messageCallback;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Message::Callback*) == 0x8);
    public:
    // Creating conversion operator: operator ::Oculus::Platform::Message::Callback*
    constexpr operator ::Oculus::Platform::Message::Callback*() const noexcept {
      return messageCallback;
    }
    // Get instance field reference: private Oculus.Platform.Message/Callback messageCallback
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Message::Callback*& dyn_messageCallback();
    // public System.Void .ctor()
    // Offset: 0xEBC464
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Callback::RequestCallback* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Callback::RequestCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Callback::RequestCallback*, creationType>()));
    }
    // public System.Void .ctor(Oculus.Platform.Message/Callback callback)
    // Offset: 0xEBBCC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Callback::RequestCallback* New_ctor(::Oculus::Platform::Message::Callback* callback) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Callback::RequestCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Callback::RequestCallback*, creationType>(callback)));
    }
    // public System.Void HandleMessage(Oculus.Platform.Message msg)
    // Offset: 0xEBC46C
    void HandleMessage(::Oculus::Platform::Message* msg);
  }; // Oculus.Platform.Callback/RequestCallback
  #pragma pack(pop)
  static check_size<sizeof(Callback::RequestCallback), 16 + sizeof(::Oculus::Platform::Message::Callback*)> __Oculus_Platform_Callback_RequestCallbackSizeCheck;
  static_assert(sizeof(Callback::RequestCallback) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Callback::RequestCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::Callback::RequestCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::Callback::RequestCallback::HandleMessage
// Il2CppName: HandleMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Callback::RequestCallback::*)(::Oculus::Platform::Message*)>(&Oculus::Platform::Callback::RequestCallback::HandleMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Callback::RequestCallback*), "HandleMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
