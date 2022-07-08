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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Viveport::IAPurchase::StatusDetail);
DEFINE_IL2CPP_ARG_TYPE(::Viveport::IAPurchase::StatusDetail*, "Viveport", "IAPurchase/StatusDetail");
// Type namespace: Viveport
namespace Viveport {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Viveport.IAPurchase/StatusDetail
  // [TokenAttribute] Offset: FFFFFFFF
  class IAPurchase::StatusDetail : public ::Il2CppObject {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xAF4274
    // private System.Int64 <date_next_charge>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    int64_t date_next_charge;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAF4284
    // private Viveport.IAPurchase/StatusDetailTransaction[] <transactions>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Viveport::IAPurchase::StatusDetailTransaction*> transactions;
    // Field size check
    static_assert(sizeof(::ArrayW<::Viveport::IAPurchase::StatusDetailTransaction*>) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAF4294
    // private System.String <cancel_reason>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW cancel_reason;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Int64 <date_next_charge>k__BackingField
    [[deprecated("Use field access instead!")]] int64_t& dyn_$date_next_charge$k__BackingField();
    // Get instance field reference: private Viveport.IAPurchase/StatusDetailTransaction[] <transactions>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<::Viveport::IAPurchase::StatusDetailTransaction*>& dyn_$transactions$k__BackingField();
    // Get instance field reference: private System.String <cancel_reason>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$cancel_reason$k__BackingField();
    // public System.Int64 get_date_next_charge()
    // Offset: 0x1C1A484
    int64_t get_date_next_charge();
    // public System.Void set_date_next_charge(System.Int64 value)
    // Offset: 0x1C1A48C
    void set_date_next_charge(int64_t value);
    // public Viveport.IAPurchase/StatusDetailTransaction[] get_transactions()
    // Offset: 0x1C1A494
    ::ArrayW<::Viveport::IAPurchase::StatusDetailTransaction*> get_transactions();
    // public System.Void set_transactions(Viveport.IAPurchase/StatusDetailTransaction[] value)
    // Offset: 0x1C1A49C
    void set_transactions(::ArrayW<::Viveport::IAPurchase::StatusDetailTransaction*> value);
    // public System.String get_cancel_reason()
    // Offset: 0x1C1A4A4
    ::StringW get_cancel_reason();
    // public System.Void set_cancel_reason(System.String value)
    // Offset: 0x1C1A4AC
    void set_cancel_reason(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x1C1A4B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IAPurchase::StatusDetail* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::IAPurchase::StatusDetail::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IAPurchase::StatusDetail*, creationType>()));
    }
  }; // Viveport.IAPurchase/StatusDetail
  #pragma pack(pop)
  static check_size<sizeof(IAPurchase::StatusDetail), 32 + sizeof(::StringW)> __Viveport_IAPurchase_StatusDetailSizeCheck;
  static_assert(sizeof(IAPurchase::StatusDetail) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Viveport::IAPurchase::StatusDetail::get_date_next_charge
// Il2CppName: get_date_next_charge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Viveport::IAPurchase::StatusDetail::*)()>(&Viveport::IAPurchase::StatusDetail::get_date_next_charge)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::StatusDetail*), "get_date_next_charge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::StatusDetail::set_date_next_charge
// Il2CppName: set_date_next_charge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::StatusDetail::*)(int64_t)>(&Viveport::IAPurchase::StatusDetail::set_date_next_charge)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::StatusDetail*), "set_date_next_charge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::StatusDetail::get_transactions
// Il2CppName: get_transactions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Viveport::IAPurchase::StatusDetailTransaction*> (Viveport::IAPurchase::StatusDetail::*)()>(&Viveport::IAPurchase::StatusDetail::get_transactions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::StatusDetail*), "get_transactions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::StatusDetail::set_transactions
// Il2CppName: set_transactions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::StatusDetail::*)(::ArrayW<::Viveport::IAPurchase::StatusDetailTransaction*>)>(&Viveport::IAPurchase::StatusDetail::set_transactions)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Viveport", "IAPurchase/StatusDetailTransaction"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::StatusDetail*), "set_transactions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::StatusDetail::get_cancel_reason
// Il2CppName: get_cancel_reason
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Viveport::IAPurchase::StatusDetail::*)()>(&Viveport::IAPurchase::StatusDetail::get_cancel_reason)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::StatusDetail*), "get_cancel_reason", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::StatusDetail::set_cancel_reason
// Il2CppName: set_cancel_reason
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::IAPurchase::StatusDetail::*)(::StringW)>(&Viveport::IAPurchase::StatusDetail::set_cancel_reason)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::IAPurchase::StatusDetail*), "set_cancel_reason", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Viveport::IAPurchase::StatusDetail::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
