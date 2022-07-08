// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Specialized.StringDictionary
#include "System/Collections/Specialized/StringDictionary.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: TrackingValidationObjectDictionary
  class TrackingValidationObjectDictionary;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::TrackingValidationObjectDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TrackingValidationObjectDictionary*, "System.Net", "TrackingValidationObjectDictionary");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.TrackingValidationObjectDictionary
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: A5F824
  class TrackingValidationObjectDictionary : public ::System::Collections::Specialized::StringDictionary {
    public:
    // Nested type: ::System::Net::TrackingValidationObjectDictionary::ValidateAndParseValue
    class ValidateAndParseValue;
    public:
    // private System.Collections.Generic.IDictionary`2<System.String,System.Object> internalObjects
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::IDictionary_2<::StringW, ::Il2CppObject*>* internalObjects;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IDictionary_2<::StringW, ::Il2CppObject*>*) == 0x8);
    // private readonly System.Collections.Generic.IDictionary`2<System.String,System.Net.TrackingValidationObjectDictionary/ValidateAndParseValue> validators
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Net::TrackingValidationObjectDictionary::ValidateAndParseValue*>* validators;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IDictionary_2<::StringW, ::System::Net::TrackingValidationObjectDictionary::ValidateAndParseValue*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xA608A4
    // private System.Boolean <IsChanged>k__BackingField
    // Size: 0x1
    // Offset: 0x28
    bool IsChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::Collections::Hashtable*
    constexpr operator ::System::Collections::Hashtable*() const noexcept = delete;
    // Get instance field reference: private System.Collections.Generic.IDictionary`2<System.String,System.Object> internalObjects
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IDictionary_2<::StringW, ::Il2CppObject*>*& dyn_internalObjects();
    // Get instance field reference: private readonly System.Collections.Generic.IDictionary`2<System.String,System.Net.TrackingValidationObjectDictionary/ValidateAndParseValue> validators
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Net::TrackingValidationObjectDictionary::ValidateAndParseValue*>*& dyn_validators();
    // Get instance field reference: private System.Boolean <IsChanged>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsChanged$k__BackingField();
    // System.Void .ctor(System.Collections.Generic.IDictionary`2<System.String,System.Net.TrackingValidationObjectDictionary/ValidateAndParseValue> validators)
    // Offset: 0xC700CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackingValidationObjectDictionary* New_ctor(::System::Collections::Generic::IDictionary_2<::StringW, ::System::Net::TrackingValidationObjectDictionary::ValidateAndParseValue*>* validators) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::TrackingValidationObjectDictionary::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackingValidationObjectDictionary*, creationType>(validators)));
    }
    // private System.Void PersistValue(System.String key, System.String value, System.Boolean addValue)
    // Offset: 0xC700FC
    void PersistValue(::StringW key, ::StringW value, bool addValue);
    // System.Boolean get_IsChanged()
    // Offset: 0xC707B4
    bool get_IsChanged();
    // System.Void set_IsChanged(System.Boolean value)
    // Offset: 0xC707BC
    void set_IsChanged(bool value);
    // System.Object InternalGet(System.String key)
    // Offset: 0xC707C8
    ::Il2CppObject* InternalGet(::StringW key);
    // System.Void InternalSet(System.String key, System.Object value)
    // Offset: 0xC70918
    void InternalSet(::StringW key, ::Il2CppObject* value);
    // public override System.String get_Item(System.String key)
    // Offset: 0xC70A44
    // Implemented from: System.Collections.Specialized.StringDictionary
    // Base method: System.String StringDictionary::get_Item(System.String key)
    ::StringW get_Item(::StringW key);
    // public override System.Void set_Item(System.String key, System.String value)
    // Offset: 0xC70A4C
    // Implemented from: System.Collections.Specialized.StringDictionary
    // Base method: System.Void StringDictionary::set_Item(System.String key, System.String value)
    void set_Item(::StringW key, ::StringW value);
    // public override System.Void Add(System.String key, System.String value)
    // Offset: 0xC70A54
    // Implemented from: System.Collections.Specialized.StringDictionary
    // Base method: System.Void StringDictionary::Add(System.String key, System.String value)
    void Add(::StringW key, ::StringW value);
    // public override System.Void Clear()
    // Offset: 0xC70A5C
    // Implemented from: System.Collections.Specialized.StringDictionary
    // Base method: System.Void StringDictionary::Clear()
    void Clear();
    // public override System.Void Remove(System.String key)
    // Offset: 0xC70B24
    // Implemented from: System.Collections.Specialized.StringDictionary
    // Base method: System.Void StringDictionary::Remove(System.String key)
    void Remove(::StringW key);
  }; // System.Net.TrackingValidationObjectDictionary
  #pragma pack(pop)
  static check_size<sizeof(TrackingValidationObjectDictionary), 40 + sizeof(bool)> __System_Net_TrackingValidationObjectDictionarySizeCheck;
  static_assert(sizeof(TrackingValidationObjectDictionary) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::TrackingValidationObjectDictionary::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::TrackingValidationObjectDictionary::PersistValue
// Il2CppName: PersistValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::TrackingValidationObjectDictionary::*)(::StringW, ::StringW, bool)>(&System::Net::TrackingValidationObjectDictionary::PersistValue)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* addValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TrackingValidationObjectDictionary*), "PersistValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value, addValue});
  }
};
// Writing MetadataGetter for method: System::Net::TrackingValidationObjectDictionary::get_IsChanged
// Il2CppName: get_IsChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::TrackingValidationObjectDictionary::*)()>(&System::Net::TrackingValidationObjectDictionary::get_IsChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::TrackingValidationObjectDictionary*), "get_IsChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::TrackingValidationObjectDictionary::set_IsChanged
// Il2CppName: set_IsChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::TrackingValidationObjectDictionary::*)(bool)>(&System::Net::TrackingValidationObjectDictionary::set_IsChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TrackingValidationObjectDictionary*), "set_IsChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::TrackingValidationObjectDictionary::InternalGet
// Il2CppName: InternalGet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::TrackingValidationObjectDictionary::*)(::StringW)>(&System::Net::TrackingValidationObjectDictionary::InternalGet)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TrackingValidationObjectDictionary*), "InternalGet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Net::TrackingValidationObjectDictionary::InternalSet
// Il2CppName: InternalSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::TrackingValidationObjectDictionary::*)(::StringW, ::Il2CppObject*)>(&System::Net::TrackingValidationObjectDictionary::InternalSet)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TrackingValidationObjectDictionary*), "InternalSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Net::TrackingValidationObjectDictionary::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::TrackingValidationObjectDictionary::*)(::StringW)>(&System::Net::TrackingValidationObjectDictionary::get_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TrackingValidationObjectDictionary*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Net::TrackingValidationObjectDictionary::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::TrackingValidationObjectDictionary::*)(::StringW, ::StringW)>(&System::Net::TrackingValidationObjectDictionary::set_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TrackingValidationObjectDictionary*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Net::TrackingValidationObjectDictionary::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::TrackingValidationObjectDictionary::*)(::StringW, ::StringW)>(&System::Net::TrackingValidationObjectDictionary::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TrackingValidationObjectDictionary*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Net::TrackingValidationObjectDictionary::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::TrackingValidationObjectDictionary::*)()>(&System::Net::TrackingValidationObjectDictionary::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::TrackingValidationObjectDictionary*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::TrackingValidationObjectDictionary::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::TrackingValidationObjectDictionary::*)(::StringW)>(&System::Net::TrackingValidationObjectDictionary::Remove)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TrackingValidationObjectDictionary*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
