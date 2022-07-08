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
  // Forward declaring type: OVRCameraRig
  class OVRCameraRig;
  // Forward declaring type: SimpleCapsuleWithStickMovement
  class SimpleCapsuleWithStickMovement;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CapsuleCollider
  class CapsuleCollider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LocomotionController
  class LocomotionController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LocomotionController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocomotionController*, "", "LocomotionController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: LocomotionController
  // [TokenAttribute] Offset: FFFFFFFF
  class LocomotionController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public OVRCameraRig CameraRig
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::OVRCameraRig* CameraRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRCameraRig*) == 0x8);
    // public UnityEngine.CapsuleCollider CharacterController
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::CapsuleCollider* CharacterController;
    // Field size check
    static_assert(sizeof(::UnityEngine::CapsuleCollider*) == 0x8);
    // public SimpleCapsuleWithStickMovement PlayerController
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::SimpleCapsuleWithStickMovement* PlayerController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SimpleCapsuleWithStickMovement*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public OVRCameraRig CameraRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRCameraRig*& dyn_CameraRig();
    // Get instance field reference: public UnityEngine.CapsuleCollider CharacterController
    [[deprecated("Use field access instead!")]] ::UnityEngine::CapsuleCollider*& dyn_CharacterController();
    // Get instance field reference: public SimpleCapsuleWithStickMovement PlayerController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SimpleCapsuleWithStickMovement*& dyn_PlayerController();
    // private System.Void Start()
    // Offset: 0x1BE66D0
    void Start();
    // public System.Void .ctor()
    // Offset: 0x1BE677C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocomotionController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LocomotionController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocomotionController*, creationType>()));
    }
  }; // LocomotionController
  #pragma pack(pop)
  static check_size<sizeof(LocomotionController), 40 + sizeof(::GlobalNamespace::SimpleCapsuleWithStickMovement*)> __GlobalNamespace_LocomotionControllerSizeCheck;
  static_assert(sizeof(LocomotionController) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LocomotionController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LocomotionController::*)()>(&GlobalNamespace::LocomotionController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LocomotionController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LocomotionController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
