// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Diagnostics.Tracing.ActivityTracker
#include "System/Diagnostics/Tracing/ActivityTracker.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: System.Diagnostics.Tracing.EventActivityOptions
#include "System/Diagnostics/Tracing/EventActivityOptions.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::ActivityTracker::ActivityInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*, "System.Diagnostics.Tracing", "ActivityTracker/ActivityInfo");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.ActivityTracker/ActivityInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class ActivityTracker::ActivityInfo : public ::Il2CppObject {
    public:
    public:
    // readonly System.String m_name
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Int64 m_uniqueId
    // Size: 0x8
    // Offset: 0x18
    int64_t m_uniqueId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // readonly System.Guid m_guid
    // Size: 0x10
    // Offset: 0x20
    ::System::Guid m_guid;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    // readonly System.Int32 m_activityPathGuidOffset
    // Size: 0x4
    // Offset: 0x30
    int m_activityPathGuidOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // readonly System.Int32 m_level
    // Size: 0x4
    // Offset: 0x34
    int m_level;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // readonly System.Diagnostics.Tracing.EventActivityOptions m_eventOptions
    // Size: 0x4
    // Offset: 0x38
    ::System::Diagnostics::Tracing::EventActivityOptions m_eventOptions;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::EventActivityOptions) == 0x4);
    // Padding between fields: m_eventOptions and: m_lastChildID
    char __padding5[0x4] = {};
    // System.Int64 m_lastChildID
    // Size: 0x8
    // Offset: 0x40
    int64_t m_lastChildID;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Int32 m_stopped
    // Size: 0x4
    // Offset: 0x48
    int m_stopped;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_stopped and: m_creator
    char __padding7[0x4] = {};
    // readonly System.Diagnostics.Tracing.ActivityTracker/ActivityInfo m_creator
    // Size: 0x8
    // Offset: 0x50
    ::System::Diagnostics::Tracing::ActivityTracker::ActivityInfo* m_creator;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*) == 0x8);
    // readonly System.Guid m_activityIdToRestore
    // Size: 0x10
    // Offset: 0x58
    ::System::Guid m_activityIdToRestore;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    public:
    // Get instance field reference: readonly System.String m_name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_name();
    // Get instance field reference: private readonly System.Int64 m_uniqueId
    [[deprecated("Use field access instead!")]] int64_t& dyn_m_uniqueId();
    // Get instance field reference: readonly System.Guid m_guid
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_m_guid();
    // Get instance field reference: readonly System.Int32 m_activityPathGuidOffset
    [[deprecated("Use field access instead!")]] int& dyn_m_activityPathGuidOffset();
    // Get instance field reference: readonly System.Int32 m_level
    [[deprecated("Use field access instead!")]] int& dyn_m_level();
    // Get instance field reference: readonly System.Diagnostics.Tracing.EventActivityOptions m_eventOptions
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::EventActivityOptions& dyn_m_eventOptions();
    // Get instance field reference: System.Int64 m_lastChildID
    [[deprecated("Use field access instead!")]] int64_t& dyn_m_lastChildID();
    // Get instance field reference: System.Int32 m_stopped
    [[deprecated("Use field access instead!")]] int& dyn_m_stopped();
    // Get instance field reference: readonly System.Diagnostics.Tracing.ActivityTracker/ActivityInfo m_creator
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*& dyn_m_creator();
    // Get instance field reference: readonly System.Guid m_activityIdToRestore
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_m_activityIdToRestore();
    // public System.Void .ctor(System.String name, System.Int64 uniqueId, System.Diagnostics.Tracing.ActivityTracker/ActivityInfo creator, System.Guid activityIDToRestore, System.Diagnostics.Tracing.EventActivityOptions options)
    // Offset: 0xCE4C40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActivityTracker::ActivityInfo* New_ctor(::StringW name, int64_t uniqueId, ::System::Diagnostics::Tracing::ActivityTracker::ActivityInfo* creator, ::System::Guid activityIDToRestore, ::System::Diagnostics::Tracing::EventActivityOptions options) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActivityTracker::ActivityInfo*, creationType>(name, uniqueId, creator, activityIDToRestore, options)));
    }
    // public System.Guid get_ActivityId()
    // Offset: 0xCE5134
    ::System::Guid get_ActivityId();
    // static public System.String Path(System.Diagnostics.Tracing.ActivityTracker/ActivityInfo activityInfo)
    // Offset: 0xCE5140
    static ::StringW Path(::System::Diagnostics::Tracing::ActivityTracker::ActivityInfo* activityInfo);
    // static public System.String LiveActivities(System.Diagnostics.Tracing.ActivityTracker/ActivityInfo list)
    // Offset: 0xCE4860
    static ::StringW LiveActivities(::System::Diagnostics::Tracing::ActivityTracker::ActivityInfo* list);
    // public System.Boolean CanBeOrphan()
    // Offset: 0xCE4CC8
    bool CanBeOrphan();
    // private System.Void CreateActivityPathGuid(out System.Guid idRet, out System.Int32 activityPathGuidOffset)
    // Offset: 0xCE509C
    void CreateActivityPathGuid(ByRef<::System::Guid> idRet, ByRef<int> activityPathGuidOffset);
    // private System.Void CreateOverflowGuid(System.Guid* outPtr)
    // Offset: 0xCE54C0
    void CreateOverflowGuid(::System::Guid* outPtr);
    // static private System.Int32 AddIdToGuid(System.Guid* outPtr, System.Int32 whereToAddId, System.UInt32 id, System.Boolean overflow)
    // Offset: 0xCE5374
    static int AddIdToGuid(::System::Guid* outPtr, int whereToAddId, uint id, bool overflow);
    // static private System.Void WriteNibble(ref System.Byte* ptr, System.Byte* endPtr, System.UInt32 value)
    // Offset: 0xCE5528
    static void WriteNibble(ByRef<uint8_t*> ptr, uint8_t* endPtr, uint value);
    // public override System.String ToString()
    // Offset: 0xCE51E0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Diagnostics.Tracing.ActivityTracker/ActivityInfo
  #pragma pack(pop)
  static check_size<sizeof(ActivityTracker::ActivityInfo), 88 + sizeof(::System::Guid)> __System_Diagnostics_Tracing_ActivityTracker_ActivityInfoSizeCheck;
  static_assert(sizeof(ActivityTracker::ActivityInfo) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::get_ActivityId
// Il2CppName: get_ActivityId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::*)()>(&System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::get_ActivityId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*), "get_ActivityId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::Path
// Il2CppName: Path
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*)>(&System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::Path)> {
  static const MethodInfo* get() {
    static auto* activityInfo = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "ActivityTracker/ActivityInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*), "Path", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{activityInfo});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::LiveActivities
// Il2CppName: LiveActivities
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*)>(&System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::LiveActivities)> {
  static const MethodInfo* get() {
    static auto* list = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "ActivityTracker/ActivityInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*), "LiveActivities", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{list});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::CanBeOrphan
// Il2CppName: CanBeOrphan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::*)()>(&System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::CanBeOrphan)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*), "CanBeOrphan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::CreateActivityPathGuid
// Il2CppName: CreateActivityPathGuid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::*)(ByRef<::System::Guid>, ByRef<int>)>(&System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::CreateActivityPathGuid)> {
  static const MethodInfo* get() {
    static auto* idRet = &::il2cpp_utils::GetClassFromName("System", "Guid")->this_arg;
    static auto* activityPathGuidOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*), "CreateActivityPathGuid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idRet, activityPathGuidOffset});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::CreateOverflowGuid
// Il2CppName: CreateOverflowGuid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::*)(::System::Guid*)>(&System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::CreateOverflowGuid)> {
  static const MethodInfo* get() {
    static auto* outPtr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Guid"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*), "CreateOverflowGuid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outPtr});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::AddIdToGuid
// Il2CppName: AddIdToGuid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Guid*, int, uint, bool)>(&System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::AddIdToGuid)> {
  static const MethodInfo* get() {
    static auto* outPtr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Guid"))->byval_arg;
    static auto* whereToAddId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* overflow = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*), "AddIdToGuid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{outPtr, whereToAddId, id, overflow});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::WriteNibble
// Il2CppName: WriteNibble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<uint8_t*>, uint8_t*, uint)>(&System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::WriteNibble)> {
  static const MethodInfo* get() {
    static auto* ptr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->this_arg;
    static auto* endPtr = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*), "WriteNibble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr, endPtr, value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::*)()>(&System::Diagnostics::Tracing::ActivityTracker::ActivityInfo::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
