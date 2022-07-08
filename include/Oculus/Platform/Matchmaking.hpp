// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request
  class Request;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: MatchmakingStatApproach
  struct MatchmakingStatApproach;
  // Forward declaring type: MatchmakingOptions
  class MatchmakingOptions;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: MatchmakingStats
  class MatchmakingStats;
  // Forward declaring type: MatchmakingBrowseResult
  class MatchmakingBrowseResult;
  // Forward declaring type: MatchmakingEnqueueResultAndRoom
  class MatchmakingEnqueueResultAndRoom;
  // Forward declaring type: Room
  class Room;
  // Forward declaring type: MatchmakingEnqueueResult
  class MatchmakingEnqueueResult;
  // Forward declaring type: MatchmakingAdminSnapshot
  class MatchmakingAdminSnapshot;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: Matchmaking
  class Matchmaking;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Matchmaking);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Matchmaking*, "Oculus.Platform", "Matchmaking");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Matchmaking
  // [TokenAttribute] Offset: FFFFFFFF
  class Matchmaking : public ::Il2CppObject {
    public:
    // Nested type: ::Oculus::Platform::Matchmaking::CustomQuery
    class CustomQuery;
    // static public Oculus.Platform.Request ReportResultsInsecure(System.UInt64 roomID, System.Collections.Generic.Dictionary`2<System.String,System.Int32> data)
    // Offset: 0xEC10B0
    static ::Oculus::Platform::Request* ReportResultsInsecure(uint64_t roomID, ::System::Collections::Generic::Dictionary_2<::StringW, int>* data);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingStats> GetStats(System.String pool, System.UInt32 maxLevel, Oculus.Platform.MatchmakingStatApproach approach)
    // Offset: 0xEC130C
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingStats*>* GetStats(::StringW pool, uint maxLevel, ::Oculus::Platform::MatchmakingStatApproach approach);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingBrowseResult> Browse(System.String pool, Oculus.Platform.Matchmaking/CustomQuery customQueryData)
    // Offset: 0xEC1440
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingBrowseResult*>* Browse(::StringW pool, ::Oculus::Platform::Matchmaking::CustomQuery* customQueryData);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingBrowseResult> Browse2(System.String pool, Oculus.Platform.MatchmakingOptions matchmakingOptions)
    // Offset: 0xEC18AC
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingBrowseResult*>* Browse2(::StringW pool, ::Oculus::Platform::MatchmakingOptions* matchmakingOptions);
    // static public Oculus.Platform.Request Cancel(System.String pool, System.String requestHash)
    // Offset: 0xEC1A4C
    static ::Oculus::Platform::Request* Cancel(::StringW pool, ::StringW requestHash);
    // static public Oculus.Platform.Request Cancel()
    // Offset: 0xEC1B68
    static ::Oculus::Platform::Request* Cancel();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom> CreateAndEnqueueRoom(System.String pool, System.UInt32 maxUsers, System.Boolean subscribeToUpdates, Oculus.Platform.Matchmaking/CustomQuery customQueryData)
    // Offset: 0xEC1C6C
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*>* CreateAndEnqueueRoom(::StringW pool, uint maxUsers, bool subscribeToUpdates, ::Oculus::Platform::Matchmaking::CustomQuery* customQueryData);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom> CreateAndEnqueueRoom2(System.String pool, Oculus.Platform.MatchmakingOptions matchmakingOptions)
    // Offset: 0xEC1DB8
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*>* CreateAndEnqueueRoom2(::StringW pool, ::Oculus::Platform::MatchmakingOptions* matchmakingOptions);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Room> CreateRoom(System.String pool, System.UInt32 maxUsers, System.Boolean subscribeToUpdates)
    // Offset: 0xEC1F08
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* CreateRoom(::StringW pool, uint maxUsers, bool subscribeToUpdates);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Room> CreateRoom2(System.String pool, Oculus.Platform.MatchmakingOptions matchmakingOptions)
    // Offset: 0xEC203C
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* CreateRoom2(::StringW pool, ::Oculus::Platform::MatchmakingOptions* matchmakingOptions);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResult> Enqueue(System.String pool, Oculus.Platform.Matchmaking/CustomQuery customQueryData)
    // Offset: 0xEC218C
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>* Enqueue(::StringW pool, ::Oculus::Platform::Matchmaking::CustomQuery* customQueryData);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResult> Enqueue2(System.String pool, Oculus.Platform.MatchmakingOptions matchmakingOptions)
    // Offset: 0xEC22C0
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>* Enqueue2(::StringW pool, ::Oculus::Platform::MatchmakingOptions* matchmakingOptions);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResult> EnqueueRoom(System.UInt64 roomID, Oculus.Platform.Matchmaking/CustomQuery customQueryData)
    // Offset: 0xEC2410
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>* EnqueueRoom(uint64_t roomID, ::Oculus::Platform::Matchmaking::CustomQuery* customQueryData);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResult> EnqueueRoom2(System.UInt64 roomID, Oculus.Platform.MatchmakingOptions matchmakingOptions)
    // Offset: 0xEC2544
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>* EnqueueRoom2(uint64_t roomID, ::Oculus::Platform::MatchmakingOptions* matchmakingOptions);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingAdminSnapshot> GetAdminSnapshot()
    // Offset: 0xEC2694
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingAdminSnapshot*>* GetAdminSnapshot();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Room> JoinRoom(System.UInt64 roomID, System.Boolean subscribeToUpdates)
    // Offset: 0xEC27A0
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* JoinRoom(uint64_t roomID, bool subscribeToUpdates);
    // static public Oculus.Platform.Request StartMatch(System.UInt64 roomID)
    // Offset: 0xEC28C4
    static ::Oculus::Platform::Request* StartMatch(uint64_t roomID);
    // static public System.Void SetMatchFoundNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.Room> callback)
    // Offset: 0xEC29D8
    static void SetMatchFoundNotificationCallback(typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::Room*>::Callback* callback);
  }; // Oculus.Platform.Matchmaking
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Matchmaking::ReportResultsInsecure
// Il2CppName: ReportResultsInsecure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(uint64_t, ::System::Collections::Generic::Dictionary_2<::StringW, int>*)>(&Oculus::Platform::Matchmaking::ReportResultsInsecure)> {
  static const MethodInfo* get() {
    static auto* roomID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* data = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Matchmaking*), "ReportResultsInsecure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomID, data});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Matchmaking::GetStats
