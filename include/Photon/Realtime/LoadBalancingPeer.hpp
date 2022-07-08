// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ExitGames.Client.Photon.PhotonPeer
#include "ExitGames/Client/Photon/PhotonPeer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: TypedLobby
  class TypedLobby;
  // Forward declaring type: RoomOptions
  class RoomOptions;
  // Forward declaring type: EnterRoomParams
  class EnterRoomParams;
  // Forward declaring type: OpJoinRandomRoomParams
  class OpJoinRandomRoomParams;
  // Forward declaring type: FindFriendsOptions
  class FindFriendsOptions;
  // Forward declaring type: WebFlags
  class WebFlags;
  // Forward declaring type: AuthenticationValues
  class AuthenticationValues;
  // Forward declaring type: EncryptionMode
  struct EncryptionMode;
  // Forward declaring type: RaiseEventOptions
  class RaiseEventOptions;
}
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: Pool`1<T>
  template<typename T>
  class Pool_1;
  // Forward declaring type: ParameterDictionary
  class ParameterDictionary;
  // Forward declaring type: IPhotonPeerListener
  class IPhotonPeerListener;
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: SendOptions
  struct SendOptions;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Forward declaring type: LoadBalancingPeer
  class LoadBalancingPeer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Realtime::LoadBalancingPeer);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::LoadBalancingPeer*, "Photon.Realtime", "LoadBalancingPeer");
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Size: 0x120
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Realtime.LoadBalancingPeer
  // [TokenAttribute] Offset: FFFFFFFF
  class LoadBalancingPeer : public ::ExitGames::Client::Photon::PhotonPeer {
    public:
    // Nested type: ::Photon::Realtime::LoadBalancingPeer::$$c
    class $$c;
    public:
    // private readonly ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary> paramDictionaryPool
    // Size: 0x8
    // Offset: 0x118
    ::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>* paramDictionaryPool;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>*
    constexpr operator ::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>*() const noexcept {
      return paramDictionaryPool;
    }
    // Get instance field reference: private readonly ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary> paramDictionaryPool
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>*& dyn_paramDictionaryPool();
    // static protected internal System.Type get_PingImplementation()
    // Offset: 0x1C14950
    static ::System::Type* get_PingImplementation();
    // static protected internal System.Void set_PingImplementation(System.Type value)
    // Offset: 0x1C149A0
    static void set_PingImplementation(::System::Type* value);
    // public System.Void .ctor(ExitGames.Client.Photon.ConnectionProtocol protocolType)
    // Offset: 0x1C149F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoadBalancingPeer* New_ctor(::ExitGames::Client::Photon::ConnectionProtocol protocolType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Realtime::LoadBalancingPeer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoadBalancingPeer*, creationType>(protocolType)));
    }
    // public System.Void .ctor(ExitGames.Client.Photon.IPhotonPeerListener listener, ExitGames.Client.Photon.ConnectionProtocol protocolType)
    // Offset: 0x1C0C1C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoadBalancingPeer* New_ctor(::ExitGames::Client::Photon::IPhotonPeerListener* listener, ::ExitGames::Client::Photon::ConnectionProtocol protocolType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Realtime::LoadBalancingPeer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoadBalancingPeer*, creationType>(listener, protocolType)));
    }
    // private System.Void ConfigUnitySockets()
    // Offset: 0x1C14BCC
    void ConfigUnitySockets();
    // public System.Boolean OpGetRegions(System.String appId)
    // Offset: 0x1C14DCC
    bool OpGetRegions(::StringW appId);
    // public System.Boolean OpJoinLobby(Photon.Realtime.TypedLobby lobby)
    // Offset: 0x1C14EB0
    bool OpJoinLobby(::Photon::Realtime::TypedLobby* lobby);
    // public System.Boolean OpLeaveLobby()
    // Offset: 0x1C15078
    bool OpLeaveLobby();
    // private System.Void RoomOptionsToOpParameters(System.Collections.Generic.Dictionary`2<System.Byte,System.Object> op, Photon.Realtime.RoomOptions roomOptions, System.Boolean usePropertiesKey)
    // Offset: 0x1C15198
    void RoomOptionsToOpParameters(::System::Collections::Generic::Dictionary_2<uint8_t, ::Il2CppObject*>* op, ::Photon::Realtime::RoomOptions* roomOptions, bool usePropertiesKey);
    // public System.Boolean OpCreateRoom(Photon.Realtime.EnterRoomParams opParams)
    // Offset: 0x1C15558
    bool OpCreateRoom(::Photon::Realtime::EnterRoomParams* opParams);
    // public System.Boolean OpJoinRoom(Photon.Realtime.EnterRoomParams opParams)
    // Offset: 0x1C15818
    bool OpJoinRoom(::Photon::Realtime::EnterRoomParams* opParams);
    // public System.Boolean OpJoinRandomRoom(Photon.Realtime.OpJoinRandomRoomParams opJoinRandomRoomParams)
    // Offset: 0x1C15B64
    bool OpJoinRandomRoom(::Photon::Realtime::OpJoinRandomRoomParams* opJoinRandomRoomParams);
    // public System.Boolean OpJoinRandomOrCreateRoom(Photon.Realtime.OpJoinRandomRoomParams opJoinRandomRoomParams, Photon.Realtime.EnterRoomParams createRoomParams)
    // Offset: 0x1C15E94
    bool OpJoinRandomOrCreateRoom(::Photon::Realtime::OpJoinRandomRoomParams* opJoinRandomRoomParams, ::Photon::Realtime::EnterRoomParams* createRoomParams);
    // public System.Boolean OpLeaveRoom(System.Boolean becomeInactive, System.Boolean sendAuthCookie)
    // Offset: 0x1C16244
    bool OpLeaveRoom(bool becomeInactive, bool sendAuthCookie);
    // public System.Boolean OpGetGameList(Photon.Realtime.TypedLobby lobby, System.String queryData)
    // Offset: 0x1C16390
    bool OpGetGameList(::Photon::Realtime::TypedLobby* lobby, ::StringW queryData);
    // public System.Boolean OpFindFriends(System.String[] friendsToFind, Photon.Realtime.FindFriendsOptions options)
    // Offset: 0x1C16744
    bool OpFindFriends(::ArrayW<::StringW> friendsToFind, ::Photon::Realtime::FindFriendsOptions* options);
    // public System.Boolean OpSetCustomPropertiesOfActor(System.Int32 actorNr, ExitGames.Client.Photon.Hashtable actorProperties)
    // Offset: 0x1C1689C
    bool OpSetCustomPropertiesOfActor(int actorNr, ::ExitGames::Client::Photon::Hashtable* actorProperties);
    // protected internal System.Boolean OpSetPropertiesOfActor(System.Int32 actorNr, ExitGames.Client.Photon.Hashtable actorProperties, ExitGames.Client.Photon.Hashtable expectedProperties, Photon.Realtime.WebFlags webflags)
    // Offset: 0x1C0EA6C
    bool OpSetPropertiesOfActor(int actorNr, ::ExitGames::Client::Photon::Hashtable* actorProperties, ::ExitGames::Client::Photon::Hashtable* expectedProperties, ::Photon::Realtime::WebFlags* webflags);
    // protected System.Boolean OpSetPropertyOfRoom(System.Byte propCode, System.Object value)
    // Offset: 0x1C16928
    bool OpSetPropertyOfRoom(uint8_t propCode, ::Il2CppObject* value);
    // public System.Boolean OpSetCustomPropertiesOfRoom(ExitGames.Client.Photon.Hashtable gameProperties)
    // Offset: 0x1C169C0
    bool OpSetCustomPropertiesOfRoom(::ExitGames::Client::Photon::Hashtable* gameProperties);
    // protected internal System.Boolean OpSetPropertiesOfRoom(ExitGames.Client.Photon.Hashtable gameProperties, ExitGames.Client.Photon.Hashtable expectedProperties, Photon.Realtime.WebFlags webflags)
    // Offset: 0x1C0F08C
    bool OpSetPropertiesOfRoom(::ExitGames::Client::Photon::Hashtable* gameProperties, ::ExitGames::Client::Photon::Hashtable* expectedProperties, ::Photon::Realtime::WebFlags* webflags);
    // public System.Boolean OpAuthenticate(System.String appId, System.String appVersion, Photon.Realtime.AuthenticationValues authValues, System.String regionCode, System.Boolean getLobbyStatistics)
    // Offset: 0x1C16A44
    bool OpAuthenticate(::StringW appId, ::StringW appVersion, ::Photon::Realtime::AuthenticationValues* authValues, ::StringW regionCode, bool getLobbyStatistics);
    // public System.Boolean OpAuthenticateOnce(System.String appId, System.String appVersion, Photon.Realtime.AuthenticationValues authValues, System.String regionCode, Photon.Realtime.EncryptionMode encryptionMode, ExitGames.Client.Photon.ConnectionProtocol expectedProtocol)
    // Offset: 0x1C16D5C
    bool OpAuthenticateOnce(::StringW appId, ::StringW appVersion, ::Photon::Realtime::AuthenticationValues* authValues, ::StringW regionCode, ::Photon::Realtime::EncryptionMode encryptionMode, ::ExitGames::Client::Photon::ConnectionProtocol expectedProtocol);
    // public System.Boolean OpChangeGroups(System.Byte[] groupsToRemove, System.Byte[] groupsToAdd)
    // Offset: 0x1C1724C
    bool OpChangeGroups(::ArrayW<uint8_t> groupsToRemove, ::ArrayW<uint8_t> groupsToAdd);
    // public System.Boolean OpRaiseEvent(System.Byte eventCode, System.Object customEventContent, Photon.Realtime.RaiseEventOptions raiseEventOptions, ExitGames.Client.Photon.SendOptions sendOptions)
    // Offset: 0x1C173E8
    bool OpRaiseEvent(uint8_t eventCode, ::Il2CppObject* customEventContent, ::Photon::Realtime::RaiseEventOptions* raiseEventOptions, ::ExitGames::Client::Photon::SendOptions sendOptions);
    // public System.Boolean OpSettings(System.Boolean receiveLobbyStats)
    // Offset: 0x1C176DC
    bool OpSettings(bool receiveLobbyStats);
  }; // Photon.Realtime.LoadBalancingPeer
  #pragma pack(pop)
  static check_size<sizeof(LoadBalancingPeer), 280 + sizeof(::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>*)> __Photon_Realtime_LoadBalancingPeerSizeCheck;
  static_assert(sizeof(LoadBalancingPeer) == 0x120);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::get_PingImplementation
