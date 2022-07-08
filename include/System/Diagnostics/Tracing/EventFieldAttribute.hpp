// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Diagnostics.Tracing.EventFieldTags
#include "System/Diagnostics/Tracing/EventFieldTags.hpp"
// Including type: System.Diagnostics.Tracing.EventFieldFormat
#include "System/Diagnostics/Tracing/EventFieldFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventFieldAttribute
  class EventFieldAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::EventFieldAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventFieldAttribute*, "System.Diagnostics.Tracing", "EventFieldAttribute");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.EventFieldAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: A5692C
  class EventFieldAttribute : public ::System::Attribute {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xA58148
    // private System.Diagnostics.Tracing.EventFieldTags <Tags>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::System::Diagnostics::Tracing::EventFieldTags Tags;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::EventFieldTags) == 0x4);
    // Padding between fields: Tags and: Name
    char __padding0[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xA58158
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xA58168
    // private System.Diagnostics.Tracing.EventFieldFormat <Format>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    ::System::Diagnostics::Tracing::EventFieldFormat Format;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::EventFieldFormat) == 0x4);
    public:
    // Get instance field reference: private System.Diagnostics.Tracing.EventFieldTags <Tags>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::EventFieldTags& dyn_$Tags$k__BackingField();
    // Get instance field reference: private System.String <Name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Name$k__BackingField();
    // Get instance field reference: private System.Diagnostics.Tracing.EventFieldFormat <Format>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::EventFieldFormat& dyn_$Format$k__BackingField();
    // public System.Diagnostics.Tracing.EventFieldTags get_Tags()
    // Offset: 0xCE7A18
    ::System::Diagnostics::Tracing::EventFieldTags get_Tags();
    // System.String get_Name()
    // Offset: 0xCE7A20
    ::StringW get_Name();
    // public System.Diagnostics.Tracing.EventFieldFormat get_Format()
    // Offset: 0xCE7A28
    ::System::Diagnostics::Tracing::EventFieldFormat get_Format();
  }; // System.Diagnostics.Tracing.EventFieldAttribute
  #pragma pack(pop)
  static check_size<sizeof(EventFieldAttribute), 32 + sizeof(::System::Diagnostics::Tracing::EventFieldFormat)> __System_Diagnostics_Tracing_EventFieldAttributeSizeCheck;
  static_assert(sizeof(EventFieldAttribute) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventFieldAttribute::get_Tags
// Il2CppName: get_Tags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Tracing::EventFieldTags (System::Diagnostics::Tracing::EventFieldAttribute::*)()>(&System::Diagnostics::Tracing::EventFieldAttribute::get_Tags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventFieldAttribute*), "get_Tags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventFieldAttribute::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Diagnostics::Tracing::EventFieldAttribute::*)()>(&System::Diagnostics::Tracing::EventFieldAttribute::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventFieldAttribute*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventFieldAttribute::get_Format
// Il2CppName: get_Format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::Tracing::EventFieldFormat (System::Diagnostics::Tracing::EventFieldAttribute::*)()>(&System::Diagnostics::Tracing::EventFieldAttribute::get_Format)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventFieldAttribute*), "get_Format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