// Il2CppName: GetStats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingStats*>* (*)(::StringW, uint, ::Oculus::Platform::MatchmakingStatApproach)>(&Oculus::Platform::Matchmaking::GetStats)> {
  static const MethodInfo* get() {
    static auto* pool = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* maxLevel = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* approach = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "MatchmakingStatApproach")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Matchmaking*), "GetStats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pool, maxLevel, approach});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Matchmaking::Browse
// Il2CppName: Browse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingBrowseResult*>* (*)(::StringW, ::Oculus::Platform::Matchmaking::CustomQuery*)>(&Oculus::Platform::Matchmaking::Browse)> {
  static const MethodInfo* get() {
    static auto* pool = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* customQueryData = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Matchmaking/CustomQuery")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Matchmaking*), "Browse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pool, customQueryData});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Matchmaking::Browse2
// Il2CppName: Browse2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingBrowseResult*>* (*)(::StringW, ::Oculus::Platform::MatchmakingOptions*)>(&Oculus::Platform::Matchmaking::Browse2)> {
  static const MethodInfo* get() {
    static auto* pool = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* matchmakingOptions = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "MatchmakingOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Matchmaking*), "Browse2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pool, matchmakingOptions});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Matchmaking::Cancel
// Il2CppName: Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(::StringW, ::StringW)>(&Oculus::Platform::Matchmaking::Cancel)> {
  static const MethodInfo* get() {
    static auto* pool = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* requestHash = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Matchmaking*), "Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pool, requestHash});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Matchmaking::Cancel
// Il2CppName: Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)()>(&Oculus::Platform::Matchmaking::Cancel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Matchmaking*), "Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Matchmaking::CreateAndEnqueueRoom
// Il2CppName: CreateAndEnqueueRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*>* (*)(::StringW, uint, bool, ::Oculus::Platform::Matchmaking::CustomQuery*)>(&Oculus::Platform::Matchmaking::CreateAndEnqueueRoom)> {
  static const MethodInfo* get() {
    static auto* pool = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* maxUsers = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* subscribeToUpdates = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* customQueryData = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Matchmaking/CustomQuery")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Matchmaking*), "CreateAndEnqueueRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pool, maxUsers, subscribeToUpdates, customQueryData});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Matchmaking::CreateAndEnqueueRoom2