// Il2CppName: get_PingImplementation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)()>(&Photon::Realtime::LoadBalancingPeer::get_PingImplementation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "get_PingImplementation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::set_PingImplementation
// Il2CppName: set_PingImplementation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*)>(&Photon::Realtime::LoadBalancingPeer::set_PingImplementation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "set_PingImplementation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::ConfigUnitySockets
// Il2CppName: ConfigUnitySockets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::LoadBalancingPeer::*)()>(&Photon::Realtime::LoadBalancingPeer::ConfigUnitySockets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "ConfigUnitySockets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::OpGetRegions
// Il2CppName: OpGetRegions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::LoadBalancingPeer::*)(::StringW)>(&Photon::Realtime::LoadBalancingPeer::OpGetRegions)> {
  static const MethodInfo* get() {
    static auto* appId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "OpGetRegions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appId});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::OpJoinLobby
// Il2CppName: OpJoinLobby
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::LoadBalancingPeer::*)(::Photon::Realtime::TypedLobby*)>(&Photon::Realtime::LoadBalancingPeer::OpJoinLobby)> {
  static const MethodInfo* get() {
    static auto* lobby = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "TypedLobby")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "OpJoinLobby", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lobby});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::OpLeaveLobby
// Il2CppName: OpLeaveLobby
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::LoadBalancingPeer::*)()>(&Photon::Realtime::LoadBalancingPeer::OpLeaveLobby)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "OpLeaveLobby", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::RoomOptionsToOpParameters
// Il2CppName: RoomOptionsToOpParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::LoadBalancingPeer::*)(::System::Collections::Generic::Dictionary_2<uint8_t, ::Il2CppObject*>*, ::Photon::Realtime::RoomOptions*, bool)>(&Photon::Realtime::LoadBalancingPeer::RoomOptionsToOpParameters)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte"), ::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    static auto* roomOptions = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "RoomOptions")->byval_arg;
    static auto* usePropertiesKey = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "RoomOptionsToOpParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op, roomOptions, usePropertiesKey});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::OpCreateRoom
