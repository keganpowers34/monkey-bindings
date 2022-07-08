// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: EventData
  class EventData;
}
// Completed forward declares
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Forward declaring type: IOnEventCallback
  class IOnEventCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Realtime::IOnEventCallback);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::IOnEventCallback*, "Photon.Realtime", "IOnEventCallback");
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Realtime.IOnEventCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class IOnEventCallback {
    public:
    // public System.Void OnEvent(ExitGames.Client.Photon.EventData photonEvent)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnEvent(::ExitGames::Client::Photon::EventData* photonEvent);
  }; // Photon.Realtime.IOnEventCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Realtime::IOnEventCallback::OnEvent
// Il2CppName: OnEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::IOnEventCallback::*)(::ExitGames::Client::Photon::EventData*)>(&Photon::Realtime::IOnEventCallback::OnEvent)> {
  static const MethodInfo* get() {
    static auto* photonEvent = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "EventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::IOnEventCallback*), "OnEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{photonEvent});
  }
};
