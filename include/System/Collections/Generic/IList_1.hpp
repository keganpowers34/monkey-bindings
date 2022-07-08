// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.ICollection`1
#include "System/Collections/Generic/ICollection_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::IList_1, "System.Collections.Generic", "IList`1");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.IList`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: A56358
  // [TypeDependencyAttribute] Offset: A56358
  template<typename T>
  class IList_1/*, public ::System::Collections::Generic::ICollection_1<T>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::ICollection_1<T>
    operator ::System::Collections::Generic::ICollection_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::ICollection_1<T>*>(this);
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::IList_1::get_Item");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::Generic::IList_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // public System.Void set_Item(System.Int32 index, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Item(int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::IList_1::set_Item");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::Generic::IList_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, value);
    }
    // public System.Int32 IndexOf(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int IndexOf(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::IList_1::IndexOf");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::Generic::IList_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method, item);
    }
    // public System.Void Insert(System.Int32 index, T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Insert(int index, T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::IList_1::Insert");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::Generic::IList_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, item);
    }
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RemoveAt(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::IList_1::RemoveAt");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Collections::Generic::IList_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index);
    }
  }; // System.Collections.Generic.IList`1
  // Could not write size check! Type: System.Collections.Generic.IList`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
