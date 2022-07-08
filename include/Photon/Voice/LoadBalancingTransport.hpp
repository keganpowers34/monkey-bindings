// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Realtime.LoadBalancingClient
#include "Photon/Realtime/LoadBalancingClient.hpp"
// Including type: Photon.Voice.IVoiceTransport
#include "Photon/Voice/IVoiceTransport.hpp"
// Including type: Photon.Voice.ILogger
#include "Photon/Voice/ILogger.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Voice
namespace Photon::Voice {
  // Forward declaring type: VoiceClient
  class VoiceClient;
  // Forward declaring type: PhotonTransportProtocol
  class PhotonTransportProtocol;
  // Forward declaring type: Codec
  struct Codec;
  // Forward declaring type: LocalVoice
  class LocalVoice;
  // Forward declaring type: FrameFlags
  struct FrameFlags;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ArraySegment`1<T>
  template<typename T>
  struct ArraySegment_1;
}
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: EventData
  class EventData;
}
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Skipping declaration: ClientState because it is already included!
}
// Completed forward declares
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: LoadBalancingTransport
  class LoadBalancingTransport;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::LoadBalancingTransport);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::LoadBalancingTransport*, "Photon.Voice", "LoadBalancingTransport");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Photon.Voice.LoadBalancingTransport
  // [TokenAttribute] Offset: FFFFFFFF
  class LoadBalancingTransport : public ::Photon::Realtime::LoadBalancingClient/*, public ::Photon::Voice::IVoiceTransport, public ::Photon::Voice::ILogger, public ::System::IDisposable*/ {
    public:
    // Nested type: ::Photon::Voice::LoadBalancingTransport::$$c
    class $$c;
    public:
    // protected Photon.Voice.VoiceClient voiceClient
    // Size: 0x8
    // Offset: 0x180
    ::Photon::Voice::VoiceClient* voiceClient;
    // Field size check
    static_assert(sizeof(::Photon::Voice::VoiceClient*) == 0x8);
    // private Photon.Voice.PhotonTransportProtocol protocol
    // Size: 0x8
    // Offset: 0x188
    ::Photon::Voice::PhotonTransportProtocol* protocol;
    // Field size check
    static_assert(sizeof(::Photon::Voice::PhotonTransportProtocol*) == 0x8);
    // private System.Object sendLock
    // Size: 0x8
    // Offset: 0x190
    ::Il2CppObject* sendLock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Photon::Voice::IVoiceTransport
    operator ::Photon::Voice::IVoiceTransport() noexcept {
      return *reinterpret_cast<::Photon::Voice::IVoiceTransport*>(this);
    }
    // Creating interface conversion operator: operator ::Photon::Voice::ILogger
    operator ::Photon::Voice::ILogger() noexcept {
      return *reinterpret_cast<::Photon::Voice::ILogger*>(this);
    }
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // static field const value: static System.Int32 VOICE_CHANNEL
    static constexpr const int VOICE_CHANNEL = 0;
    // Get static field: static System.Int32 VOICE_CHANNEL
    static int _get_VOICE_CHANNEL();
    // Set static field: static System.Int32 VOICE_CHANNEL
    static void _set_VOICE_CHANNEL(int value);
    // Get instance field reference: protected Photon.Voice.VoiceClient voiceClient
    [[deprecated("Use field access instead!")]] ::Photon::Voice::VoiceClient*& dyn_voiceClient();
    // Get instance field reference: private Photon.Voice.PhotonTransportProtocol protocol
    [[deprecated("Use field access instead!")]] ::Photon::Voice::PhotonTransportProtocol*& dyn_protocol();
    // Get instance field reference: private System.Object sendLock
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_sendLock();
    // public Photon.Voice.VoiceClient get_VoiceClient()
    // Offset: 0x10D055C
    ::Photon::Voice::VoiceClient* get_VoiceClient();
    // public System.Void LogError(System.String fmt, params System.Object[] args)
    // Offset: 0x10D0564
    void LogError(::StringW fmt, ::ArrayW<::Il2CppObject*> args);
    // public System.Void LogWarning(System.String fmt, params System.Object[] args)
    // Offset: 0x10D05A8
    void LogWarning(::StringW fmt, ::ArrayW<::Il2CppObject*> args);
    // public System.Void LogInfo(System.String fmt, params System.Object[] args)
    // Offset: 0x10D05EC
    void LogInfo(::StringW fmt, ::ArrayW<::Il2CppObject*> args);
    // public System.Void LogDebug(System.String fmt, params System.Object[] args)
    // Offset: 0x10D0630
    void LogDebug(::StringW fmt, ::ArrayW<::Il2CppObject*> args);
    // System.Byte photonChannelForCodec(Photon.Voice.Codec c)
    // Offset: 0x10D0674
    uint8_t photonChannelForCodec(::Photon::Voice::Codec c);
    // public System.Boolean IsChannelJoined(System.Int32 channelId)
    // Offset: 0x10D0758
    bool IsChannelJoined(int channelId);
    // public System.Void .ctor(Photon.Voice.ILogger logger, ExitGames.Client.Photon.ConnectionProtocol connectionProtocol)
    // Offset: 0x10D0768
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoadBalancingTransport* New_ctor(::Photon::Voice::ILogger* logger, ::ExitGames::Client::Photon::ConnectionProtocol connectionProtocol) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::LoadBalancingTransport::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoadBalancingTransport*, creationType>(logger, connectionProtocol)));
    }
    // public System.Void Service()
    // Offset: 0x10D0B08
    void Service();
    // public System.Boolean ChangeAudioGroups(System.Byte[] groupsToRemove, System.Byte[] groupsToAdd)
    // Offset: 0x10D0C3C
    bool ChangeAudioGroups(::ArrayW<uint8_t> groupsToRemove, ::ArrayW<uint8_t> groupsToAdd);
    // public System.Byte get_GlobalAudioGroup()
    // Offset: 0x10D0C60
    uint8_t get_GlobalAudioGroup();
    // public System.Void set_GlobalAudioGroup(System.Byte value)
    // Offset: 0x10D0C98
    void set_GlobalAudioGroup(uint8_t value);
    // public System.Byte get_GlobalInterestGroup()
    // Offset: 0x10D0C7C
    uint8_t get_GlobalInterestGroup();
    // public System.Void set_GlobalInterestGroup(System.Byte value)
    // Offset: 0x10D0C9C
    void set_GlobalInterestGroup(uint8_t value);
    // public System.Void SendVoicesInfo(System.Collections.Generic.IEnumerable`1<Photon.Voice.LocalVoice> voices, System.Int32 channelId, System.Int32 targetPlayerId)
    // Offset: 0x10D0EC4
    void SendVoicesInfo(::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>* voices, int channelId, int targetPlayerId);
    // public System.Void SendVoiceRemove(Photon.Voice.LocalVoice voice, System.Int32 channelId, System.Int32 targetPlayerId)
    // Offset: 0x10D1EF0
    void SendVoiceRemove(::Photon::Voice::LocalVoice* voice, int channelId, int targetPlayerId);
    // public System.Void SendFrame(System.ArraySegment`1<System.Byte> data, Photon.Voice.FrameFlags flags, System.Byte evNumber, System.Byte voiceId, System.Int32 channelId, System.Int32 targetPlayerId, System.Boolean reliable, Photon.Voice.LocalVoice localVoice)
    // Offset: 0x10D2360
    void SendFrame(::System::ArraySegment_1<uint8_t> data, ::Photon::Voice::FrameFlags flags, uint8_t evNumber, uint8_t voiceId, int channelId, int targetPlayerId, bool reliable, ::Photon::Voice::LocalVoice* localVoice);
    // public System.String ChannelIdStr(System.Int32 channelId)
    // Offset: 0x10D2748
    ::StringW ChannelIdStr(int channelId);
    // public System.String PlayerIdStr(System.Int32 playerId)
    // Offset: 0x10D2750
    ::StringW PlayerIdStr(int playerId);
    // protected System.Void onEventActionVoiceClient(ExitGames.Client.Photon.EventData ev)
    // Offset: 0x10D2758
    void onEventActionVoiceClient(::ExitGames::Client::Photon::EventData* ev);
    // private System.Void onStateChangeVoiceClient(Photon.Realtime.ClientState fromState, Photon.Realtime.ClientState state)
    // Offset: 0x10D2CF0
    void onStateChangeVoiceClient(::Photon::Realtime::ClientState fromState, ::Photon::Realtime::ClientState state);
    // public System.Void Dispose()
    // Offset: 0x10D2E14
    void Dispose();
  }; // Photon.Voice.LoadBalancingTransport
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::get_VoiceClient
// Il2CppName: get_VoiceClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Photon::Voice::VoiceClient* (Photon::Voice::LoadBalancingTransport::*)()>(&Photon::Voice::LoadBalancingTransport::get_VoiceClient)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LoadBalancingTransport*), "get_VoiceClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::LogError
// Il2CppName: LogError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LoadBalancingTransport::*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&Photon::Voice::LoadBalancingTransport::LogError)> {
  static const MethodInfo* get() {
    static auto* fmt = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LoadBalancingTransport*), "LogError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fmt, args});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::LogWarning
