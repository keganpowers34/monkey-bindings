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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Rigidbody
  class Rigidbody;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaPlaySpaceForces
  class GorillaPlaySpaceForces;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaPlaySpaceForces);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaPlaySpaceForces*, "", "GorillaPlaySpaceForces");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: GorillaPlaySpaceForces
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaPlaySpaceForces : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject rightHand
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* rightHand;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject leftHand
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* leftHand;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.Collider bodyCollider
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Collider* bodyCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    // private UnityEngine.Collider leftHandCollider
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Collider* leftHandCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    // private UnityEngine.Collider rightHandCollider
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Collider* rightHandCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    // public UnityEngine.Transform rightHandTransform
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Transform* rightHandTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform leftHandTransform
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Transform* leftHandTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Rigidbody leftHandRigidbody
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Rigidbody* leftHandRigidbody;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // private UnityEngine.Rigidbody rightHandRigidbody
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Rigidbody* rightHandRigidbody;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // public UnityEngine.Vector3 bodyColliderOffset
    // Size: 0xC
    // Offset: 0x60
    ::UnityEngine::Vector3 bodyColliderOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single forceConstant
    // Size: 0x4
    // Offset: 0x6C
    float forceConstant;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 lastLeftHandPosition
    // Size: 0xC
    // Offset: 0x70
    ::UnityEngine::Vector3 lastLeftHandPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lastRightHandPosition
    // Size: 0xC
    // Offset: 0x7C
    ::UnityEngine::Vector3 lastRightHandPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Rigidbody playspaceRigidbody
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::Rigidbody* playspaceRigidbody;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // public UnityEngine.Transform headsetTransform
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::Transform* headsetTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.GameObject rightHand
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_rightHand();
    // Get instance field reference: public UnityEngine.GameObject leftHand
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_leftHand();
    // Get instance field reference: public UnityEngine.Collider bodyCollider
    [[deprecated("Use field access instead!")]] ::UnityEngine::Collider*& dyn_bodyCollider();
    // Get instance field reference: private UnityEngine.Collider leftHandCollider
    [[deprecated("Use field access instead!")]] ::UnityEngine::Collider*& dyn_leftHandCollider();
    // Get instance field reference: private UnityEngine.Collider rightHandCollider
    [[deprecated("Use field access instead!")]] ::UnityEngine::Collider*& dyn_rightHandCollider();
    // Get instance field reference: public UnityEngine.Transform rightHandTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_rightHandTransform();
    // Get instance field reference: public UnityEngine.Transform leftHandTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_leftHandTransform();
    // Get instance field reference: private UnityEngine.Rigidbody leftHandRigidbody
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn_leftHandRigidbody();
    // Get instance field reference: private UnityEngine.Rigidbody rightHandRigidbody
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn_rightHandRigidbody();
    // Get instance field reference: public UnityEngine.Vector3 bodyColliderOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_bodyColliderOffset();
    // Get instance field reference: public System.Single forceConstant
    [[deprecated("Use field access instead!")]] float& dyn_forceConstant();
    // Get instance field reference: private UnityEngine.Vector3 lastLeftHandPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastLeftHandPosition();
    // Get instance field reference: private UnityEngine.Vector3 lastRightHandPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastRightHandPosition();
    // Get instance field reference: private UnityEngine.Rigidbody playspaceRigidbody
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn_playspaceRigidbody();
    // Get instance field reference: public UnityEngine.Transform headsetTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_headsetTransform();
    // private System.Void Start()
    // Offset: 0x1B7B638
    void Start();
    // private System.Void FixedUpdate()
    // Offset: 0x1B7B70C
    void FixedUpdate();
    // public System.Void .ctor()
    // Offset: 0x1B7B820
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaPlaySpaceForces* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaPlaySpaceForces::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaPlaySpaceForces*, creationType>()));
    }
  }; // GorillaPlaySpaceForces
  #pragma pack(pop)
  static check_size<sizeof(GorillaPlaySpaceForces), 144 + sizeof(::UnityEngine::Transform*)> __GlobalNamespace_GorillaPlaySpaceForcesSizeCheck;
  static_assert(sizeof(GorillaPlaySpaceForces) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaPlaySpaceForces::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaPlaySpaceForces::*)()>(&GlobalNamespace::GorillaPlaySpaceForces::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaPlaySpaceForces*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaPlaySpaceForces::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaPlaySpaceForces::*)()>(&GlobalNamespace::GorillaPlaySpaceForces::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaPlaySpaceForces*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaPlaySpaceForces::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
