// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.MonoBehaviourPunCallbacks
#include "Photon/Pun/MonoBehaviourPunCallbacks.hpp"
// Including type: Photon.Realtime.IOnEventCallback
#include "Photon/Realtime/IOnEventCallback.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GorillaGameManager
  class GorillaGameManager;
  // Forward declaring type: GorillaPlayerScoreboardLine
  class GorillaPlayerScoreboardLine;
  // Forward declaring type: VRRig
  class VRRig;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: Photon::Realtime
namespace Photon::Realtime {
  // Forward declaring type: Player
  class Player;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: ExitGames::Client::Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: EventData
  class EventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaScoreBoard
  class GorillaScoreBoard;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaScoreBoard);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaScoreBoard*, "", "GorillaScoreBoard");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: GorillaScoreBoard
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaScoreBoard : public ::Photon::Pun::MonoBehaviourPunCallbacks/*, public ::Photon::Realtime::IOnEventCallback*/ {
    public:
    // Nested type: ::GlobalNamespace::GorillaScoreBoard::$InfrequentUpdateCoroutine$d__16
    class $InfrequentUpdateCoroutine$d__16;
    // Nested type: ::GlobalNamespace::GorillaScoreBoard::$$c
    class $$c;
    // Nested type: ::GlobalNamespace::GorillaScoreBoard::$RefreshData$d__21
    class $RefreshData$d__21;
    public:
    // public UnityEngine.GameObject scoreBoardLinePrefab
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* scoreBoardLinePrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Int32 startingYValue
    // Size: 0x4
    // Offset: 0x28
    int startingYValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 lineHeight
    // Size: 0x4
    // Offset: 0x2C
    int lineHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public GorillaGameManager gameManager
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::GorillaGameManager* gameManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GorillaGameManager*) == 0x8);
    // public System.String gameType
    // Size: 0x8
    // Offset: 0x38
    ::StringW gameType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean includeMMR
    // Size: 0x1
    // Offset: 0x40
    bool includeMMR;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isActive
    // Size: 0x1
    // Offset: 0x41
    bool isActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isActive and: lines
    char __padding6[0x6] = {};
    // public System.Collections.Generic.List`1<GorillaPlayerScoreboardLine> lines
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaPlayerScoreboardLine*>* lines;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::GorillaPlayerScoreboardLine*>*) == 0x8);
    // public UnityEngine.UI.Text boardText
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::UI::Text* boardText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // public UnityEngine.UI.Text buttonText
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::UI::Text* buttonText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private Photon.Realtime.Player playerForVRRig
    // Size: 0x8
    // Offset: 0x60
    ::Photon::Realtime::Player* playerForVRRig;
    // Field size check
    static_assert(sizeof(::Photon::Realtime::Player*) == 0x8);
    // private System.Int32 i
    // Size: 0x4
    // Offset: 0x68
    int i;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: i and: currentRig
    char __padding11[0x4] = {};
    // private VRRig currentRig
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::VRRig* currentRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRRig*) == 0x8);
    // private Photon.Realtime.Player outPlayer
    // Size: 0x8
    // Offset: 0x78
    ::Photon::Realtime::Player* outPlayer;
    // Field size check
    static_assert(sizeof(::Photon::Realtime::Player*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Photon::Realtime::IOnEventCallback
    operator ::Photon::Realtime::IOnEventCallback() noexcept {
      return *reinterpret_cast<::Photon::Realtime::IOnEventCallback*>(this);
    }
    // Get instance field reference: public UnityEngine.GameObject scoreBoardLinePrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_scoreBoardLinePrefab();
    // Get instance field reference: public System.Int32 startingYValue
    [[deprecated("Use field access instead!")]] int& dyn_startingYValue();
    // Get instance field reference: public System.Int32 lineHeight
    [[deprecated("Use field access instead!")]] int& dyn_lineHeight();
    // Get instance field reference: public GorillaGameManager gameManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GorillaGameManager*& dyn_gameManager();
    // Get instance field reference: public System.String gameType
    [[deprecated("Use field access instead!")]] ::StringW& dyn_gameType();
    // Get instance field reference: public System.Boolean includeMMR
    [[deprecated("Use field access instead!")]] bool& dyn_includeMMR();
    // Get instance field reference: public System.Boolean isActive
    [[deprecated("Use field access instead!")]] bool& dyn_isActive();
    // Get instance field reference: public System.Collections.Generic.List`1<GorillaPlayerScoreboardLine> lines
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::GorillaPlayerScoreboardLine*>*& dyn_lines();
    // Get instance field reference: public UnityEngine.UI.Text boardText
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_boardText();
    // Get instance field reference: public UnityEngine.UI.Text buttonText
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_buttonText();
    // Get instance field reference: private Photon.Realtime.Player playerForVRRig
    [[deprecated("Use field access instead!")]] ::Photon::Realtime::Player*& dyn_playerForVRRig();
    // Get instance field reference: private System.Int32 i
    [[deprecated("Use field access instead!")]] int& dyn_i();
    // Get instance field reference: private VRRig currentRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRRig*& dyn_currentRig();
    // Get instance field reference: private Photon.Realtime.Player outPlayer
    [[deprecated("Use field access instead!")]] ::Photon::Realtime::Player*& dyn_outPlayer();
    // public System.Void Awake()
    // Offset: 0x1B7FC68
    void Awake();
    // public System.String GetBeginningString()
    // Offset: 0x1B7FD68
    ::StringW GetBeginningString();
    // private System.Collections.IEnumerator InfrequentUpdateCoroutine()
    // Offset: 0x1B7FF64
    ::System::Collections::IEnumerator* InfrequentUpdateCoroutine();
    // private System.Void InfrequentUpdate()
    // Offset: 0x1B80000
    void InfrequentUpdate();
    // public System.Void RedrawPlayerLines()
    // Offset: 0x1B7CE3C
    void RedrawPlayerLines();
    // private System.Void Photon.Realtime.IOnEventCallback.OnEvent(ExitGames.Client.Photon.EventData photonEvent)
    // Offset: 0x1B80984
    void Photon_Realtime_IOnEventCallback_OnEvent(::ExitGames::Client::Photon::EventData* photonEvent);
    // public System.Collections.IEnumerator RefreshData(System.Int32 actorNumber1, System.Int32 actorNumber2)
    // Offset: 0x1B80988
    ::System::Collections::IEnumerator* RefreshData(int actorNumber1, int actorNumber2);
    // private System.Int32 GetActorIDFromUserID(System.String userID)
    // Offset: 0x1B80A38
    int GetActorIDFromUserID(::StringW userID);
    // public System.String NormalizeName(System.Boolean doIt, System.String text)
    // Offset: 0x1B80820
    ::StringW NormalizeName(bool doIt, ::StringW text);
    // public System.Void .ctor()
    // Offset: 0x1B80B14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaScoreBoard* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaScoreBoard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaScoreBoard*, creationType>()));
    }
    // public override System.Void OnPlayerLeftRoom(Photon.Realtime.Player otherPlayer)
    // Offset: 0x1B8081C
    // Implemented from: Photon.Pun.MonoBehaviourPunCallbacks
    // Base method: System.Void MonoBehaviourPunCallbacks::OnPlayerLeftRoom(Photon.Realtime.Player otherPlayer)
    void OnPlayerLeftRoom(::Photon::Realtime::Player* otherPlayer);
  }; // GorillaScoreBoard
  #pragma pack(pop)
  static check_size<sizeof(GorillaScoreBoard), 120 + sizeof(::Photon::Realtime::Player*)> __GlobalNamespace_GorillaScoreBoardSizeCheck;
  static_assert(sizeof(GorillaScoreBoard) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreBoard::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaScoreBoard::*)()>(&GlobalNamespace::GorillaScoreBoard::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreBoard*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreBoard::GetBeginningString
// Il2CppName: GetBeginningString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GorillaScoreBoard::*)()>(&GlobalNamespace::GorillaScoreBoard::GetBeginningString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreBoard*), "GetBeginningString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreBoard::InfrequentUpdateCoroutine
// Il2CppName: InfrequentUpdateCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::GorillaScoreBoard::*)()>(&GlobalNamespace::GorillaScoreBoard::InfrequentUpdateCoroutine)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreBoard*), "InfrequentUpdateCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreBoard::InfrequentUpdate
// Il2CppName: InfrequentUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaScoreBoard::*)()>(&GlobalNamespace::GorillaScoreBoard::InfrequentUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreBoard*), "InfrequentUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreBoard::RedrawPlayerLines
// Il2CppName: RedrawPlayerLines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaScoreBoard::*)()>(&GlobalNamespace::GorillaScoreBoard::RedrawPlayerLines)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreBoard*), "RedrawPlayerLines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreBoard::Photon_Realtime_IOnEventCallback_OnEvent
// Il2CppName: Photon.Realtime.IOnEventCallback.OnEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaScoreBoard::*)(::ExitGames::Client::Photon::EventData*)>(&GlobalNamespace::GorillaScoreBoard::Photon_Realtime_IOnEventCallback_OnEvent)> {
  static const MethodInfo* get() {
    static auto* photonEvent = &::il2cpp_utils::GetClassFromName("ExitGames.Client.Photon", "EventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreBoard*), "Photon.Realtime.IOnEventCallback.OnEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{photonEvent});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreBoard::RefreshData
// Il2CppName: RefreshData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::GorillaScoreBoard::*)(int, int)>(&GlobalNamespace::GorillaScoreBoard::RefreshData)> {
  static const MethodInfo* get() {
    static auto* actorNumber1 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* actorNumber2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreBoard*), "RefreshData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{actorNumber1, actorNumber2});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreBoard::GetActorIDFromUserID
// Il2CppName: GetActorIDFromUserID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::GorillaScoreBoard::*)(::StringW)>(&GlobalNamespace::GorillaScoreBoard::GetActorIDFromUserID)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreBoard*), "GetActorIDFromUserID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreBoard::NormalizeName
// Il2CppName: NormalizeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GorillaScoreBoard::*)(bool, ::StringW)>(&GlobalNamespace::GorillaScoreBoard::NormalizeName)> {
  static const MethodInfo* get() {
    static auto* doIt = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreBoard*), "NormalizeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{doIt, text});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreBoard::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreBoard::OnPlayerLeftRoom
// Il2CppName: OnPlayerLeftRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaScoreBoard::*)(::Photon::Realtime::Player*)>(&GlobalNamespace::GorillaScoreBoard::OnPlayerLeftRoom)> {
  static const MethodInfo* get() {
    static auto* otherPlayer = &::il2cpp_utils::GetClassFromName("Photon.Realtime", "Player")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreBoard*), "OnPlayerLeftRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{otherPlayer});
  }
};
