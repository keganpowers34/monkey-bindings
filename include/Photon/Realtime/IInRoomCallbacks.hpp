// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: Player
  class Player;
}
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Forward declaring type: IInRoomCallbacks
  class IInRoomCallbacks;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Realtime::IInRoomCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::IInRoomCallbacks*, "Photon.Realtime", "IInRoomCallbacks");
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Realtime.IInRoomCallbacks
  // [TokenAttribute] Offset: FFFFFFFF
  class IInRoomCallbacks {
    public:
    // public System.Void OnPlayerEnteredRoom(Photon.Realtime.Player newPlayer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnPlayerEnteredRoom(::Photon::Realtime::Player* newPlayer);
    // public System.Void OnPlayerLeftRoom(Photon.Realtime.Player otherPlayer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnPlayerLeftRoom(::Photon::Realtime::Player* otherPlayer);
    // public System.Void OnRoomPropertiesUpdate(ExitGames.Client.Photon.Hashtable propertiesThatChanged)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable* propertiesThatChanged);
    // public System.Void OnPlayerPropertiesUpdate(Photon.Realtime.Player targetPlayer, ExitGames.Client.Photon.Hashtable changedProps)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnPlayerPropertiesUpdate(::Photon::Realtime::Player* targetPlayer, ::ExitGames::Client::Photon::Hashtable* changedProps);
    // public System.Void OnMasterClientSwitched(Photon.Realtime.Player newMasterClient)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnMasterClientSwitched(::Photon::Realtime::Player* newMasterClient);
  }; // Photon.Realtime.IInRoomCallbacks
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Realtime::IInRoomCallbacks::OnPlayerEnteredRoom
// Il2CppName: OnPlayerEnteredRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::IInRoomCallbacks::*)(::Photon::Realtime::Player*)>(&Photon::Realtime::IInRoomCallbacks::OnPlayerEnteredRoom)> {
  static const MethodInfo* get() {
    static auto* newPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::IInRoomCallbacks*), "OnPlayerEnteredRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newPlayer});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::IInRoomCallbacks::OnPlayerLeftRoom
// Il2CppName: OnPlayerLeftRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::IInRoomCallbacks::*)(::Photon::Realtime::Player*)>(&Photon::Realtime::IInRoomCallbacks::OnPlayerLeftRoom)> {
  static const MethodInfo* get() {
    static auto* otherPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::IInRoomCallbacks*), "OnPlayerLeftRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{otherPlayer});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::IInRoomCallbacks::OnRoomPropertiesUpdate
// Il2CppName: OnRoomPropertiesUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::IInRoomCallbacks::*)(::ExitGames::Client::Photon::Hashtable*)>(&Photon::Realtime::IInRoomCallbacks::OnRoomPropertiesUpdate)> {
  static const MethodInfo* get() {
    static auto* propertiesThatChanged = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "Hashtable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::IInRoomCallbacks*), "OnRoomPropertiesUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertiesThatChanged});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::IInRoomCallbacks::OnPlayerPropertiesUpdate
// Il2CppName: OnPlayerPropertiesUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::IInRoomCallbacks::*)(::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&Photon::Realtime::IInRoomCallbacks::OnPlayerPropertiesUpdate)> {
  static const MethodInfo* get() {
    static auto* targetPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* changedProps = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "Hashtable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::IInRoomCallbacks*), "OnPlayerPropertiesUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetPlayer, changedProps});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::IInRoomCallbacks::OnMasterClientSwitched
// Il2CppName: OnMasterClientSwitched
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::IInRoomCallbacks::*)(::Photon::Realtime::Player*)>(&Photon::Realtime::IInRoomCallbacks::OnMasterClientSwitched)> {
  static const MethodInfo* get() {
    static auto* newMasterClient = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::IInRoomCallbacks*), "OnMasterClientSwitched", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newMasterClient});
  }
};
