// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaPressableButton
#include "GlobalNamespace/GorillaPressableButton.hpp"
// Including type: GorillaNetworking.CosmeticsController/CosmeticItem
#include "GorillaNetworking/CosmeticsController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HeadModel
  class HeadModel;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CosmeticStand
  class CosmeticStand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CosmeticStand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticStand*, "", "CosmeticStand");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: CosmeticStand
  // [TokenAttribute] Offset: FFFFFFFF
  class CosmeticStand : public ::GlobalNamespace::GorillaPressableButton {
    public:
    public:
    // public GorillaNetworking.CosmeticsController/CosmeticItem thisCosmeticItem
    // Size: 0x32
    // Offset: 0x58
    ::GorillaNetworking::CosmeticsController::CosmeticItem thisCosmeticItem;
    // Field size check
    static_assert(sizeof(::GorillaNetworking::CosmeticsController::CosmeticItem) == 0x32);
    // Padding between fields: thisCosmeticItem and: thisCosmeticName
    char __padding0[0x6] = {};
    // public System.String thisCosmeticName
    // Size: 0x8
    // Offset: 0x90
    ::StringW thisCosmeticName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public HeadModel thisHeadModel
    // Size: 0x8
    // Offset: 0x98
    ::GlobalNamespace::HeadModel* thisHeadModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HeadModel*) == 0x8);
    // public UnityEngine.UI.Text slotPriceText
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::UI::Text* slotPriceText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    public:
    // Get instance field reference: public GorillaNetworking.CosmeticsController/CosmeticItem thisCosmeticItem
    [[deprecated("Use field access instead!")]] ::GorillaNetworking::CosmeticsController::CosmeticItem& dyn_thisCosmeticItem();
    // Get instance field reference: public System.String thisCosmeticName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_thisCosmeticName();
    // Get instance field reference: public HeadModel thisHeadModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HeadModel*& dyn_thisHeadModel();
    // Get instance field reference: public UnityEngine.UI.Text slotPriceText
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_slotPriceText();
    // public System.Void InitializeCosmetic()
    // Offset: 0x1B62BC4
    void InitializeCosmetic();
    // private System.Boolean <InitializeCosmetic>b__4_0(GorillaNetworking.CosmeticsController/CosmeticItem x)
    // Offset: 0x1B62D98
    bool $InitializeCosmetic$b__4_0(::GorillaNetworking::CosmeticsController::CosmeticItem x);
    // public override System.Void ButtonActivation()
    // Offset: 0x1B62D18
    // Implemented from: GorillaPressableButton
    // Base method: System.Void GorillaPressableButton::ButtonActivation()
    void ButtonActivation();
    // public System.Void .ctor()
    // Offset: 0x1B62D90
    // Implemented from: GorillaPressableButton
    // Base method: System.Void GorillaPressableButton::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CosmeticStand* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CosmeticStand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CosmeticStand*, creationType>()));
    }
  }; // CosmeticStand
  #pragma pack(pop)
  static check_size<sizeof(CosmeticStand), 160 + sizeof(::UnityEngine::UI::Text*)> __GlobalNamespace_CosmeticStandSizeCheck;
  static_assert(sizeof(CosmeticStand) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CosmeticStand::InitializeCosmetic
// Il2CppName: InitializeCosmetic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CosmeticStand::*)()>(&GlobalNamespace::CosmeticStand::InitializeCosmetic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticStand*), "InitializeCosmetic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticStand::$InitializeCosmetic$b__4_0
// Il2CppName: <InitializeCosmetic>b__4_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CosmeticStand::*)(::GorillaNetworking::CosmeticsController::CosmeticItem)>(&GlobalNamespace::CosmeticStand::$InitializeCosmetic$b__4_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("GorillaNetworking", "CosmeticsController/CosmeticItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticStand*), "<InitializeCosmetic>b__4_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticStand::ButtonActivation
// Il2CppName: ButtonActivation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CosmeticStand::*)()>(&GlobalNamespace::CosmeticStand::ButtonActivation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CosmeticStand*), "ButtonActivation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CosmeticStand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
