// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CompareInfo
  class CompareInfo;
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Forward declaring type: Comparer
  class Comparer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Comparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Comparer*, "System.Collections", "Comparer");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Comparer
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: A557CC
  class Comparer : public ::Il2CppObject/*, public ::System::Collections::IComparer, public ::System::Runtime::Serialization::ISerializable*/ {
    public:
    public:
    // private System.Globalization.CompareInfo m_compareInfo
    // Size: 0x8
    // Offset: 0x10
    ::System::Globalization::CompareInfo* m_compareInfo;
    // Field size check
    static_assert(sizeof(::System::Globalization::CompareInfo*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IComparer
    operator ::System::Collections::IComparer() noexcept {
      return *reinterpret_cast<::System::Collections::IComparer*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating conversion operator: operator ::System::Globalization::CompareInfo*
    constexpr operator ::System::Globalization::CompareInfo*() const noexcept {
      return m_compareInfo;
    }
    // Get static field: static public readonly System.Collections.Comparer Default
    static ::System::Collections::Comparer* _get_Default();
    // Set static field: static public readonly System.Collections.Comparer Default
    static void _set_Default(::System::Collections::Comparer* value);
    // Get static field: static public readonly System.Collections.Comparer DefaultInvariant
    static ::System::Collections::Comparer* _get_DefaultInvariant();
    // Set static field: static public readonly System.Collections.Comparer DefaultInvariant
    static void _set_DefaultInvariant(::System::Collections::Comparer* value);
    // Get instance field reference: private System.Globalization.CompareInfo m_compareInfo
    [[deprecated("Use field access instead!")]] ::System::Globalization::CompareInfo*& dyn_m_compareInfo();
    // public System.Void .ctor(System.Globalization.CultureInfo culture)
    // Offset: 0x13CBF18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Comparer* New_ctor(::System::Globalization::CultureInfo* culture) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Comparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Comparer*, creationType>(culture)));
    }
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x13CBFC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Comparer* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Comparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Comparer*, creationType>(info, context)));
    }
    // public System.Int32 Compare(System.Object a, System.Object b)
    // Offset: 0x13CAC44
    int Compare(::Il2CppObject* a, ::Il2CppObject* b);
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x13CC118
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // static private System.Void .cctor()
    // Offset: 0x13CC1D0
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x13CBEF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Comparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Comparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Comparer*, creationType>()));
    }
  }; // System.Collections.Comparer
  #pragma pack(pop)
  static check_size<sizeof(Comparer), 16 + sizeof(::System::Globalization::CompareInfo*)> __System_Collections_ComparerSizeCheck;
  static_assert(sizeof(Comparer) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Comparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Comparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Collections::Comparer::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Collections::Comparer::*)(::Il2CppObject*, ::Il2CppObject*)>(&System::Collections::Comparer::Compare)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Comparer*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: System::Collections::Comparer::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Collections::Comparer::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Collections::Comparer::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Comparer*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Collections::Comparer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Collections::Comparer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::Comparer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::Comparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
