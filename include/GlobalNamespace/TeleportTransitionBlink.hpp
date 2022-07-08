// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TeleportTransition
#include "GlobalNamespace/TeleportTransition.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TeleportTransitionBlink
  class TeleportTransitionBlink;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TeleportTransitionBlink);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TeleportTransitionBlink*, "", "TeleportTransitionBlink");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: TeleportTransitionBlink
  // [TokenAttribute] Offset: FFFFFFFF
  class TeleportTransitionBlink : public ::GlobalNamespace::TeleportTransition {
    public:
    // Writing base type padding for base size: 0x21 to desired offset: 0x24
    char ___base_padding[0x3] = {};
    // Nested type: ::GlobalNamespace::TeleportTransitionBlink::$BlinkCoroutine$d__4
    class $BlinkCoroutine$d__4;
    public:
    // [TooltipAttribute] Offset: 0xAF2EE0
    // [RangeAttribute] Offset: 0xAF2EE0
    // public System.Single TransitionDuration
    // Size: 0x4
    // Offset: 0x24
    float TransitionDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAF2F38
    // [RangeAttribute] Offset: 0xAF2F38
    // public System.Single TeleportDelay
    // Size: 0x4
    // Offset: 0x28
    float TeleportDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: TeleportDelay and: FadeLevels
    char __padding1[0x4] = {};
    // [TooltipAttribute] Offset: 0xAF2F8C
    // public UnityEngine.AnimationCurve FadeLevels
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AnimationCurve* FadeLevels;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    public:
    // Get instance field reference: public System.Single TransitionDuration
    [[deprecated("Use field access instead!")]] float& dyn_TransitionDuration();
    // Get instance field reference: public System.Single TeleportDelay
    [[deprecated("Use field access instead!")]] float& dyn_TeleportDelay();
    // Get instance field reference: public UnityEngine.AnimationCurve FadeLevels
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_FadeLevels();
    // protected System.Collections.IEnumerator BlinkCoroutine()
    // Offset: 0x1BA438C
    ::System::Collections::IEnumerator* BlinkCoroutine();
    // protected override System.Void LocomotionTeleportOnEnterStateTeleporting()
    // Offset: 0x1BA4360
    // Implemented from: TeleportTransition
    // Base method: System.Void TeleportTransition::LocomotionTeleportOnEnterStateTeleporting()
    void LocomotionTeleportOnEnterStateTeleporting();
    // public System.Void .ctor()
    // Offset: 0x1BA4428
    // Implemented from: TeleportTransition
    // Base method: System.Void TeleportTransition::.ctor()
    // Base method: System.Void TeleportSupport::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeleportTransitionBlink* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TeleportTransitionBlink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeleportTransitionBlink*, creationType>()));
    }
  }; // TeleportTransitionBlink
  #pragma pack(pop)
  static check_size<sizeof(TeleportTransitionBlink), 48 + sizeof(::UnityEngine::AnimationCurve*)> __GlobalNamespace_TeleportTransitionBlinkSizeCheck;
  static_assert(sizeof(TeleportTransitionBlink) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TeleportTransitionBlink::BlinkCoroutine
// Il2CppName: BlinkCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::TeleportTransitionBlink::*)()>(&GlobalNamespace::TeleportTransitionBlink::BlinkCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportTransitionBlink*), "BlinkCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportTransitionBlink::LocomotionTeleportOnEnterStateTeleporting
// Il2CppName: LocomotionTeleportOnEnterStateTeleporting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportTransitionBlink::*)()>(&GlobalNamespace::TeleportTransitionBlink::LocomotionTeleportOnEnterStateTeleporting)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportTransitionBlink*), "LocomotionTeleportOnEnterStateTeleporting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportTransitionBlink::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
