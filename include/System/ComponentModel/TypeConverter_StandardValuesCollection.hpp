// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.TypeConverter
#include "System/ComponentModel/TypeConverter.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::TypeConverter::StandardValuesCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeConverter::StandardValuesCollection*, "System.ComponentModel", "TypeConverter/StandardValuesCollection");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.TypeConverter/StandardValuesCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: A5F098
  class TypeConverter::StandardValuesCollection : public ::Il2CppObject/*, public ::System::Collections::ICollection*/ {
    public:
    public:
    // private System.Collections.ICollection values
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::ICollection* values;
    // Field size check
    static_assert(sizeof(::System::Collections::ICollection*) == 0x8);
    // private System.Array valueArray
    // Size: 0x8
    // Offset: 0x18
    ::System::Array* valueArray;
    // Field size check
    static_assert(sizeof(::System::Array*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::ICollection
    operator ::System::Collections::ICollection() noexcept {
      return *reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // Get instance field reference: private System.Collections.ICollection values
    [[deprecated("Use field access instead!")]] ::System::Collections::ICollection*& dyn_values();
    // Get instance field reference: private System.Array valueArray
    [[deprecated("Use field access instead!")]] ::System::Array*& dyn_valueArray();
    // public System.Void .ctor(System.Collections.ICollection values)
    // Offset: 0x122B74C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeConverter::StandardValuesCollection* New_ctor(::System::Collections::ICollection* values) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::TypeConverter::StandardValuesCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeConverter::StandardValuesCollection*, creationType>(values)));
    }
    // public System.Int32 get_Count()
    // Offset: 0x123FCDC
    int get_Count();
    // public System.Object get_Item(System.Int32 index)
    // Offset: 0x123FDA8
    ::Il2CppObject* get_Item(int index);
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x123FFAC
    void CopyTo(::System::Array* array, int index);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x1240074
    ::System::Collections::IEnumerator* GetEnumerator();
    // private System.Int32 System.Collections.ICollection.get_Count()
    // Offset: 0x1240124
    int System_Collections_ICollection_get_Count();
    // private System.Boolean System.Collections.ICollection.get_IsSynchronized()
    // Offset: 0x1240128
    bool System_Collections_ICollection_get_IsSynchronized();
    // private System.Object System.Collections.ICollection.get_SyncRoot()
    // Offset: 0x1240130
    ::Il2CppObject* System_Collections_ICollection_get_SyncRoot();
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x1240138
    void System_Collections_ICollection_CopyTo(::System::Array* array, int index);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x124013C
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.ComponentModel.TypeConverter/StandardValuesCollection
  #pragma pack(pop)
  static check_size<sizeof(TypeConverter::StandardValuesCollection), 24 + sizeof(::System::Array*)> __System_ComponentModel_TypeConverter_StandardValuesCollectionSizeCheck;
  static_assert(sizeof(TypeConverter::StandardValuesCollection) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::StandardValuesCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::StandardValuesCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::TypeConverter::StandardValuesCollection::*)()>(&System::ComponentModel::TypeConverter::StandardValuesCollection::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter::StandardValuesCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::StandardValuesCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::TypeConverter::StandardValuesCollection::*)(int)>(&System::ComponentModel::TypeConverter::StandardValuesCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter::StandardValuesCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::StandardValuesCollection::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::TypeConverter::StandardValuesCollection::*)(::System::Array*, int)>(&System::ComponentModel::TypeConverter::StandardValuesCollection::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter::StandardValuesCollection*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::StandardValuesCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::ComponentModel::TypeConverter::StandardValuesCollection::*)()>(&System::ComponentModel::TypeConverter::StandardValuesCollection::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter::StandardValuesCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::StandardValuesCollection::System_Collections_ICollection_get_Count
// Il2CppName: System.Collections.ICollection.get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::TypeConverter::StandardValuesCollection::*)()>(&System::ComponentModel::TypeConverter::StandardValuesCollection::System_Collections_ICollection_get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter::StandardValuesCollection*), "System.Collections.ICollection.get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::StandardValuesCollection::System_Collections_ICollection_get_IsSynchronized
// Il2CppName: System.Collections.ICollection.get_IsSynchronized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::TypeConverter::StandardValuesCollection::*)()>(&System::ComponentModel::TypeConverter::StandardValuesCollection::System_Collections_ICollection_get_IsSynchronized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter::StandardValuesCollection*), "System.Collections.ICollection.get_IsSynchronized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::StandardValuesCollection::System_Collections_ICollection_get_SyncRoot
// Il2CppName: System.Collections.ICollection.get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::TypeConverter::StandardValuesCollection::*)()>(&System::ComponentModel::TypeConverter::StandardValuesCollection::System_Collections_ICollection_get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter::StandardValuesCollection*), "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::StandardValuesCollection::System_Collections_ICollection_CopyTo
// Il2CppName: System.Collections.ICollection.CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::TypeConverter::StandardValuesCollection::*)(::System::Array*, int)>(&System::ComponentModel::TypeConverter::StandardValuesCollection::System_Collections_ICollection_CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter::StandardValuesCollection*), "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::StandardValuesCollection::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::ComponentModel::TypeConverter::StandardValuesCollection::*)()>(&System::ComponentModel::TypeConverter::StandardValuesCollection::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::TypeConverter::StandardValuesCollection*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
