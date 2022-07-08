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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: TraceListener
  class TraceListener;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: TraceListenerCollection
  class TraceListenerCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::TraceListenerCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceListenerCollection*, "System.Diagnostics", "TraceListenerCollection");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.TraceListenerCollection
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: A5E558
  class TraceListenerCollection : public ::Il2CppObject/*, public ::System::Collections::IList*/ {
    public:
    public:
    // private System.Collections.ArrayList list
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::ArrayList* list;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IList
    operator ::System::Collections::IList() noexcept {
      return *reinterpret_cast<::System::Collections::IList*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::ArrayList*
    constexpr operator ::System::Collections::ArrayList*() const noexcept {
      return list;
    }
    // Get instance field reference: private System.Collections.ArrayList list
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn_list();
    // System.Void .ctor()
    // Offset: 0x14CA170
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraceListenerCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::TraceListenerCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraceListenerCollection*, creationType>()));
    }
    // public System.Int32 get_Count()
    // Offset: 0x14CA7C8
    int get_Count();
    // public System.Int32 Add(System.Diagnostics.TraceListener listener)
    // Offset: 0x14CA2D0
    int Add(::System::Diagnostics::TraceListener* listener);
    // public System.Void Clear()
    // Offset: 0x14CA8F4
    void Clear();
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x14CA5B0
    ::System::Collections::IEnumerator* GetEnumerator();
    // System.Void InitializeListener(System.Diagnostics.TraceListener listener)
    // Offset: 0x14CA7EC
    void InitializeListener(::System::Diagnostics::TraceListener* listener);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x14CA954
    void RemoveAt(int index);
    // private System.Object System.Collections.IList.get_Item(System.Int32 index)
    // Offset: 0x14CAA5C
    ::Il2CppObject* System_Collections_IList_get_Item(int index);
    // private System.Void System.Collections.IList.set_Item(System.Int32 index, System.Object value)
    // Offset: 0x14CAA80
    void System_Collections_IList_set_Item(int index, ::Il2CppObject* value);
    // private System.Boolean System.Collections.IList.get_IsReadOnly()
    // Offset: 0x14CAB8C
    bool System_Collections_IList_get_IsReadOnly();
    // private System.Boolean System.Collections.IList.get_IsFixedSize()
    // Offset: 0x14CAB94
    bool System_Collections_IList_get_IsFixedSize();
    // private System.Int32 System.Collections.IList.Add(System.Object value)
    // Offset: 0x14CAB9C
    int System_Collections_IList_Add(::Il2CppObject* value);
    // private System.Boolean System.Collections.IList.Contains(System.Object value)
    // Offset: 0x14CAD58
    bool System_Collections_IList_Contains(::Il2CppObject* value);
    // private System.Int32 System.Collections.IList.IndexOf(System.Object value)
    // Offset: 0x14CAD7C
    int System_Collections_IList_IndexOf(::Il2CppObject* value);
    // private System.Void System.Collections.IList.Insert(System.Int32 index, System.Object value)
    // Offset: 0x14CADA0
    void System_Collections_IList_Insert(int index, ::Il2CppObject* value);
    // private System.Void System.Collections.IList.Remove(System.Object value)
    // Offset: 0x14CAF54
    void System_Collections_IList_Remove(::Il2CppObject* value);
    // private System.Object System.Collections.ICollection.get_SyncRoot()
    // Offset: 0x14CB05C
    ::Il2CppObject* System_Collections_ICollection_get_SyncRoot();
    // private System.Boolean System.Collections.ICollection.get_IsSynchronized()
    // Offset: 0x14CB060
    bool System_Collections_ICollection_get_IsSynchronized();
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x14CB068
    void System_Collections_ICollection_CopyTo(::System::Array* array, int index);
  }; // System.Diagnostics.TraceListenerCollection
  #pragma pack(pop)
  static check_size<sizeof(TraceListenerCollection), 16 + sizeof(::System::Collections::ArrayList*)> __System_Diagnostics_TraceListenerCollectionSizeCheck;
  static_assert(sizeof(TraceListenerCollection) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::TraceListenerCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::TraceListenerCollection::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Diagnostics::TraceListenerCollection::*)()>(&System::Diagnostics::TraceListenerCollection::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListenerCollection*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListenerCollection::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Diagnostics::TraceListenerCollection::*)(::System::Diagnostics::TraceListener*)>(&System::Diagnostics::TraceListenerCollection::Add)> {
  static const MethodInfo* get() {
    static auto* listener = &::il2cpp_utils::GetClassFromName("System.Diagnostics", "TraceListener")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListenerCollection*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{listener});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListenerCollection::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListenerCollection::*)()>(&System::Diagnostics::TraceListenerCollection::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListenerCollection*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListenerCollection::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Diagnostics::TraceListenerCollection::*)()>(&System::Diagnostics::TraceListenerCollection::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListenerCollection*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListenerCollection::InitializeListener
// Il2CppName: InitializeListener
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListenerCollection::*)(::System::Diagnostics::TraceListener*)>(&System::Diagnostics::TraceListenerCollection::InitializeListener)> {
  static const MethodInfo* get() {
    static auto* listener = &::il2cpp_utils::GetClassFromName("System.Diagnostics", "TraceListener")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListenerCollection*), "InitializeListener", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{listener});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListenerCollection::RemoveAt
