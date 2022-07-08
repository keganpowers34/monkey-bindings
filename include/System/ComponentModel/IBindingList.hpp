// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: PropertyDescriptor
  class PropertyDescriptor;
  // Forward declaring type: ListSortDirection
  struct ListSortDirection;
  // Forward declaring type: ListChangedEventHandler
  class ListChangedEventHandler;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: IBindingList
  class IBindingList;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::IBindingList);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IBindingList*, "System.ComponentModel", "IBindingList");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.IBindingList
  // [TokenAttribute] Offset: FFFFFFFF
  class IBindingList/*, public ::System::Collections::IList*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::IList
    operator ::System::Collections::IList() noexcept {
      return *reinterpret_cast<::System::Collections::IList*>(this);
    }
    // public System.Boolean get_AllowNew()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_AllowNew();
    // public System.Object AddNew()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* AddNew();
    // public System.Boolean get_AllowEdit()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_AllowEdit();
    // public System.Boolean get_AllowRemove()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_AllowRemove();
    // public System.Boolean get_SupportsChangeNotification()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_SupportsChangeNotification();
    // public System.Boolean get_SupportsSearching()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_SupportsSearching();
    // public System.Boolean get_SupportsSorting()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_SupportsSorting();
    // public System.Boolean get_IsSorted()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsSorted();
    // public System.ComponentModel.PropertyDescriptor get_SortProperty()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ComponentModel::PropertyDescriptor* get_SortProperty();
    // public System.ComponentModel.ListSortDirection get_SortDirection()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::ComponentModel::ListSortDirection get_SortDirection();
    // public System.Void add_ListChanged(System.ComponentModel.ListChangedEventHandler value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_ListChanged(::System::ComponentModel::ListChangedEventHandler* value);
    // public System.Void remove_ListChanged(System.ComponentModel.ListChangedEventHandler value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_ListChanged(::System::ComponentModel::ListChangedEventHandler* value);
    // public System.Void AddIndex(System.ComponentModel.PropertyDescriptor property)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AddIndex(::System::ComponentModel::PropertyDescriptor* property);
    // public System.Void ApplySort(System.ComponentModel.PropertyDescriptor property, System.ComponentModel.ListSortDirection direction)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ApplySort(::System::ComponentModel::PropertyDescriptor* property, ::System::ComponentModel::ListSortDirection direction);
    // public System.Int32 Find(System.ComponentModel.PropertyDescriptor property, System.Object key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int Find(::System::ComponentModel::PropertyDescriptor* property, ::Il2CppObject* key);
    // public System.Void RemoveIndex(System.ComponentModel.PropertyDescriptor property)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RemoveIndex(::System::ComponentModel::PropertyDescriptor* property);
    // public System.Void RemoveSort()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RemoveSort();
  }; // System.ComponentModel.IBindingList
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::IBindingList::get_AllowNew
// Il2CppName: get_AllowNew
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::IBindingList::*)()>(&System::ComponentModel::IBindingList::get_AllowNew)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingList*), "get_AllowNew", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingList::AddNew
// Il2CppName: AddNew
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::IBindingList::*)()>(&System::ComponentModel::IBindingList::AddNew)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingList*), "AddNew", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingList::get_AllowEdit
// Il2CppName: get_AllowEdit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::IBindingList::*)()>(&System::ComponentModel::IBindingList::get_AllowEdit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingList*), "get_AllowEdit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingList::get_AllowRemove
// Il2CppName: get_AllowRemove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::IBindingList::*)()>(&System::ComponentModel::IBindingList::get_AllowRemove)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingList*), "get_AllowRemove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingList::get_SupportsChangeNotification
// Il2CppName: get_SupportsChangeNotification
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::IBindingList::*)()>(&System::ComponentModel::IBindingList::get_SupportsChangeNotification)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingList*), "get_SupportsChangeNotification", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingList::get_SupportsSearching
// Il2CppName: get_SupportsSearching
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::IBindingList::*)()>(&System::ComponentModel::IBindingList::get_SupportsSearching)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingList*), "get_SupportsSearching", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingList::get_SupportsSorting
// Il2CppName: get_SupportsSorting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::IBindingList::*)()>(&System::ComponentModel::IBindingList::get_SupportsSorting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingList*), "get_SupportsSorting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingList::get_IsSorted
// Il2CppName: get_IsSorted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::IBindingList::*)()>(&System::ComponentModel::IBindingList::get_IsSorted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingList*), "get_IsSorted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingList::get_SortProperty
// Il2CppName: get_SortProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptor* (System::ComponentModel::IBindingList::*)()>(&System::ComponentModel::IBindingList::get_SortProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingList*), "get_SortProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingList::get_SortDirection
// Il2CppName: get_SortDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ListSortDirection (System::ComponentModel::IBindingList::*)()>(&System::ComponentModel::IBindingList::get_SortDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingList*), "get_SortDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingList::add_ListChanged
// Il2CppName: add_ListChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::IBindingList::*)(::System::ComponentModel::ListChangedEventHandler*)>(&System::ComponentModel::IBindingList::add_ListChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ListChangedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingList*), "add_ListChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingList::remove_ListChanged
// Il2CppName: remove_ListChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::IBindingList::*)(::System::ComponentModel::ListChangedEventHandler*)>(&System::ComponentModel::IBindingList::remove_ListChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ListChangedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingList*), "remove_ListChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingList::AddIndex
// Il2CppName: AddIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::IBindingList::*)(::System::ComponentModel::PropertyDescriptor*)>(&System::ComponentModel::IBindingList::AddIndex)> {
  static const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingList*), "AddIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingList::ApplySort
// Il2CppName: ApplySort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::IBindingList::*)(::System::ComponentModel::PropertyDescriptor*, ::System::ComponentModel::ListSortDirection)>(&System::ComponentModel::IBindingList::ApplySort)> {
  static const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyDescriptor")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ListSortDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingList*), "ApplySort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property, direction});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingList::Find
// Il2CppName: Find
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::IBindingList::*)(::System::ComponentModel::PropertyDescriptor*, ::Il2CppObject*)>(&System::ComponentModel::IBindingList::Find)> {
  static const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyDescriptor")->byval_arg;
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingList*), "Find", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property, key});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingList::RemoveIndex
// Il2CppName: RemoveIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::IBindingList::*)(::System::ComponentModel::PropertyDescriptor*)>(&System::ComponentModel::IBindingList::RemoveIndex)> {
  static const MethodInfo* get() {
    static auto* property = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "PropertyDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingList*), "RemoveIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{property});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::IBindingList::RemoveSort
// Il2CppName: RemoveSort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::IBindingList::*)()>(&System::ComponentModel::IBindingList::RemoveSort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::IBindingList*), "RemoveSort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