// Il2CppName: OpCreateRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::LoadBalancingPeer::*)(::Photon::Realtime::EnterRoomParams*)>(&Photon::Realtime::LoadBalancingPeer::OpCreateRoom)> {
  static const MethodInfo* get() {
    static auto* opParams = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "EnterRoomParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "OpCreateRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opParams});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::OpJoinRoom
// Il2CppName: OpJoinRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::LoadBalancingPeer::*)(::Photon::Realtime::EnterRoomParams*)>(&Photon::Realtime::LoadBalancingPeer::OpJoinRoom)> {
  static const MethodInfo* get() {
    static auto* opParams = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "EnterRoomParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "OpJoinRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opParams});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::OpJoinRandomRoom
// Il2CppName: OpJoinRandomRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::LoadBalancingPeer::*)(::Photon::Realtime::OpJoinRandomRoomParams*)>(&Photon::Realtime::LoadBalancingPeer::OpJoinRandomRoom)> {
  static const MethodInfo* get() {
    static auto* opJoinRandomRoomParams = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "OpJoinRandomRoomParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "OpJoinRandomRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opJoinRandomRoomParams});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::OpJoinRandomOrCreateRoom
// Il2CppName: OpJoinRandomOrCreateRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::LoadBalancingPeer::*)(::Photon::Realtime::OpJoinRandomRoomParams*, ::Photon::Realtime::EnterRoomParams*)>(&Photon::Realtime::LoadBalancingPeer::OpJoinRandomOrCreateRoom)> {
  static const MethodInfo* get() {
    static auto* opJoinRandomRoomParams = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "OpJoinRandomRoomParams")->byval_arg;
    static auto* createRoomParams = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "EnterRoomParams")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "OpJoinRandomOrCreateRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{opJoinRandomRoomParams, createRoomParams});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::OpLeaveRoom
