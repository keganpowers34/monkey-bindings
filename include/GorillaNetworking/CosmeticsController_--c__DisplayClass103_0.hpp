// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaNetworking.CosmeticsController
#include "GorillaNetworking/CosmeticsController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::ClientModels
namespace PlayFab::ClientModels {
  // Forward declaring type: GetSharedGroupDataResult
  class GetSharedGroupDataResult;
}
// Forward declaring namespace: PlayFab
namespace PlayFab {
  // Forward declaring type: PlayFabError
  class PlayFabError;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaNetworking::CosmeticsController::$$c__DisplayClass103_0);
DEFINE_IL2CPP_ARG_TYPE(::GorillaNetworking::CosmeticsController::$$c__DisplayClass103_0*, "GorillaNetworking", "CosmeticsController/<>c__DisplayClass103_0");
// Type namespace: GorillaNetworking
namespace GorillaNetworking {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: GorillaNetworking.CosmeticsController/<>c__DisplayClass103_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AF2000
  class CosmeticsController::$$c__DisplayClass103_0 : public ::Il2CppObject {
    public:
    public:
    // public GorillaNetworking.CosmeticsController <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::GorillaNetworking::CosmeticsController* $$4__this;
    // Field size check
    static_assert(sizeof(::GorillaNetworking::CosmeticsController*) == 0x8);
    // public System.String itemToBuyID
    // Size: 0x8
    // Offset: 0x18
    ::StringW itemToBuyID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public GorillaNetworking.CosmeticsController <>4__this
    [[deprecated("Use field access instead!")]] ::GorillaNetworking::CosmeticsController*& dyn_$$4__this();
    // Get instance field reference: public System.String itemToBuyID
    [[deprecated("Use field access instead!")]] ::StringW& dyn_itemToBuyID();
    // public System.Void .ctor()
    // Offset: 0x1BC78F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CosmeticsController::$$c__DisplayClass103_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaNetworking::CosmeticsController::$$c__DisplayClass103_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CosmeticsController::$$c__DisplayClass103_0*, creationType>()));
    }
    // System.Void <CheckIfMyCosmeticsUpdated>b__0(PlayFab.ClientModels.GetSharedGroupDataResult result)
    // Offset: 0x1BC78F8
    void $CheckIfMyCosmeticsUpdated$b__0(::PlayFab::ClientModels::GetSharedGroupDataResult* result);
    // System.Void <CheckIfMyCosmeticsUpdated>b__1(PlayFab.PlayFabError error)
    // Offset: 0x1BC7BB4
    void $CheckIfMyCosmeticsUpdated$b__1(::PlayFab::PlayFabError* error);
  }; // GorillaNetworking.CosmeticsController/<>c__DisplayClass103_0
  #pragma pack(pop)
  static check_size<sizeof(CosmeticsController::$$c__DisplayClass103_0), 24 + sizeof(::StringW)> __GorillaNetworking_CosmeticsController_$$c__DisplayClass103_0SizeCheck;
  static_assert(sizeof(CosmeticsController::$$c__DisplayClass103_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaNetworking::CosmeticsController::$$c__DisplayClass103_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GorillaNetworking::CosmeticsController::$$c__DisplayClass103_0::$CheckIfMyCosmeticsUpdated$b__0
// Il2CppName: <CheckIfMyCosmeticsUpdated>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::CosmeticsController::$$c__DisplayClass103_0::*)(::PlayFab::ClientModels::GetSharedGroupDataResult*)>(&GorillaNetworking::CosmeticsController::$$c__DisplayClass103_0::$CheckIfMyCosmeticsUpdated$b__0)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("PlayFab.ClientModels", "GetSharedGroupDataResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::CosmeticsController::$$c__DisplayClass103_0*), "<CheckIfMyCosmeticsUpdated>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::CosmeticsController::$$c__DisplayClass103_0::$CheckIfMyCosmeticsUpdated$b__1
// Il2CppName: <CheckIfMyCosmeticsUpdated>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::CosmeticsController::$$c__DisplayClass103_0::*)(::PlayFab::PlayFabError*)>(&GorillaNetworking::CosmeticsController::$$c__DisplayClass103_0::$CheckIfMyCosmeticsUpdated$b__1)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("PlayFab", "PlayFabError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::CosmeticsController::$$c__DisplayClass103_0*), "<CheckIfMyCosmeticsUpdated>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
