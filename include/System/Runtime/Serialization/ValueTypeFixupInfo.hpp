// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: ValueTypeFixupInfo
  class ValueTypeFixupInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::ValueTypeFixupInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ValueTypeFixupInfo*, "System.Runtime.Serialization", "ValueTypeFixupInfo");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.ValueTypeFixupInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class ValueTypeFixupInfo : public ::Il2CppObject {
    public:
    public:
    // private System.Int64 m_containerID
    // Size: 0x8
    // Offset: 0x10
    int64_t m_containerID;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Reflection.FieldInfo m_parentField
    // Size: 0x8
    // Offset: 0x18
    ::System::Reflection::FieldInfo* m_parentField;
    // Field size check
    static_assert(sizeof(::System::Reflection::FieldInfo*) == 0x8);
    // private System.Int32[] m_parentIndex
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<int> m_parentIndex;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Get instance field reference: private System.Int64 m_containerID
    [[deprecated("Use field access instead!")]] int64_t& dyn_m_containerID();
    // Get instance field reference: private System.Reflection.FieldInfo m_parentField
    [[deprecated("Use field access instead!")]] ::System::Reflection::FieldInfo*& dyn_m_parentField();
    // Get instance field reference: private System.Int32[] m_parentIndex
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_m_parentIndex();
    // public System.Void .ctor(System.Int64 containerID, System.Reflection.FieldInfo member, System.Int32[] parentIndex)
    // Offset: 0x1100F64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValueTypeFixupInfo* New_ctor(int64_t containerID, ::System::Reflection::FieldInfo* member, ::ArrayW<int> parentIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::ValueTypeFixupInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValueTypeFixupInfo*, creationType>(containerID, member, parentIndex)));
    }
    // public System.Int64 get_ContainerID()
    // Offset: 0x11010BC
    int64_t get_ContainerID();
    // public System.Reflection.FieldInfo get_ParentField()
    // Offset: 0x11010C4
    ::System::Reflection::FieldInfo* get_ParentField();
    // public System.Int32[] get_ParentIndex()
    // Offset: 0x11010CC
    ::ArrayW<int> get_ParentIndex();
  }; // System.Runtime.Serialization.ValueTypeFixupInfo
  #pragma pack(pop)
  static check_size<sizeof(ValueTypeFixupInfo), 32 + sizeof(::ArrayW<int>)> __System_Runtime_Serialization_ValueTypeFixupInfoSizeCheck;
  static_assert(sizeof(ValueTypeFixupInfo) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::ValueTypeFixupInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::ValueTypeFixupInfo::get_ContainerID
// Il2CppName: get_ContainerID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Runtime::Serialization::ValueTypeFixupInfo::*)()>(&System::Runtime::Serialization::ValueTypeFixupInfo::get_ContainerID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ValueTypeFixupInfo*), "get_ContainerID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ValueTypeFixupInfo::get_ParentField
// Il2CppName: get_ParentField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::FieldInfo* (System::Runtime::Serialization::ValueTypeFixupInfo::*)()>(&System::Runtime::Serialization::ValueTypeFixupInfo::get_ParentField)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ValueTypeFixupInfo*), "get_ParentField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::ValueTypeFixupInfo::get_ParentIndex
// Il2CppName: get_ParentIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (System::Runtime::Serialization::ValueTypeFixupInfo::*)()>(&System::Runtime::Serialization::ValueTypeFixupInfo::get_ParentIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ValueTypeFixupInfo*), "get_ParentIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