// Il2CppName: OpLeaveRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::LoadBalancingPeer::*)(bool, bool)>(&Photon::Realtime::LoadBalancingPeer::OpLeaveRoom)> {
  static const MethodInfo* get() {
    static auto* becomeInactive = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* sendAuthCookie = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "OpLeaveRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{becomeInactive, sendAuthCookie});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::OpGetGameList
// Il2CppName: OpGetGameList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::LoadBalancingPeer::*)(::Photon::Realtime::TypedLobby*, ::StringW)>(&Photon::Realtime::LoadBalancingPeer::OpGetGameList)> {
  static const MethodInfo* get() {
    static auto* lobby = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "TypedLobby")->byval_arg;
    static auto* queryData = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "OpGetGameList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lobby, queryData});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::OpFindFriends
// Il2CppName: OpFindFriends
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::LoadBalancingPeer::*)(::ArrayW<::StringW>, ::Photon::Realtime::FindFriendsOptions*)>(&Photon::Realtime::LoadBalancingPeer::OpFindFriends)> {
  static const MethodInfo* get() {
    static auto* friendsToFind = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* options = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "FindFriendsOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "OpFindFriends", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{friendsToFind, options});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::OpSetCustomPropertiesOfActor
// Il2CppName: OpSetCustomPropertiesOfActor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::LoadBalancingPeer::*)(int, ::ExitGames::Client::Photon::Hashtable*)>(&Photon::Realtime::LoadBalancingPeer::OpSetCustomPropertiesOfActor)> {
  static const MethodInfo* get() {
    static auto* actorNr = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* actorProperties = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "Hashtable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "OpSetCustomPropertiesOfActor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{actorNr, actorProperties});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::OpSetPropertiesOfActor
// Il2CppName: OpSetPropertiesOfActor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::LoadBalancingPeer::*)(int, ::ExitGames::Client::Photon::Hashtable*, ::ExitGames::Client::Photon::Hashtable*, ::Photon::Realtime::WebFlags*)>(&Photon::Realtime::LoadBalancingPeer::OpSetPropertiesOfActor)> {
  static const MethodInfo* get() {
    static auto* actorNr = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* actorProperties = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "Hashtable")->byval_arg;
    static auto* expectedProperties = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "Hashtable")->byval_arg;
    static auto* webflags = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "WebFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "OpSetPropertiesOfActor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{actorNr, actorProperties, expectedProperties, webflags});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::OpSetPropertyOfRoom