// Il2CppName: LogWarning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LoadBalancingTransport::*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&Photon::Voice::LoadBalancingTransport::LogWarning)> {
  static const MethodInfo* get() {
    static auto* fmt = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LoadBalancingTransport*), "LogWarning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fmt, args});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::LogInfo
// Il2CppName: LogInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LoadBalancingTransport::*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&Photon::Voice::LoadBalancingTransport::LogInfo)> {
  static const MethodInfo* get() {
    static auto* fmt = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LoadBalancingTransport*), "LogInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fmt, args});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::LogDebug
// Il2CppName: LogDebug
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LoadBalancingTransport::*)(::StringW, ::ArrayW<::Il2CppObject*>)>(&Photon::Voice::LoadBalancingTransport::LogDebug)> {
  static const MethodInfo* get() {
    static auto* fmt = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LoadBalancingTransport*), "LogDebug", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fmt, args});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::photonChannelForCodec
// Il2CppName: photonChannelForCodec
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Photon::Voice::LoadBalancingTransport::*)(::Photon::Voice::Codec)>(&Photon::Voice::LoadBalancingTransport::photonChannelForCodec)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("Photon.Voice", "Codec")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LoadBalancingTransport*), "photonChannelForCodec", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::IsChannelJoined
// Il2CppName: IsChannelJoined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::LoadBalancingTransport::*)(int)>(&Photon::Voice::LoadBalancingTransport::IsChannelJoined)> {
  static const MethodInfo* get() {
    static auto* channelId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LoadBalancingTransport*), "IsChannelJoined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channelId});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::Service
