// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.Public.IScreenTimeTracker
#include "PlayFab/Public/IScreenTimeTracker.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: PlayFab::EventsModels
namespace PlayFab::EventsModels {
  // Forward declaring type: EventContents
  class EventContents;
  // Forward declaring type: EntityKey
  class EntityKey;
  // Forward declaring type: WriteEventsResponse
  class WriteEventsResponse;
}
// Forward declaring namespace: PlayFab
namespace PlayFab {
  // Forward declaring type: PlayFabEventsInstanceAPI
  class PlayFabEventsInstanceAPI;
  // Forward declaring type: PlayFabError
  class PlayFabError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: PlayFab.Public
namespace PlayFab::Public {
  // Forward declaring type: ScreenTimeTracker
  class ScreenTimeTracker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::Public::ScreenTimeTracker);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::Public::ScreenTimeTracker*, "PlayFab.Public", "ScreenTimeTracker");
// Type namespace: PlayFab.Public
namespace PlayFab::Public {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.Public.ScreenTimeTracker
  // [TokenAttribute] Offset: FFFFFFFF
  class ScreenTimeTracker : public ::Il2CppObject/*, public ::PlayFab::Public::IScreenTimeTracker*/ {
    public:
    public:
    // private System.Guid focusId
    // Size: 0x10
    // Offset: 0x10
    ::System::Guid focusId;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    // private System.Guid gameSessionID
    // Size: 0x10
    // Offset: 0x20
    ::System::Guid gameSessionID;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    // private System.Boolean initialFocus
    // Size: 0x1
    // Offset: 0x30
    bool initialFocus;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean isSending
    // Size: 0x1
    // Offset: 0x31
    bool isSending;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isSending and: focusOffDateTime
    char __padding3[0x6] = {};
    // private System.DateTime focusOffDateTime
    // Size: 0x8
    // Offset: 0x38
    ::System::DateTime focusOffDateTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private System.DateTime focusOnDateTime
    // Size: 0x8
    // Offset: 0x40
    ::System::DateTime focusOnDateTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private System.Collections.Generic.Queue`1<PlayFab.EventsModels.EventContents> eventsRequests
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::Queue_1<::PlayFab::EventsModels::EventContents*>* eventsRequests;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::PlayFab::EventsModels::EventContents*>*) == 0x8);
    // private PlayFab.EventsModels.EntityKey entityKey
    // Size: 0x8
    // Offset: 0x50
    ::PlayFab::EventsModels::EntityKey* entityKey;
    // Field size check
    static_assert(sizeof(::PlayFab::EventsModels::EntityKey*) == 0x8);
    // private PlayFab.PlayFabEventsInstanceAPI eventApi
    // Size: 0x8
    // Offset: 0x58
    ::PlayFab::PlayFabEventsInstanceAPI* eventApi;
    // Field size check
    static_assert(sizeof(::PlayFab::PlayFabEventsInstanceAPI*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::PlayFab::Public::IScreenTimeTracker
    operator ::PlayFab::Public::IScreenTimeTracker() noexcept {
      return *reinterpret_cast<::PlayFab::Public::IScreenTimeTracker*>(this);
    }
    // static field const value: static private System.String eventNamespace
    static constexpr const char* eventNamespace = "com.playfab.events.sessions";
    // Get static field: static private System.String eventNamespace
    static ::StringW _get_eventNamespace();
    // Set static field: static private System.String eventNamespace
    static void _set_eventNamespace(::StringW value);
    // static field const value: static private System.Int32 maxBatchSizeInEvents
    static constexpr const int maxBatchSizeInEvents = 10;
    // Get static field: static private System.Int32 maxBatchSizeInEvents
    static int _get_maxBatchSizeInEvents();
    // Set static field: static private System.Int32 maxBatchSizeInEvents
    static void _set_maxBatchSizeInEvents(int value);
    // Get instance field reference: private System.Guid focusId
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_focusId();
    // Get instance field reference: private System.Guid gameSessionID
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_gameSessionID();
    // Get instance field reference: private System.Boolean initialFocus
    [[deprecated("Use field access instead!")]] bool& dyn_initialFocus();
    // Get instance field reference: private System.Boolean isSending
    [[deprecated("Use field access instead!")]] bool& dyn_isSending();
    // Get instance field reference: private System.DateTime focusOffDateTime
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_focusOffDateTime();
    // Get instance field reference: private System.DateTime focusOnDateTime
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_focusOnDateTime();
    // Get instance field reference: private System.Collections.Generic.Queue`1<PlayFab.EventsModels.EventContents> eventsRequests
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<::PlayFab::EventsModels::EventContents*>*& dyn_eventsRequests();
    // Get instance field reference: private PlayFab.EventsModels.EntityKey entityKey
    [[deprecated("Use field access instead!")]] ::PlayFab::EventsModels::EntityKey*& dyn_entityKey();
    // Get instance field reference: private PlayFab.PlayFabEventsInstanceAPI eventApi
    [[deprecated("Use field access instead!")]] ::PlayFab::PlayFabEventsInstanceAPI*& dyn_eventApi();
    // public System.Void .ctor()
    // Offset: 0x199F82C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScreenTimeTracker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Public::ScreenTimeTracker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScreenTimeTracker*, creationType>()));
    }
    // public System.Void ClientSessionStart(System.String entityId, System.String entityType, System.String playFabUserId)
    // Offset: 0x199F958
    void ClientSessionStart(::StringW entityId, ::StringW entityType, ::StringW playFabUserId);
    // public System.Void OnApplicationFocus(System.Boolean isFocused)
    // Offset: 0x199FBC8
    void OnApplicationFocus(bool isFocused);
    // public System.Void Send()
    // Offset: 0x199FF5C
    void Send();
    // private System.Void EventSentSuccessfulCallback(PlayFab.EventsModels.WriteEventsResponse response)
    // Offset: 0x19A014C
    void EventSentSuccessfulCallback(::PlayFab::EventsModels::WriteEventsResponse* response);
    // private System.Void EventSentErrorCallback(PlayFab.PlayFabError response)
    // Offset: 0x19A0150
    void EventSentErrorCallback(::PlayFab::PlayFabError* response);
    // public System.Void OnEnable()
    // Offset: 0x19A01F0
    void OnEnable();
    // public System.Void OnDisable()
    // Offset: 0x19A01F4
    void OnDisable();
    // public System.Void OnDestroy()
    // Offset: 0x19A01F8
    void OnDestroy();
    // public System.Void OnApplicationQuit()
    // Offset: 0x19A01FC
    void OnApplicationQuit();
  }; // PlayFab.Public.ScreenTimeTracker
  #pragma pack(pop)
  static check_size<sizeof(ScreenTimeTracker), 88 + sizeof(::PlayFab::PlayFabEventsInstanceAPI*)> __PlayFab_Public_ScreenTimeTrackerSizeCheck;
  static_assert(sizeof(ScreenTimeTracker) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::Public::ScreenTimeTracker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PlayFab::Public::ScreenTimeTracker::ClientSessionStart
// Il2CppName: ClientSessionStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::ScreenTimeTracker::*)(::StringW, ::StringW, ::StringW)>(&PlayFab::Public::ScreenTimeTracker::ClientSessionStart)> {
  static const MethodInfo* get() {
    static auto* entityId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* entityType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* playFabUserId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::ScreenTimeTracker*), "ClientSessionStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entityId, entityType, playFabUserId});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::ScreenTimeTracker::OnApplicationFocus
// Il2CppName: OnApplicationFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::ScreenTimeTracker::*)(bool)>(&PlayFab::Public::ScreenTimeTracker::OnApplicationFocus)> {
  static const MethodInfo* get() {
    static auto* isFocused = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::ScreenTimeTracker*), "OnApplicationFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isFocused});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::ScreenTimeTracker::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::ScreenTimeTracker::*)()>(&PlayFab::Public::ScreenTimeTracker::Send)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::ScreenTimeTracker*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::ScreenTimeTracker::EventSentSuccessfulCallback
// Il2CppName: EventSentSuccessfulCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::ScreenTimeTracker::*)(::PlayFab::EventsModels::WriteEventsResponse*)>(&PlayFab::Public::ScreenTimeTracker::EventSentSuccessfulCallback)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("PlayFab.EventsModels", "WriteEventsResponse")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::ScreenTimeTracker*), "EventSentSuccessfulCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::ScreenTimeTracker::EventSentErrorCallback
// Il2CppName: EventSentErrorCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::ScreenTimeTracker::*)(::PlayFab::PlayFabError*)>(&PlayFab::Public::ScreenTimeTracker::EventSentErrorCallback)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("PlayFab", "PlayFabError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::ScreenTimeTracker*), "EventSentErrorCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::ScreenTimeTracker::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::ScreenTimeTracker::*)()>(&PlayFab::Public::ScreenTimeTracker::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::ScreenTimeTracker*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::ScreenTimeTracker::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::ScreenTimeTracker::*)()>(&PlayFab::Public::ScreenTimeTracker::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::ScreenTimeTracker*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::ScreenTimeTracker::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::ScreenTimeTracker::*)()>(&PlayFab::Public::ScreenTimeTracker::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::ScreenTimeTracker*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Public::ScreenTimeTracker::OnApplicationQuit
// Il2CppName: OnApplicationQuit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Public::ScreenTimeTracker::*)()>(&PlayFab::Public::ScreenTimeTracker::OnApplicationQuit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Public::ScreenTimeTracker*), "OnApplicationQuit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
