// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ListSortDescription
  class ListSortDescription;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ListSortDescriptionCollection
  class ListSortDescriptionCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::ListSortDescriptionCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ListSortDescriptionCollection*, "System.ComponentModel", "ListSortDescriptionCollection");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ListSortDescriptionCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: A5ED74
  class ListSortDescriptionCollection : public ::Il2CppObject/*, public ::System::Collections::IList*/ {
    public:
    public:
    // private System.Collections.ArrayList sorts
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::ArrayList* sorts;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IList
    operator ::System::Collections::IList() noexcept {
      return *reinterpret_cast<::System::Collections::IList*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::ArrayList*
    constexpr operator ::System::Collections::ArrayList*() const noexcept {
      return sorts;
    }
    // Get instance field reference: private System.Collections.ArrayList sorts
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn_sorts();
    // public System.Void .ctor()
    // Offset: 0x118DEC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListSortDescriptionCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ListSortDescriptionCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListSortDescriptionCollection*, creationType>()));
    }
    // public System.Void .ctor(System.ComponentModel.ListSortDescription[] sorts)
    // Offset: 0x118DF28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListSortDescriptionCollection* New_ctor(::ArrayW<::System::ComponentModel::ListSortDescription*> sorts) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::ListSortDescriptionCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListSortDescriptionCollection*, creationType>(sorts)));
    }
    // public System.ComponentModel.ListSortDescription get_Item(System.Int32 index)
    // Offset: 0x118E000
    ::System::ComponentModel::ListSortDescription* get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.ComponentModel.ListSortDescription value)
    // Offset: 0x118E0A8
    void set_Item(int index, ::System::ComponentModel::ListSortDescription* value);
    // private System.Boolean System.Collections.IList.get_IsFixedSize()
    // Offset: 0x118E128
    bool System_Collections_IList_get_IsFixedSize();
    // private System.Boolean System.Collections.IList.get_IsReadOnly()
    // Offset: 0x118E130
    bool System_Collections_IList_get_IsReadOnly();
    // private System.Object System.Collections.IList.get_Item(System.Int32 index)
    // Offset: 0x118E138
    ::Il2CppObject* System_Collections_IList_get_Item(int index);
    // private System.Void System.Collections.IList.set_Item(System.Int32 index, System.Object value)
    // Offset: 0x118E13C
    void System_Collections_IList_set_Item(int index, ::Il2CppObject* value);
    // private System.Int32 System.Collections.IList.Add(System.Object value)
    // Offset: 0x118E1BC
    int System_Collections_IList_Add(::Il2CppObject* value);
    // private System.Void System.Collections.IList.Clear()
    // Offset: 0x118E23C
    void System_Collections_IList_Clear();
    // public System.Boolean Contains(System.Object value)
    // Offset: 0x118E2BC
    bool Contains(::Il2CppObject* value);
    // public System.Int32 IndexOf(System.Object value)
    // Offset: 0x118E380
    int IndexOf(::Il2CppObject* value);
    // private System.Void System.Collections.IList.Insert(System.Int32 index, System.Object value)
    // Offset: 0x118E444
    void System_Collections_IList_Insert(int index, ::Il2CppObject* value);
    // private System.Void System.Collections.IList.Remove(System.Object value)
    // Offset: 0x118E4C4
    void System_Collections_IList_Remove(::Il2CppObject* value);
    // private System.Void System.Collections.IList.RemoveAt(System.Int32 index)
    // Offset: 0x118E544
    void System_Collections_IList_RemoveAt(int index);
    // public System.Int32 get_Count()
    // Offset: 0x118E5C4
    int get_Count();
    // private System.Boolean System.Collections.ICollection.get_IsSynchronized()
    // Offset: 0x118E5E8
    bool System_Collections_ICollection_get_IsSynchronized();
    // private System.Object System.Collections.ICollection.get_SyncRoot()
    // Offset: 0x118E5F0
    ::Il2CppObject* System_Collections_ICollection_get_SyncRoot();
    // public System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x118E5F4
    void CopyTo(::System::Array* array, int index);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x118E618
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.ComponentModel.ListSortDescriptionCollection
  #pragma pack(pop)
  static check_size<sizeof(ListSortDescriptionCollection), 16 + sizeof(::System::Collections::ArrayList*)> __System_ComponentModel_ListSortDescriptionCollectionSizeCheck;
  static_assert(sizeof(ListSortDescriptionCollection) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::ListSortDescriptionCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ListSortDescriptionCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::ListSortDescriptionCollection::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ListSortDescription* (System::ComponentModel::ListSortDescriptionCollection::*)(int)>(&System::ComponentModel::ListSortDescriptionCollection::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ListSortDescriptionCollection*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ListSortDescriptionCollection::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ListSortDescriptionCollection::*)(int, ::System::ComponentModel::ListSortDescription*)>(&System::ComponentModel::ListSortDescriptionCollection::set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ListSortDescription")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ListSortDescriptionCollection*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_get_IsFixedSize
// Il2CppName: System.Collections.IList.get_IsFixedSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ListSortDescriptionCollection::*)()>(&System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_get_IsFixedSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ListSortDescriptionCollection*), "System.Collections.IList.get_IsFixedSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_get_IsReadOnly
// Il2CppName: System.Collections.IList.get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ListSortDescriptionCollection::*)()>(&System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ListSortDescriptionCollection*), "System.Collections.IList.get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_get_Item
// Il2CppName: System.Collections.IList.get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::ListSortDescriptionCollection::*)(int)>(&System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ListSortDescriptionCollection*), "System.Collections.IList.get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_set_Item
// Il2CppName: System.Collections.IList.set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ListSortDescriptionCollection::*)(int, ::Il2CppObject*)>(&System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ListSortDescriptionCollection*), "System.Collections.IList.set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_Add
// Il2CppName: System.Collections.IList.Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::ListSortDescriptionCollection::*)(::Il2CppObject*)>(&System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_Add)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ListSortDescriptionCollection*), "System.Collections.IList.Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_Clear
// Il2CppName: System.Collections.IList.Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ListSortDescriptionCollection::*)()>(&System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ListSortDescriptionCollection*), "System.Collections.IList.Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ListSortDescriptionCollection::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ListSortDescriptionCollection::*)(::Il2CppObject*)>(&System::ComponentModel::ListSortDescriptionCollection::Contains)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ListSortDescriptionCollection*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ListSortDescriptionCollection::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::ListSortDescriptionCollection::*)(::Il2CppObject*)>(&System::ComponentModel::ListSortDescriptionCollection::IndexOf)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ListSortDescriptionCollection*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_Insert
// Il2CppName: System.Collections.IList.Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ListSortDescriptionCollection::*)(int, ::Il2CppObject*)>(&System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_Insert)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ListSortDescriptionCollection*), "System.Collections.IList.Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_Remove
// Il2CppName: System.Collections.IList.Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ListSortDescriptionCollection::*)(::Il2CppObject*)>(&System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_Remove)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ListSortDescriptionCollection*), "System.Collections.IList.Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_RemoveAt
// Il2CppName: System.Collections.IList.RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ListSortDescriptionCollection::*)(int)>(&System::ComponentModel::ListSortDescriptionCollection::System_Collections_IList_RemoveAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ListSortDescriptionCollection*), "System.Collections.IList.RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ListSortDescriptionCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::ListSortDescriptionCollection::*)()>(&System::ComponentModel::ListSortDescriptionCollection::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ListSortDescriptionCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ListSortDescriptionCollection::System_Collections_ICollection_get_IsSynchronized
// Il2CppName: System.Collections.ICollection.get_IsSynchronized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::ListSortDescriptionCollection::*)()>(&System::ComponentModel::ListSortDescriptionCollection::System_Collections_ICollection_get_IsSynchronized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ListSortDescriptionCollection*), "System.Collections.ICollection.get_IsSynchronized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ListSortDescriptionCollection::System_Collections_ICollection_get_SyncRoot
// Il2CppName: System.Collections.ICollection.get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::ListSortDescriptionCollection::*)()>(&System::ComponentModel::ListSortDescriptionCollection::System_Collections_ICollection_get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ListSortDescriptionCollection*), "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ListSortDescriptionCollection::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::ListSortDescriptionCollection::*)(::System::Array*, int)>(&System::ComponentModel::ListSortDescriptionCollection::CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ListSortDescriptionCollection*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::ListSortDescriptionCollection::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::ComponentModel::ListSortDescriptionCollection::*)()>(&System::ComponentModel::ListSortDescriptionCollection::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::ListSortDescriptionCollection*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
