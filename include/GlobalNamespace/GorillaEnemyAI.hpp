// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.MonoBehaviourPun
#include "Photon/Pun/MonoBehaviourPun.hpp"
// Including type: Photon.Pun.IPunObservable
#include "Photon/Pun/IPunObservable.hpp"
// Including type: Photon.Realtime.IInRoomCallbacks
#include "Photon/Realtime/IInRoomCallbacks.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: Collision
  class Collision;
}
// Forward declaring namespace: UnityEngine::AI
namespace UnityEngine::AI {
  // Forward declaring type: NavMeshAgent
  class NavMeshAgent;
}
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonStream
  class PhotonStream;
  // Forward declaring type: PhotonMessageInfo
  struct PhotonMessageInfo;
}
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: Player
  class Player;
}
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaEnemyAI
  class GorillaEnemyAI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaEnemyAI);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaEnemyAI*, "", "GorillaEnemyAI");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: GorillaEnemyAI
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AF1968
  // [RequireComponent] Offset: AF1968
  class GorillaEnemyAI : public ::Photon::Pun::MonoBehaviourPun/*, public ::Photon::Pun::IPunObservable, public ::Photon::Realtime::IInRoomCallbacks*/ {
    public:
    public:
    // public UnityEngine.Transform playerTransform
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* playerTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.AI.NavMeshAgent agent
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AI::NavMeshAgent* agent;
    // Field size check
    static_assert(sizeof(::UnityEngine::AI::NavMeshAgent*) == 0x8);
    // private UnityEngine.Rigidbody r
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Rigidbody* r;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // private UnityEngine.Vector3 targetPosition
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 targetPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 targetRotation
    // Size: 0xC
    // Offset: 0x44
    ::UnityEngine::Vector3 targetRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single lerpValue
    // Size: 0x4
    // Offset: 0x50
    float lerpValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Photon::Pun::IPunObservable
    operator ::Photon::Pun::IPunObservable() noexcept {
      return *reinterpret_cast<::Photon::Pun::IPunObservable*>(this);
    }
    // Creating interface conversion operator: operator ::Photon::Realtime::IInRoomCallbacks
    operator ::Photon::Realtime::IInRoomCallbacks() noexcept {
      return *reinterpret_cast<::Photon::Realtime::IInRoomCallbacks*>(this);
    }
    // Get instance field reference: public UnityEngine.Transform playerTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_playerTransform();
    // Get instance field reference: private UnityEngine.AI.NavMeshAgent agent
    [[deprecated("Use field access instead!")]] ::UnityEngine::AI::NavMeshAgent*& dyn_agent();
    // Get instance field reference: private UnityEngine.Rigidbody r
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn_r();
    // Get instance field reference: private UnityEngine.Vector3 targetPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_targetPosition();
    // Get instance field reference: private UnityEngine.Vector3 targetRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_targetRotation();
    // Get instance field reference: public System.Single lerpValue
    [[deprecated("Use field access instead!")]] float& dyn_lerpValue();
    // private System.Void Start()
    // Offset: 0x1B69824
    void Start();
    // private System.Void Photon.Pun.IPunObservable.OnPhotonSerializeView(Photon.Pun.PhotonStream stream, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x1B698F0
    void Photon_Pun_IPunObservable_OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);
    // private System.Void Update()
    // Offset: 0x1B69A5C
    void Update();
    // private System.Void FindClosestPlayer()
    // Offset: 0x1B69D4C
    void FindClosestPlayer();
    // private System.Void OnCollisionEnter(UnityEngine.Collision collision)
    // Offset: 0x1B69F28
    void OnCollisionEnter(::UnityEngine::Collision* collision);
    // private System.Void Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched(Photon.Realtime.Player newMasterClient)
    // Offset: 0x1B69FE8
    void Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched(::Photon::Realtime::Player* newMasterClient);
    // private System.Void Photon.Realtime.IInRoomCallbacks.OnPlayerEnteredRoom(Photon.Realtime.Player newPlayer)
    // Offset: 0x1B6A088
    void Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom(::Photon::Realtime::Player* newPlayer);
    // private System.Void Photon.Realtime.IInRoomCallbacks.OnPlayerLeftRoom(Photon.Realtime.Player otherPlayer)
    // Offset: 0x1B6A08C
    void Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom(::Photon::Realtime::Player* otherPlayer);
    // private System.Void Photon.Realtime.IInRoomCallbacks.OnRoomPropertiesUpdate(ExitGames.Client.Photon.Hashtable propertiesThatChanged)
    // Offset: 0x1B6A090
    void Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable* propertiesThatChanged);
    // private System.Void Photon.Realtime.IInRoomCallbacks.OnPlayerPropertiesUpdate(Photon.Realtime.Player targetPlayer, ExitGames.Client.Photon.Hashtable changedProps)
    // Offset: 0x1B6A094
    void Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate(::Photon::Realtime::Player* targetPlayer, ::ExitGames::Client::Photon::Hashtable* changedProps);
    // public System.Void .ctor()
    // Offset: 0x1B6A098
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaEnemyAI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaEnemyAI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaEnemyAI*, creationType>()));
    }
  }; // GorillaEnemyAI
  #pragma pack(pop)
  static check_size<sizeof(GorillaEnemyAI), 80 + sizeof(float)> __GlobalNamespace_GorillaEnemyAISizeCheck;
  static_assert(sizeof(GorillaEnemyAI) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaEnemyAI::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaEnemyAI::*)()>(&GlobalNamespace::GorillaEnemyAI::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaEnemyAI*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaEnemyAI::Photon_Pun_IPunObservable_OnPhotonSerializeView
// Il2CppName: Photon.Pun.IPunObservable.OnPhotonSerializeView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaEnemyAI::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&GlobalNamespace::GorillaEnemyAI::Photon_Pun_IPunObservable_OnPhotonSerializeView)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonStream")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaEnemyAI*), "Photon.Pun.IPunObservable.OnPhotonSerializeView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaEnemyAI::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaEnemyAI::*)()>(&GlobalNamespace::GorillaEnemyAI::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaEnemyAI*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaEnemyAI::FindClosestPlayer
// Il2CppName: FindClosestPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaEnemyAI::*)()>(&GlobalNamespace::GorillaEnemyAI::FindClosestPlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaEnemyAI*), "FindClosestPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaEnemyAI::OnCollisionEnter
// Il2CppName: OnCollisionEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaEnemyAI::*)(::UnityEngine::Collision*)>(&GlobalNamespace::GorillaEnemyAI::OnCollisionEnter)> {
  static const MethodInfo* get() {
    static auto* collision = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collision")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaEnemyAI*), "OnCollisionEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collision});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaEnemyAI::Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched
