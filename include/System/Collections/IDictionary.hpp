// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::IDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IDictionary*, "System.Collections", "IDictionary");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.IDictionary
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: A55948
  // [ComVisibleAttribute] Offset: A55948
  class IDictionary/*, public ::System::Collections::ICollection*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::ICollection
    operator ::System::Collections::ICollection() noexcept {
      return *reinterpret_cast<::System::Collections::ICollection*>(this);
    }
    // public System.Object get_Item(System.Object key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // public System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Collections.ICollection get_Keys()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::ICollection* get_Keys();
    // public System.Collections.ICollection get_Values()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::ICollection* get_Values();
    // public System.Boolean Contains(System.Object key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Contains(::Il2CppObject* key);
    // public System.Void Add(System.Object key, System.Object value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsReadOnly();
    // public System.Boolean get_IsFixedSize()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsFixedSize();
    // public System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IDictionaryEnumerator* GetEnumerator();
    // public System.Void Remove(System.Object key)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Remove(::Il2CppObject* key);
  }; // System.Collections.IDictionary
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::IDictionary::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Collections::IDictionary::*)(::Il2CppObject*)>(&System::Collections::IDictionary::get_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::IDictionary*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::IDictionary::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::IDictionary::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::IDictionary::set_Item)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::IDictionary*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Collections::IDictionary::get_Keys
// Il2CppName: get_Keys
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (System::Collections::IDictionary::*)()>(&System::Collections::IDictionary::get_Keys)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::IDictionary*), "get_Keys", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::IDictionary::get_Values
// Il2CppName: get_Values
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (System::Collections::IDictionary::*)()>(&System::Collections::IDictionary::get_Values)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::IDictionary*), "get_Values", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::IDictionary::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::IDictionary::*)(::Il2CppObject*)>(&System::Collections::IDictionary::Contains)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::IDictionary*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
// Writing MetadataGetter for method: System::Collections::IDictionary::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::IDictionary::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::IDictionary::Add)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::IDictionary*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Collections::IDictionary::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::IDictionary::*)()>(&System::Collections::IDictionary::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::IDictionary*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::IDictionary::get_IsReadOnly
// Il2CppName: get_IsReadOnly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::IDictionary::*)()>(&System::Collections::IDictionary::get_IsReadOnly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::IDictionary*), "get_IsReadOnly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::IDictionary::get_IsFixedSize
// Il2CppName: get_IsFixedSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Collections::IDictionary::*)()>(&System::Collections::IDictionary::get_IsFixedSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::IDictionary*), "get_IsFixedSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::IDictionary::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionaryEnumerator* (System::Collections::IDictionary::*)()>(&System::Collections::IDictionary::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::IDictionary*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::IDictionary::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::IDictionary::*)(::Il2CppObject*)>(&System::Collections::IDictionary::Remove)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::IDictionary*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
