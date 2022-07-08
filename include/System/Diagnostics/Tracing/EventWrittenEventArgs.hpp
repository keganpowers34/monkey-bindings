// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventSource
  class EventSource;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventWrittenEventArgs
  class EventWrittenEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::EventWrittenEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventWrittenEventArgs*, "System.Diagnostics.Tracing", "EventWrittenEventArgs");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.EventWrittenEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class EventWrittenEventArgs : public ::System::EventArgs {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xA581F8
    // private System.Int32 <EventId>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int EventId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xA58208
    // private System.Guid <RelatedActivityId>k__BackingField
    // Size: 0x10
    // Offset: 0x14
    ::System::Guid RelatedActivityId;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    // Padding between fields: RelatedActivityId and: Payload
    char __padding1[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xA58218
    // private System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object> <Payload>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Il2CppObject*>* Payload;
    // Field size check
    static_assert(sizeof(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Il2CppObject*>*) == 0x8);
    // private System.String m_message
    // Size: 0x8
    // Offset: 0x30
    ::StringW m_message;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_eventName
    // Size: 0x8
    // Offset: 0x38
    ::StringW m_eventName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Diagnostics.Tracing.EventSource m_eventSource
    // Size: 0x8
    // Offset: 0x40
    ::System::Diagnostics::Tracing::EventSource* m_eventSource;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::EventSource*) == 0x8);
    // private System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> m_payloadNames
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* m_payloadNames;
    // Field size check
    static_assert(sizeof(::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*) == 0x8);
    public:
    // Get instance field reference: private System.Int32 <EventId>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$EventId$k__BackingField();
    // Get instance field reference: private System.Guid <RelatedActivityId>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Guid& dyn_$RelatedActivityId$k__BackingField();
    // Get instance field reference: private System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object> <Payload>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::ObjectModel::ReadOnlyCollection_1<::Il2CppObject*>*& dyn_$Payload$k__BackingField();
    // Get instance field reference: private System.String m_message
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_message();
    // Get instance field reference: private System.String m_eventName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_eventName();
    // Get instance field reference: private System.Diagnostics.Tracing.EventSource m_eventSource
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::EventSource*& dyn_m_eventSource();
    // Get instance field reference: private System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> m_payloadNames
    [[deprecated("Use field access instead!")]] ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*& dyn_m_payloadNames();
    // System.Void set_EventName(System.String value)
    // Offset: 0xD660FC
    void set_EventName(::StringW value);
    // System.Void set_EventId(System.Int32 value)
    // Offset: 0xD66104
    void set_EventId(int value);
    // System.Void set_RelatedActivityId(System.Guid value)
    // Offset: 0xD6610C
    void set_RelatedActivityId(::System::Guid value);
    // System.Void set_Payload(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object> value)
    // Offset: 0xD66118
    void set_Payload(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Il2CppObject*>* value);
    // System.Void set_PayloadNames(System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> value)
    // Offset: 0xD66120
    void set_PayloadNames(::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>* value);
    // System.Void set_Message(System.String value)
    // Offset: 0xD66128
    void set_Message(::StringW value);
    // System.Void .ctor(System.Diagnostics.Tracing.EventSource eventSource)
    // Offset: 0xD66130
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventWrittenEventArgs* New_ctor(::System::Diagnostics::Tracing::EventSource* eventSource) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EventWrittenEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventWrittenEventArgs*, creationType>(eventSource)));
    }
  }; // System.Diagnostics.Tracing.EventWrittenEventArgs
  #pragma pack(pop)
  static check_size<sizeof(EventWrittenEventArgs), 72 + sizeof(::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*)> __System_Diagnostics_Tracing_EventWrittenEventArgsSizeCheck;
  static_assert(sizeof(EventWrittenEventArgs) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventWrittenEventArgs::set_EventName
// Il2CppName: set_EventName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventWrittenEventArgs::*)(::StringW)>(&System::Diagnostics::Tracing::EventWrittenEventArgs::set_EventName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventWrittenEventArgs*), "set_EventName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventWrittenEventArgs::set_EventId
// Il2CppName: set_EventId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventWrittenEventArgs::*)(int)>(&System::Diagnostics::Tracing::EventWrittenEventArgs::set_EventId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventWrittenEventArgs*), "set_EventId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventWrittenEventArgs::set_RelatedActivityId
// Il2CppName: set_RelatedActivityId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventWrittenEventArgs::*)(::System::Guid)>(&System::Diagnostics::Tracing::EventWrittenEventArgs::set_RelatedActivityId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventWrittenEventArgs*), "set_RelatedActivityId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventWrittenEventArgs::set_Payload
// Il2CppName: set_Payload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventWrittenEventArgs::*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::Il2CppObject*>*)>(&System::Diagnostics::Tracing::EventWrittenEventArgs::set_Payload)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.ObjectModel", "ReadOnlyCollection`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventWrittenEventArgs*), "set_Payload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventWrittenEventArgs::set_PayloadNames
// Il2CppName: set_PayloadNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventWrittenEventArgs::*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*)>(&System::Diagnostics::Tracing::EventWrittenEventArgs::set_PayloadNames)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.ObjectModel", "ReadOnlyCollection`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventWrittenEventArgs*), "set_PayloadNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventWrittenEventArgs::set_Message
// Il2CppName: set_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventWrittenEventArgs::*)(::StringW)>(&System::Diagnostics::Tracing::EventWrittenEventArgs::set_Message)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventWrittenEventArgs*), "set_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventWrittenEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
