// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ExitGames.Client.Photon.ConnectionProtocol
#include "ExitGames/Client/Photon/ConnectionProtocol.hpp"
// Including type: ExitGames.Client.Photon.DebugLevel
#include "ExitGames/Client/Photon/DebugLevel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Photon.Chat
namespace Photon::Chat {
  // Forward declaring type: ChatAppSettings
  class ChatAppSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Chat::ChatAppSettings);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Chat::ChatAppSettings*, "Photon.Chat", "ChatAppSettings");
// Type namespace: Photon.Chat
namespace Photon::Chat {
  // Size: 0x35
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Chat.ChatAppSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class ChatAppSettings : public ::Il2CppObject {
    public:
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xAF0744
    // public System.String AppIdChat
    // Size: 0x8
    // Offset: 0x10
    ::StringW AppIdChat;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String AppVersion
    // Size: 0x8
    // Offset: 0x18
    ::StringW AppVersion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String FixedRegion
    // Size: 0x8
    // Offset: 0x20
    ::StringW FixedRegion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Server
    // Size: 0x8
    // Offset: 0x28
    ::StringW Server;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.UInt16 Port
    // Size: 0x2
    // Offset: 0x30
    uint16_t Port;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public ExitGames.Client.Photon.ConnectionProtocol Protocol
    // Size: 0x1
    // Offset: 0x32
    ::ExitGames::Client::Photon::ConnectionProtocol Protocol;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::ConnectionProtocol) == 0x1);
    // public System.Boolean EnableProtocolFallback
    // Size: 0x1
    // Offset: 0x33
    bool EnableProtocolFallback;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public ExitGames.Client.Photon.DebugLevel NetworkLogging
    // Size: 0x1
    // Offset: 0x34
    ::ExitGames::Client::Photon::DebugLevel NetworkLogging;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::DebugLevel) == 0x1);
    public:
    // Get instance field reference: public System.String AppIdChat
    [[deprecated("Use field access instead!")]] ::StringW& dyn_AppIdChat();
    // Get instance field reference: public System.String AppVersion
    [[deprecated("Use field access instead!")]] ::StringW& dyn_AppVersion();
    // Get instance field reference: public System.String FixedRegion
    [[deprecated("Use field access instead!")]] ::StringW& dyn_FixedRegion();
    // Get instance field reference: public System.String Server
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Server();
    // Get instance field reference: public System.UInt16 Port
    [[deprecated("Use field access instead!")]] uint16_t& dyn_Port();
    // Get instance field reference: public ExitGames.Client.Photon.ConnectionProtocol Protocol
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::ConnectionProtocol& dyn_Protocol();
    // Get instance field reference: public System.Boolean EnableProtocolFallback
    [[deprecated("Use field access instead!")]] bool& dyn_EnableProtocolFallback();
    // Get instance field reference: public ExitGames.Client.Photon.DebugLevel NetworkLogging
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::DebugLevel& dyn_NetworkLogging();
    // public System.Boolean get_IsDefaultNameServer()
    // Offset: 0x1B016A0
    bool get_IsDefaultNameServer();
    // public System.String get_AppId()
    // Offset: 0x1B016AC
    ::StringW get_AppId();
    // public System.Void set_AppId(System.String value)
    // Offset: 0x1B016B4
    void set_AppId(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x1B016BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChatAppSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Chat::ChatAppSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChatAppSettings*, creationType>()));
    }
  }; // Photon.Chat.ChatAppSettings
  #pragma pack(pop)
  static check_size<sizeof(ChatAppSettings), 52 + sizeof(::ExitGames::Client::Photon::DebugLevel)> __Photon_Chat_ChatAppSettingsSizeCheck;
  static_assert(sizeof(ChatAppSettings) == 0x35);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Chat::ChatAppSettings::get_IsDefaultNameServer
// Il2CppName: get_IsDefaultNameServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Chat::ChatAppSettings::*)()>(&Photon::Chat::ChatAppSettings::get_IsDefaultNameServer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Chat::ChatAppSettings*), "get_IsDefaultNameServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Chat::ChatAppSettings::get_AppId
// Il2CppName: get_AppId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Chat::ChatAppSettings::*)()>(&Photon::Chat::ChatAppSettings::get_AppId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Chat::ChatAppSettings*), "get_AppId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Chat::ChatAppSettings::set_AppId
// Il2CppName: set_AppId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Chat::ChatAppSettings::*)(::StringW)>(&Photon::Chat::ChatAppSettings::set_AppId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Chat::ChatAppSettings*), "set_AppId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Chat::ChatAppSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