// Il2CppName: OpSetPropertyOfRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::LoadBalancingPeer::*)(uint8_t, ::Il2CppObject*)>(&Photon::Realtime::LoadBalancingPeer::OpSetPropertyOfRoom)> {
  static const MethodInfo* get() {
    static auto* propCode = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "OpSetPropertyOfRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propCode, value});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::OpSetCustomPropertiesOfRoom
// Il2CppName: OpSetCustomPropertiesOfRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::LoadBalancingPeer::*)(::ExitGames::Client::Photon::Hashtable*)>(&Photon::Realtime::LoadBalancingPeer::OpSetCustomPropertiesOfRoom)> {
  static const MethodInfo* get() {
    static auto* gameProperties = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "Hashtable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "OpSetCustomPropertiesOfRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameProperties});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::OpSetPropertiesOfRoom
// Il2CppName: OpSetPropertiesOfRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::LoadBalancingPeer::*)(::ExitGames::Client::Photon::Hashtable*, ::ExitGames::Client::Photon::Hashtable*, ::Photon::Realtime::WebFlags*)>(&Photon::Realtime::LoadBalancingPeer::OpSetPropertiesOfRoom)> {
  static const MethodInfo* get() {
    static auto* gameProperties = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "Hashtable")->byval_arg;
    static auto* expectedProperties = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "Hashtable")->byval_arg;
    static auto* webflags = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "WebFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "OpSetPropertiesOfRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameProperties, expectedProperties, webflags});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::OpAuthenticate
// Il2CppName: OpAuthenticate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::LoadBalancingPeer::*)(::StringW, ::StringW, ::Photon::Realtime::AuthenticationValues*, ::StringW, bool)>(&Photon::Realtime::LoadBalancingPeer::OpAuthenticate)> {
  static const MethodInfo* get() {
    static auto* appId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* appVersion = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* authValues = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "AuthenticationValues")->byval_arg;
    static auto* regionCode = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* getLobbyStatistics = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "OpAuthenticate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appId, appVersion, authValues, regionCode, getLobbyStatistics});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::OpAuthenticateOnce
// Il2CppName: OpAuthenticateOnce
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::LoadBalancingPeer::*)(::StringW, ::StringW, ::Photon::Realtime::AuthenticationValues*, ::StringW, ::Photon::Realtime::EncryptionMode, ::ExitGames::Client::Photon::ConnectionProtocol)>(&Photon::Realtime::LoadBalancingPeer::OpAuthenticateOnce)> {
  static const MethodInfo* get() {
    static auto* appId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* appVersion = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* authValues = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "AuthenticationValues")->byval_arg;
    static auto* regionCode = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* encryptionMode = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "EncryptionMode")->byval_arg;
    static auto* expectedProtocol = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "ConnectionProtocol")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "OpAuthenticateOnce", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appId, appVersion, authValues, regionCode, encryptionMode, expectedProtocol});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::OpChangeGroups
// Il2CppName: OpChangeGroups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::LoadBalancingPeer::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Photon::Realtime::LoadBalancingPeer::OpChangeGroups)> {
  static const MethodInfo* get() {
    static auto* groupsToRemove = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* groupsToAdd = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "OpChangeGroups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{groupsToRemove, groupsToAdd});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::OpRaiseEvent
// Il2CppName: OpRaiseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::LoadBalancingPeer::*)(uint8_t, ::Il2CppObject*, ::Photon::Realtime::RaiseEventOptions*, ::ExitGames::Client::Photon::SendOptions)>(&Photon::Realtime::LoadBalancingPeer::OpRaiseEvent)> {
  static const MethodInfo* get() {
    static auto* eventCode = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* customEventContent = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* raiseEventOptions = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "RaiseEventOptions")->byval_arg;
    static auto* sendOptions = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "SendOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "OpRaiseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventCode, customEventContent, raiseEventOptions, sendOptions});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingPeer::OpSettings
// Il2CppName: OpSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::LoadBalancingPeer::*)(bool)>(&Photon::Realtime::LoadBalancingPeer::OpSettings)> {
  static const MethodInfo* get() {
    static auto* receiveLobbyStats = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::LoadBalancingPeer*), "OpSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiveLobbyStats});
  }
};