// Il2CppName: Service
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LoadBalancingTransport::*)()>(&Photon::Voice::LoadBalancingTransport::Service)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LoadBalancingTransport*), "Service", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::ChangeAudioGroups
// Il2CppName: ChangeAudioGroups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::LoadBalancingTransport::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Photon::Voice::LoadBalancingTransport::ChangeAudioGroups)> {
  static const MethodInfo* get() {
    static auto* groupsToRemove = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* groupsToAdd = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LoadBalancingTransport*), "ChangeAudioGroups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{groupsToRemove, groupsToAdd});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::get_GlobalAudioGroup
// Il2CppName: get_GlobalAudioGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Photon::Voice::LoadBalancingTransport::*)()>(&Photon::Voice::LoadBalancingTransport::get_GlobalAudioGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LoadBalancingTransport*), "get_GlobalAudioGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::set_GlobalAudioGroup
// Il2CppName: set_GlobalAudioGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LoadBalancingTransport::*)(uint8_t)>(&Photon::Voice::LoadBalancingTransport::set_GlobalAudioGroup)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LoadBalancingTransport*), "set_GlobalAudioGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::get_GlobalInterestGroup
// Il2CppName: get_GlobalInterestGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Photon::Voice::LoadBalancingTransport::*)()>(&Photon::Voice::LoadBalancingTransport::get_GlobalInterestGroup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LoadBalancingTransport*), "get_GlobalInterestGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::set_GlobalInterestGroup
// Il2CppName: set_GlobalInterestGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LoadBalancingTransport::*)(uint8_t)>(&Photon::Voice::LoadBalancingTransport::set_GlobalInterestGroup)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LoadBalancingTransport*), "set_GlobalInterestGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::SendVoicesInfo
// Il2CppName: SendVoicesInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LoadBalancingTransport::*)(::System::Collections::Generic::IEnumerable_1<::Photon::Voice::LocalVoice*>*, int, int)>(&Photon::Voice::LoadBalancingTransport::SendVoicesInfo)> {
  static const MethodInfo* get() {
    static auto* voices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Photon.Voice", "LocalVoice")})->byval_arg;
    static auto* channelId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* targetPlayerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LoadBalancingTransport*), "SendVoicesInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{voices, channelId, targetPlayerId});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::SendVoiceRemove
