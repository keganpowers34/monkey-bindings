// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GorillaSceneCamera
  class GorillaSceneCamera;
  // Forward declaring type: GorillaCameraTriggerIndex
  class GorillaCameraTriggerIndex;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaCameraSceneTrigger
  class GorillaCameraSceneTrigger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaCameraSceneTrigger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaCameraSceneTrigger*, "", "GorillaCameraSceneTrigger");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: GorillaCameraSceneTrigger
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaCameraSceneTrigger : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public GorillaSceneCamera sceneCamera
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::GorillaSceneCamera* sceneCamera;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GorillaSceneCamera*) == 0x8);
    // public GorillaCameraTriggerIndex currentSceneTrigger
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::GorillaCameraTriggerIndex* currentSceneTrigger;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GorillaCameraTriggerIndex*) == 0x8);
    // public GorillaCameraTriggerIndex mostRecentSceneTrigger
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::GorillaCameraTriggerIndex* mostRecentSceneTrigger;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GorillaCameraTriggerIndex*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public GorillaSceneCamera sceneCamera
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GorillaSceneCamera*& dyn_sceneCamera();
    // Get instance field reference: public GorillaCameraTriggerIndex currentSceneTrigger
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GorillaCameraTriggerIndex*& dyn_currentSceneTrigger();
    // Get instance field reference: public GorillaCameraTriggerIndex mostRecentSceneTrigger
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GorillaCameraTriggerIndex*& dyn_mostRecentSceneTrigger();
    // public System.Void ChangeScene(GorillaCameraTriggerIndex triggerLeft)
    // Offset: 0x1B683B8
    void ChangeScene(::GlobalNamespace::GorillaCameraTriggerIndex* triggerLeft);
    // public System.Void .ctor()
    // Offset: 0x1B684CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaCameraSceneTrigger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaCameraSceneTrigger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaCameraSceneTrigger*, creationType>()));
    }
  }; // GorillaCameraSceneTrigger
  #pragma pack(pop)
  static check_size<sizeof(GorillaCameraSceneTrigger), 40 + sizeof(::GlobalNamespace::GorillaCameraTriggerIndex*)> __GlobalNamespace_GorillaCameraSceneTriggerSizeCheck;
  static_assert(sizeof(GorillaCameraSceneTrigger) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaCameraSceneTrigger::ChangeScene
// Il2CppName: ChangeScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaCameraSceneTrigger::*)(::GlobalNamespace::GorillaCameraTriggerIndex*)>(&GlobalNamespace::GorillaCameraSceneTrigger::ChangeScene)> {
  static const MethodInfo* get() {
    static auto* triggerLeft = &::il2cpp_utils::GetClassFromName("", "GorillaCameraTriggerIndex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaCameraSceneTrigger*), "ChangeScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{triggerLeft});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaCameraSceneTrigger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
