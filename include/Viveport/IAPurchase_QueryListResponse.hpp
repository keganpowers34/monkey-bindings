// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Viveport.IAPurchase
#include "Viveport/IAPurchase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Viveport::IAPurchase::QueryListResponse);
DEFINE_IL2CPP_ARG_TYPE(::Viveport::IAPurchase::QueryListResponse*, "Viveport", "IAPurchase/QueryListResponse");
// Type namespace: Viveport
namespace Viveport {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Viveport.IAPurchase/QueryListResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class IAPurchase::QueryListResponse : public ::Il2CppObject {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xAF4214
    // private System.Int32 <total>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int total;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xAF4224
    // private System.Int32 <from>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int from;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xAF4234
    // private System.Int32 <to>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int to;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: to and: purchaseList
    char __padding2[0x4] = {};
    // public System.Collections.Generic.List`1<Viveport.IAPurchase/QueryResponse2> purchaseList
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::Viveport::IAPurchase::QueryResponse2*>* purchaseList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Viveport::IAPurchase::QueryResponse2*>*) == 0x8);
    public:
    // Get instance field reference: private System.Int32 <total>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$total$k__BackingField();
    // Get instance field reference: private System.Int32 <from>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$from$k__BackingField();
    // Get instance field reference: private System.Int32 <to>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$to$k__BackingField();
    // Get instance field reference: public System.Collections.Generic.List`1<Viveport.IAPurchase/QueryResponse2> purchaseList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Viveport::IAPurchase::QueryResponse2*>*& dyn_purchaseList();
    // public System.Int32 get_total()
    // Offset: 0x1C1A334
    int get_total();
    // public System.Void set_total(System.Int32 value)
    // Offset: 0x1C1A33C
    void set_total(int value);
    // public System.Int32 get_from()
    // Offset: 0x1C1A344
    int get_from();
    // public System.Void set_from(System.Int32 value)
    // Offset: 0x1C1A34C
    void set_from(int value);
    // public System.Int32 get_to()
    // Offset: 0x1C1A354
    int get_to();
    // public System.Void set_to(System.Int32 value)
    // Offset: 0x1C1A35C
    void set_to(int value);
    // public System.Void .ctor()
    // Offset: 0x1C1A364
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IAPurchase::QueryListResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::IAPurchase::QueryListResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IAPurchase::QueryListResponse*, creationType>()));
    }
  }; // Viveport.IAPurchase/QueryListResponse
  #pragma pack(pop)
  static check_size<sizeof(IAPurchase::QueryListResponse), 32 + sizeof(::System::Collections::Generic::List_1<::Viveport::IAPurchase::QueryResponse2*>*)> __Viveport_IAPurchase_QueryListResponseSizeCheck;
  static_assert(sizeof(IAPurchase::QueryListResponse) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryListResponse::get_total
// Il2CppName: get_total
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Viveport::IAPurchase::QueryListResponse::*)()>(&Viveport::IAPurchase::QueryListResponse::get_total)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::QueryListResponse*), "get_total", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryListResponse::set_total
// Il2CppName: set_total
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::QueryListResponse::*)(int)>(&Viveport::IAPurchase::QueryListResponse::set_total)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::QueryListResponse*), "set_total", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryListResponse::get_from
// Il2CppName: get_from
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Viveport::IAPurchase::QueryListResponse::*)()>(&Viveport::IAPurchase::QueryListResponse::get_from)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::QueryListResponse*), "get_from", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryListResponse::set_from
// Il2CppName: set_from
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::QueryListResponse::*)(int)>(&Viveport::IAPurchase::QueryListResponse::set_from)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::QueryListResponse*), "set_from", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryListResponse::get_to
// Il2CppName: get_to
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Viveport::IAPurchase::QueryListResponse::*)()>(&Viveport::IAPurchase::QueryListResponse::get_to)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::QueryListResponse*), "get_to", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryListResponse::set_to
// Il2CppName: set_to
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::QueryListResponse::*)(int)>(&Viveport::IAPurchase::QueryListResponse::set_to)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::QueryListResponse*), "set_to", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::QueryListResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
