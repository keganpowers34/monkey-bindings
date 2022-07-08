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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SimpleCapsuleWithStickMovement
  class SimpleCapsuleWithStickMovement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SimpleCapsuleWithStickMovement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleCapsuleWithStickMovement*, "", "SimpleCapsuleWithStickMovement");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: SimpleCapsuleWithStickMovement
  // [TokenAttribute] Offset: FFFFFFFF
  class SimpleCapsuleWithStickMovement : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Boolean EnableLinearMovement
    // Size: 0x1
    // Offset: 0x18
    bool EnableLinearMovement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean EnableRotation
    // Size: 0x1
    // Offset: 0x19
    bool EnableRotation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean HMDRotatesPlayer
    // Size: 0x1
    // Offset: 0x1A
    bool HMDRotatesPlayer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean RotationEitherThumbstick
    // Size: 0x1
    // Offset: 0x1B
    bool RotationEitherThumbstick;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Single RotationAngle
    // Size: 0x4
    // Offset: 0x1C
    float RotationAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Speed
    // Size: 0x4
    // Offset: 0x20
    float Speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: Speed and: CameraRig
    char __padding5[0x4] = {};
    // public OVRCameraRig CameraRig
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::OVRCameraRig* CameraRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRCameraRig*) == 0x8);
    // private System.Boolean ReadyToSnapTurn
    // Size: 0x1
    // Offset: 0x30
    bool ReadyToSnapTurn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ReadyToSnapTurn and: rigidbody
    char __padding7[0x7] = {};
    // private UnityEngine.Rigidbody _rigidbody
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Rigidbody* rigidbody;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAF2854
    // private System.Action CameraUpdated
    // Size: 0x8
    // Offset: 0x40
    ::System::Action* CameraUpdated;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAF2864
    // private System.Action PreCharacterMove
    // Size: 0x8
    // Offset: 0x48
    ::System::Action* PreCharacterMove;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean EnableLinearMovement
    [[deprecated("Use field access instead!")]] bool& dyn_EnableLinearMovement();
    // Get instance field reference: public System.Boolean EnableRotation
    [[deprecated("Use field access instead!")]] bool& dyn_EnableRotation();
    // Get instance field reference: public System.Boolean HMDRotatesPlayer
    [[deprecated("Use field access instead!")]] bool& dyn_HMDRotatesPlayer();
    // Get instance field reference: public System.Boolean RotationEitherThumbstick
    [[deprecated("Use field access instead!")]] bool& dyn_RotationEitherThumbstick();
    // Get instance field reference: public System.Single RotationAngle
    [[deprecated("Use field access instead!")]] float& dyn_RotationAngle();
    // Get instance field reference: public System.Single Speed
    [[deprecated("Use field access instead!")]] float& dyn_Speed();
    // Get instance field reference: public OVRCameraRig CameraRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRCameraRig*& dyn_CameraRig();
    // Get instance field reference: private System.Boolean ReadyToSnapTurn
    [[deprecated("Use field access instead!")]] bool& dyn_ReadyToSnapTurn();
    // Get instance field reference: private UnityEngine.Rigidbody _rigidbody
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn__rigidbody();
    // Get instance field reference: private System.Action CameraUpdated
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_CameraUpdated();
    // Get instance field reference: private System.Action PreCharacterMove
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_PreCharacterMove();
    // public System.Void add_CameraUpdated(System.Action value)
    // Offset: 0x1B9DB84
    void add_CameraUpdated(::System::Action* value);
    // public System.Void remove_CameraUpdated(System.Action value)
    // Offset: 0x1B9DC28
    void remove_CameraUpdated(::System::Action* value);
    // public System.Void add_PreCharacterMove(System.Action value)
    // Offset: 0x1B9DCCC
    void add_PreCharacterMove(::System::Action* value);
    // public System.Void remove_PreCharacterMove(System.Action value)
    // Offset: 0x1B9DD70
    void remove_PreCharacterMove(::System::Action* value);
    // private System.Void Awake()
    // Offset: 0x1B9DE14
    void Awake();
    // private System.Void Start()
    // Offset: 0x1B9DEBC
    void Start();
    // private System.Void FixedUpdate()
    // Offset: 0x1B9DEC0
    void FixedUpdate();
    // private System.Void RotatePlayerToHMD()
    // Offset: 0x1B9DF34
    void RotatePlayerToHMD();
    // private System.Void StickMovement()
    // Offset: 0x1B9E0A4
    void StickMovement();
    // private System.Void SnapTurn()
    // Offset: 0x1B9E388
    void SnapTurn();
    // public System.Void .ctor()
    // Offset: 0x1B9E578
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SimpleCapsuleWithStickMovement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SimpleCapsuleWithStickMovement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SimpleCapsuleWithStickMovement*, creationType>()));
    }
  }; // SimpleCapsuleWithStickMovement
  #pragma pack(pop)
  static check_size<sizeof(SimpleCapsuleWithStickMovement), 72 + sizeof(::System::Action*)> __GlobalNamespace_SimpleCapsuleWithStickMovementSizeCheck;
  static_assert(sizeof(SimpleCapsuleWithStickMovement) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SimpleCapsuleWithStickMovement::add_CameraUpdated
// Il2CppName: add_CameraUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleCapsuleWithStickMovement::*)(::System::Action*)>(&GlobalNamespace::SimpleCapsuleWithStickMovement::add_CameraUpdated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleCapsuleWithStickMovement*), "add_CameraUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleCapsuleWithStickMovement::remove_CameraUpdated
// Il2CppName: remove_CameraUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleCapsuleWithStickMovement::*)(::System::Action*)>(&GlobalNamespace::SimpleCapsuleWithStickMovement::remove_CameraUpdated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleCapsuleWithStickMovement*), "remove_CameraUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleCapsuleWithStickMovement::add_PreCharacterMove
// Il2CppName: add_PreCharacterMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleCapsuleWithStickMovement::*)(::System::Action*)>(&GlobalNamespace::SimpleCapsuleWithStickMovement::add_PreCharacterMove)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleCapsuleWithStickMovement*), "add_PreCharacterMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleCapsuleWithStickMovement::remove_PreCharacterMove
// Il2CppName: remove_PreCharacterMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleCapsuleWithStickMovement::*)(::System::Action*)>(&GlobalNamespace::SimpleCapsuleWithStickMovement::remove_PreCharacterMove)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleCapsuleWithStickMovement*), "remove_PreCharacterMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleCapsuleWithStickMovement::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleCapsuleWithStickMovement::*)()>(&GlobalNamespace::SimpleCapsuleWithStickMovement::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleCapsuleWithStickMovement*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleCapsuleWithStickMovement::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleCapsuleWithStickMovement::*)()>(&GlobalNamespace::SimpleCapsuleWithStickMovement::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleCapsuleWithStickMovement*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleCapsuleWithStickMovement::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleCapsuleWithStickMovement::*)()>(&GlobalNamespace::SimpleCapsuleWithStickMovement::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleCapsuleWithStickMovement*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleCapsuleWithStickMovement::RotatePlayerToHMD
// Il2CppName: RotatePlayerToHMD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleCapsuleWithStickMovement::*)()>(&GlobalNamespace::SimpleCapsuleWithStickMovement::RotatePlayerToHMD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleCapsuleWithStickMovement*), "RotatePlayerToHMD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleCapsuleWithStickMovement::StickMovement
// Il2CppName: StickMovement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleCapsuleWithStickMovement::*)()>(&GlobalNamespace::SimpleCapsuleWithStickMovement::StickMovement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleCapsuleWithStickMovement*), "StickMovement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleCapsuleWithStickMovement::SnapTurn
// Il2CppName: SnapTurn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SimpleCapsuleWithStickMovement::*)()>(&GlobalNamespace::SimpleCapsuleWithStickMovement::SnapTurn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SimpleCapsuleWithStickMovement*), "SnapTurn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SimpleCapsuleWithStickMovement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