// Il2CppName: SendVoiceRemove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LoadBalancingTransport::*)(::Photon::Voice::LocalVoice*, int, int)>(&Photon::Voice::LoadBalancingTransport::SendVoiceRemove)> {
  static const MethodInfo* get() {
    static auto* voice = &::il2cpp_utils::GetClassFromName("Photon.Voice", "LocalVoice")->byval_arg;
    static auto* channelId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* targetPlayerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LoadBalancingTransport*), "SendVoiceRemove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{voice, channelId, targetPlayerId});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::SendFrame
// Il2CppName: SendFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LoadBalancingTransport::*)(::System::ArraySegment_1<uint8_t>, ::Photon::Voice::FrameFlags, uint8_t, uint8_t, int, int, bool, ::Photon::Voice::LocalVoice*)>(&Photon::Voice::LoadBalancingTransport::SendFrame)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ArraySegment`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("Photon.Voice", "FrameFlags")->byval_arg;
    static auto* evNumber = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* voiceId = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* channelId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* targetPlayerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* reliable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* localVoice = &::il2cpp_utils::GetClassFromName("Photon.Voice", "LocalVoice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LoadBalancingTransport*), "SendFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, flags, evNumber, voiceId, channelId, targetPlayerId, reliable, localVoice});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::ChannelIdStr
// Il2CppName: ChannelIdStr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Voice::LoadBalancingTransport::*)(int)>(&Photon::Voice::LoadBalancingTransport::ChannelIdStr)> {
  static const MethodInfo* get() {
    static auto* channelId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LoadBalancingTransport*), "ChannelIdStr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{channelId});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::PlayerIdStr
// Il2CppName: PlayerIdStr
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Voice::LoadBalancingTransport::*)(int)>(&Photon::Voice::LoadBalancingTransport::PlayerIdStr)> {
  static const MethodInfo* get() {
    static auto* playerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LoadBalancingTransport*), "PlayerIdStr", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playerId});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::onEventActionVoiceClient
// Il2CppName: onEventActionVoiceClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LoadBalancingTransport::*)(::ExitGames::Client::Photon::EventData*)>(&Photon::Voice::LoadBalancingTransport::onEventActionVoiceClient)> {
  static const MethodInfo* get() {
    static auto* ev = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "EventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LoadBalancingTransport*), "onEventActionVoiceClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ev});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::onStateChangeVoiceClient
// Il2CppName: onStateChangeVoiceClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LoadBalancingTransport::*)(::Photon::Realtime::ClientState, ::Photon::Realtime::ClientState)>(&Photon::Voice::LoadBalancingTransport::onStateChangeVoiceClient)> {
  static const MethodInfo* get() {
    static auto* fromState = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "ClientState")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "ClientState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LoadBalancingTransport*), "onStateChangeVoiceClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromState, state});
  }
};
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingTransport::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::LoadBalancingTransport::*)()>(&Photon::Voice::LoadBalancingTransport::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::LoadBalancingTransport*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
