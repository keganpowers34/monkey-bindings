// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaNetworking.CosmeticsController
#include "GorillaNetworking/CosmeticsController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114);
DEFINE_IL2CPP_ARG_TYPE(::GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114*, "GorillaNetworking", "CosmeticsController/<CheckCanGetDaily>d__114");
// Type namespace: GorillaNetworking
namespace GorillaNetworking {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: GorillaNetworking.CosmeticsController/<CheckCanGetDaily>d__114
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AF2050
  class CosmeticsController::$CheckCanGetDaily$d__114 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public GorillaNetworking.CosmeticsController <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GorillaNetworking::CosmeticsController* $$4__this;
    // Field size check
    static_assert(sizeof(::GorillaNetworking::CosmeticsController*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public GorillaNetworking.CosmeticsController <>4__this
    [[deprecated("Use field access instead!")]] ::GorillaNetworking::CosmeticsController*& dyn_$$4__this();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1BC4A08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CosmeticsController::$CheckCanGetDaily$d__114* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CosmeticsController::$CheckCanGetDaily$d__114*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1BC9C84
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1BC9C88
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1BC9F60
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1BC9F68
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1BC9FC8
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // GorillaNetworking.CosmeticsController/<CheckCanGetDaily>d__114
  #pragma pack(pop)
  static check_size<sizeof(CosmeticsController::$CheckCanGetDaily$d__114), 32 + sizeof(::GorillaNetworking::CosmeticsController*)> __GorillaNetworking_CosmeticsController_$CheckCanGetDaily$d__114SizeCheck;
  static_assert(sizeof(CosmeticsController::$CheckCanGetDaily$d__114) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114::*)()>(&GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114::*)()>(&GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114::*)()>(&GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114::*)()>(&GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114::*)()>(&GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::CosmeticsController::$CheckCanGetDaily$d__114*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