// Il2CppName: Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaEnemyAI::*)(::Photon::Realtime::Player*)>(&GlobalNamespace::GorillaEnemyAI::Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched)> {
  static const MethodInfo* get() {
    static auto* newMasterClient = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaEnemyAI*), "Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newMasterClient});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaEnemyAI::Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom
// Il2CppName: Photon.Realtime.IInRoomCallbacks.OnPlayerEnteredRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaEnemyAI::*)(::Photon::Realtime::Player*)>(&GlobalNamespace::GorillaEnemyAI::Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom)> {
  static const MethodInfo* get() {
    static auto* newPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaEnemyAI*), "Photon.Realtime.IInRoomCallbacks.OnPlayerEnteredRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaEnemyAI::Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom
// Il2CppName: Photon.Realtime.IInRoomCallbacks.OnPlayerLeftRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaEnemyAI::*)(::Photon::Realtime::Player*)>(&GlobalNamespace::GorillaEnemyAI::Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom)> {
  static const MethodInfo* get() {
    static auto* otherPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaEnemyAI*), "Photon.Realtime.IInRoomCallbacks.OnPlayerLeftRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{otherPlayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaEnemyAI::Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate
// Il2CppName: Photon.Realtime.IInRoomCallbacks.OnRoomPropertiesUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaEnemyAI::*)(::ExitGames::Client::Photon::Hashtable*)>(&GlobalNamespace::GorillaEnemyAI::Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate)> {
  static const MethodInfo* get() {
    static auto* propertiesThatChanged = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "Hashtable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaEnemyAI*), "Photon.Realtime.IInRoomCallbacks.OnRoomPropertiesUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertiesThatChanged});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaEnemyAI::Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate
// Il2CppName: Photon.Realtime.IInRoomCallbacks.OnPlayerPropertiesUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaEnemyAI::*)(::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&GlobalNamespace::GorillaEnemyAI::Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate)> {
  static const MethodInfo* get() {
    static auto* targetPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    static auto* changedProps = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "Hashtable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaEnemyAI*), "Photon.Realtime.IInRoomCallbacks.OnPlayerPropertiesUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{targetPlayer, changedProps});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaEnemyAI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