// Il2CppName: RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListenerCollection::*)(int)>(&System::Diagnostics::TraceListenerCollection::RemoveAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListenerCollection*), "RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListenerCollection::System_Collections_IList_get_Item
// Il2CppName: System.Collections.IList.get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Diagnostics::TraceListenerCollection::*)(int)>(&System::Diagnostics::TraceListenerCollection::System_Collections_IList_get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListenerCollection*), "System.Collections.IList.get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListenerCollection::System_Collections_IList_set_Item
// Il2CppName: System.Collections.IList.set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListenerCollection::*)(int, ::Il2CppObject*)>(&System::Diagnostics::TraceListenerCollection::System_Collections_IList_set_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListenerCollection*), "System.Collections.IList.set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListenerCollection::System_Collections_IList_get_IsReadOnly
// Il2CppName: System.Collections.IList.get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::TraceListenerCollection::*)()>(&System::Diagnostics::TraceListenerCollection::System_Collections_IList_get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListenerCollection*), "System.Collections.IList.get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListenerCollection::System_Collections_IList_get_IsFixedSize
// Il2CppName: System.Collections.IList.get_IsFixedSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::TraceListenerCollection::*)()>(&System::Diagnostics::TraceListenerCollection::System_Collections_IList_get_IsFixedSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListenerCollection*), "System.Collections.IList.get_IsFixedSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListenerCollection::System_Collections_IList_Add
// Il2CppName: System.Collections.IList.Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Diagnostics::TraceListenerCollection::*)(::Il2CppObject*)>(&System::Diagnostics::TraceListenerCollection::System_Collections_IList_Add)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListenerCollection*), "System.Collections.IList.Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListenerCollection::System_Collections_IList_Contains
// Il2CppName: System.Collections.IList.Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::TraceListenerCollection::*)(::Il2CppObject*)>(&System::Diagnostics::TraceListenerCollection::System_Collections_IList_Contains)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListenerCollection*), "System.Collections.IList.Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListenerCollection::System_Collections_IList_IndexOf
// Il2CppName: System.Collections.IList.IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Diagnostics::TraceListenerCollection::*)(::Il2CppObject*)>(&System::Diagnostics::TraceListenerCollection::System_Collections_IList_IndexOf)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListenerCollection*), "System.Collections.IList.IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListenerCollection::System_Collections_IList_Insert
// Il2CppName: System.Collections.IList.Insert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListenerCollection::*)(int, ::Il2CppObject*)>(&System::Diagnostics::TraceListenerCollection::System_Collections_IList_Insert)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListenerCollection*), "System.Collections.IList.Insert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListenerCollection::System_Collections_IList_Remove
// Il2CppName: System.Collections.IList.Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListenerCollection::*)(::Il2CppObject*)>(&System::Diagnostics::TraceListenerCollection::System_Collections_IList_Remove)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListenerCollection*), "System.Collections.IList.Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListenerCollection::System_Collections_ICollection_get_SyncRoot
// Il2CppName: System.Collections.ICollection.get_SyncRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Diagnostics::TraceListenerCollection::*)()>(&System::Diagnostics::TraceListenerCollection::System_Collections_ICollection_get_SyncRoot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListenerCollection*), "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListenerCollection::System_Collections_ICollection_get_IsSynchronized
// Il2CppName: System.Collections.ICollection.get_IsSynchronized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::TraceListenerCollection::*)()>(&System::Diagnostics::TraceListenerCollection::System_Collections_ICollection_get_IsSynchronized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListenerCollection*), "System.Collections.ICollection.get_IsSynchronized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::TraceListenerCollection::System_Collections_ICollection_CopyTo
// Il2CppName: System.Collections.ICollection.CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::TraceListenerCollection::*)(::System::Array*, int)>(&System::Diagnostics::TraceListenerCollection::System_Collections_ICollection_CopyTo)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::TraceListenerCollection*), "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, index});
  }
};