// Il2CppName: CreateAndEnqueueRoom2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*>* (*)(::StringW, ::Oculus::Platform::MatchmakingOptions*)>(&Oculus::Platform::Matchmaking::CreateAndEnqueueRoom2)> {
  static const MethodInfo* get() {
    static auto* pool = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* matchmakingOptions = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "MatchmakingOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Matchmaking*), "CreateAndEnqueueRoom2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pool, matchmakingOptions});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Matchmaking::CreateRoom
// Il2CppName: CreateRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(::StringW, uint, bool)>(&Oculus::Platform::Matchmaking::CreateRoom)> {
  static const MethodInfo* get() {
    static auto* pool = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* maxUsers = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* subscribeToUpdates = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Matchmaking*), "CreateRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pool, maxUsers, subscribeToUpdates});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Matchmaking::CreateRoom2
// Il2CppName: CreateRoom2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(::StringW, ::Oculus::Platform::MatchmakingOptions*)>(&Oculus::Platform::Matchmaking::CreateRoom2)> {
  static const MethodInfo* get() {
    static auto* pool = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* matchmakingOptions = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "MatchmakingOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Matchmaking*), "CreateRoom2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pool, matchmakingOptions});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Matchmaking::Enqueue
// Il2CppName: Enqueue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>* (*)(::StringW, ::Oculus::Platform::Matchmaking::CustomQuery*)>(&Oculus::Platform::Matchmaking::Enqueue)> {
  static const MethodInfo* get() {
    static auto* pool = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* customQueryData = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Matchmaking/CustomQuery")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Matchmaking*), "Enqueue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pool, customQueryData});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Matchmaking::Enqueue2
// Il2CppName: Enqueue2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>* (*)(::StringW, ::Oculus::Platform::MatchmakingOptions*)>(&Oculus::Platform::Matchmaking::Enqueue2)> {
  static const MethodInfo* get() {
    static auto* pool = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* matchmakingOptions = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "MatchmakingOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Matchmaking*), "Enqueue2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pool, matchmakingOptions});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Matchmaking::EnqueueRoom
// Il2CppName: EnqueueRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>* (*)(uint64_t, ::Oculus::Platform::Matchmaking::CustomQuery*)>(&Oculus::Platform::Matchmaking::EnqueueRoom)> {
  static const MethodInfo* get() {
    static auto* roomID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* customQueryData = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "Matchmaking/CustomQuery")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Matchmaking*), "EnqueueRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomID, customQueryData});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Matchmaking::EnqueueRoom2
// Il2CppName: EnqueueRoom2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingEnqueueResult*>* (*)(uint64_t, ::Oculus::Platform::MatchmakingOptions*)>(&Oculus::Platform::Matchmaking::EnqueueRoom2)> {
  static const MethodInfo* get() {
    static auto* roomID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* matchmakingOptions = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "MatchmakingOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Matchmaking*), "EnqueueRoom2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomID, matchmakingOptions});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Matchmaking::GetAdminSnapshot
// Il2CppName: GetAdminSnapshot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::MatchmakingAdminSnapshot*>* (*)()>(&Oculus::Platform::Matchmaking::GetAdminSnapshot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Matchmaking*), "GetAdminSnapshot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Matchmaking::JoinRoom
// Il2CppName: JoinRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::Room*>* (*)(uint64_t, bool)>(&Oculus::Platform::Matchmaking::JoinRoom)> {
  static const MethodInfo* get() {
    static auto* roomID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* subscribeToUpdates = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Matchmaking*), "JoinRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomID, subscribeToUpdates});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Matchmaking::StartMatch
// Il2CppName: StartMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(uint64_t)>(&Oculus::Platform::Matchmaking::StartMatch)> {
  static const MethodInfo* get() {
    static auto* roomID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Matchmaking*), "StartMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{roomID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Matchmaking::SetMatchFoundNotificationCallback
// Il2CppName: SetMatchFoundNotificationCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
