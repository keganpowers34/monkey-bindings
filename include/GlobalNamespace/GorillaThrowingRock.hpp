// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaThrowable
#include "GlobalNamespace/GorillaThrowable.hpp"
// Including type: Photon.Pun.IPunInstantiateMagicCallback
#include "Photon/Pun/IPunInstantiateMagicCallback.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRRig
  class VRRig;
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonMessageInfo
  struct PhotonMessageInfo;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Collision
  class Collision;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaThrowingRock
  class GorillaThrowingRock;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaThrowingRock);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaThrowingRock*, "", "GorillaThrowingRock");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x198
  #pragma pack(push, 1)
  // Autogenerated type: GorillaThrowingRock
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaThrowingRock : public ::GlobalNamespace::GorillaThrowable/*, public ::Photon::Pun::IPunInstantiateMagicCallback*/ {
    public:
    public:
    // public System.Single bonkSpeedMin
    // Size: 0x4
    // Offset: 0x184
    float bonkSpeedMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single bonkSpeedMax
    // Size: 0x4
    // Offset: 0x188
    float bonkSpeedMax;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: bonkSpeedMax and: hitRig
    char __padding1[0x4] = {};
    // public VRRig hitRig
    // Size: 0x8
    // Offset: 0x190
    ::GlobalNamespace::VRRig* hitRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRRig*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Photon::Pun::IPunInstantiateMagicCallback
    operator ::Photon::Pun::IPunInstantiateMagicCallback() noexcept {
      return *reinterpret_cast<::Photon::Pun::IPunInstantiateMagicCallback*>(this);
    }
    // Get instance field reference: public System.Single bonkSpeedMin
    [[deprecated("Use field access instead!")]] float& dyn_bonkSpeedMin();
    // Get instance field reference: public System.Single bonkSpeedMax
    [[deprecated("Use field access instead!")]] float& dyn_bonkSpeedMax();
    // Get instance field reference: public VRRig hitRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRRig*& dyn_hitRig();
    // public System.Void OnPhotonInstantiate(Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x1B8A514
    void OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo info);
    // public System.Void OnTriggerEnter(UnityEngine.Collider other)
    // Offset: 0x1B8A6F0
    void OnTriggerEnter(::UnityEngine::Collider* other);
    // public override System.Void OnCollisionEnter(UnityEngine.Collision collision)
    // Offset: 0x1B8A518
    // Implemented from: GorillaThrowable
    // Base method: System.Void GorillaThrowable::OnCollisionEnter(UnityEngine.Collision collision)
    void OnCollisionEnter(::UnityEngine::Collision* collision);
    // public System.Void .ctor()
    // Offset: 0x1B8AA74
    // Implemented from: GorillaThrowable
    // Base method: System.Void GorillaThrowable::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaThrowingRock* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaThrowingRock::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaThrowingRock*, creationType>()));
    }
  }; // GorillaThrowingRock
  #pragma pack(pop)
  static check_size<sizeof(GorillaThrowingRock), 400 + sizeof(::GlobalNamespace::VRRig*)> __GlobalNamespace_GorillaThrowingRockSizeCheck;
  static_assert(sizeof(GorillaThrowingRock) == 0x198);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaThrowingRock::OnPhotonInstantiate
// Il2CppName: OnPhotonInstantiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaThrowingRock::*)(::Photon::Pun::PhotonMessageInfo)>(&GlobalNamespace::GorillaThrowingRock::OnPhotonInstantiate)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaThrowingRock*), "OnPhotonInstantiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaThrowingRock::OnTriggerEnter
// Il2CppName: OnTriggerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaThrowingRock::*)(::UnityEngine::Collider*)>(&GlobalNamespace::GorillaThrowingRock::OnTriggerEnter)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaThrowingRock*), "OnTriggerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaThrowingRock::OnCollisionEnter
// Il2CppName: OnCollisionEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaThrowingRock::*)(::UnityEngine::Collision*)>(&GlobalNamespace::GorillaThrowingRock::OnCollisionEnter)> {
  static const MethodInfo* get() {
    static auto* collision = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collision")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaThrowingRock*), "OnCollisionEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collision});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaThrowingRock::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
