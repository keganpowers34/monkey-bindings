// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.CinemachineVirtualCameraBase
#include "Cinemachine/CinemachineVirtualCameraBase.hpp"
// Including type: Cinemachine.CameraState
#include "Cinemachine/CameraState.hpp"
// Including type: Cinemachine.CinemachineBlendDefinition
#include "Cinemachine/CinemachineBlendDefinition.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Cinemachine
namespace Cinemachine {
  // Skipping declaration: ICinemachineCamera because it is already included!
  // Forward declaring type: CinemachineBlend
  class CinemachineBlend;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: CinemachineBlendListCamera
  class CinemachineBlendListCamera;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachineBlendListCamera);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineBlendListCamera*, "Cinemachine", "CinemachineBlendListCamera");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x198
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachineBlendListCamera
  // [TokenAttribute] Offset: FFFFFFFF
  // [DocumentationSortingAttribute] Offset: AE4FD8
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  // [ExcludeFromPresetAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: AE4FD8
  // [HelpURLAttribute] Offset: AE4FD8
  class CinemachineBlendListCamera : public ::Cinemachine::CinemachineVirtualCameraBase {
    public:
    // Writing base type padding for base size: 0x64 to desired offset: 0x68
    char ___base_padding[0x4] = {};
    // Nested type: ::Cinemachine::CinemachineBlendListCamera::Instruction
    struct Instruction;
    // Size: 0x20
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Cinemachine.CinemachineBlendListCamera/Instruction
    // [TokenAttribute] Offset: FFFFFFFF
    struct Instruction/*, public ::System::ValueType*/ {
      public:
      public:
      // [TooltipAttribute] Offset: 0xAEC32C
      // public Cinemachine.CinemachineVirtualCameraBase m_VirtualCamera
      // Size: 0x8
      // Offset: 0x0
      ::Cinemachine::CinemachineVirtualCameraBase* m_VirtualCamera;
      // Field size check
      static_assert(sizeof(::Cinemachine::CinemachineVirtualCameraBase*) == 0x8);
      // [TooltipAttribute] Offset: 0xAEC364
      // public System.Single m_Hold
      // Size: 0x4
      // Offset: 0x8
      float m_Hold;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // Padding between fields: m_Hold and: m_Blend
      char __padding1[0x4] = {};
      // [TooltipAttribute] Offset: 0xAEC39C
      // public Cinemachine.CinemachineBlendDefinition m_Blend
      // Size: 0x10
      // Offset: 0x10
      ::Cinemachine::CinemachineBlendDefinition m_Blend;
      // Field size check
      static_assert(sizeof(::Cinemachine::CinemachineBlendDefinition) == 0x10);
      public:
      // Creating value type constructor for type: Instruction
      constexpr Instruction(::Cinemachine::CinemachineVirtualCameraBase* m_VirtualCamera_ = {}, float m_Hold_ = {}, ::Cinemachine::CinemachineBlendDefinition m_Blend_ = {}) noexcept : m_VirtualCamera{m_VirtualCamera_}, m_Hold{m_Hold_}, m_Blend{m_Blend_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public Cinemachine.CinemachineVirtualCameraBase m_VirtualCamera
      [[deprecated("Use field access instead!")]] ::Cinemachine::CinemachineVirtualCameraBase*& dyn_m_VirtualCamera();
      // Get instance field reference: public System.Single m_Hold
      [[deprecated("Use field access instead!")]] float& dyn_m_Hold();
      // Get instance field reference: public Cinemachine.CinemachineBlendDefinition m_Blend
      [[deprecated("Use field access instead!")]] ::Cinemachine::CinemachineBlendDefinition& dyn_m_Blend();
    }; // Cinemachine.CinemachineBlendListCamera/Instruction
    #pragma pack(pop)
    static check_size<sizeof(CinemachineBlendListCamera::Instruction), 16 + sizeof(::Cinemachine::CinemachineBlendDefinition)> __Cinemachine_CinemachineBlendListCamera_InstructionSizeCheck;
    static_assert(sizeof(CinemachineBlendListCamera::Instruction) == 0x20);
    public:
    // [TooltipAttribute] Offset: 0xAE6B44
    // public UnityEngine.Transform m_LookAt
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Transform* m_LookAt;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xAE6BA0
    // public UnityEngine.Transform m_Follow
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::Transform* m_Follow;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xAE6BFC
    // public System.Boolean m_ShowDebugText
    // Size: 0x1
    // Offset: 0x78
    bool m_ShowDebugText;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0xAE6C34
    // public System.Boolean m_Loop
    // Size: 0x1
    // Offset: 0x79
    bool m_Loop;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_Loop and: m_ChildCameras
    char __padding3[0x6] = {};
    // Cinemachine.CinemachineVirtualCameraBase[] m_ChildCameras
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<::Cinemachine::CinemachineVirtualCameraBase*> m_ChildCameras;
    // Field size check
    static_assert(sizeof(::ArrayW<::Cinemachine::CinemachineVirtualCameraBase*>) == 0x8);
    // [TooltipAttribute] Offset: 0xAE6CB4
    // public Cinemachine.CinemachineBlendListCamera/Instruction[] m_Instructions
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<::Cinemachine::CinemachineBlendListCamera::Instruction> m_Instructions;
    // Field size check
    static_assert(sizeof(::ArrayW<::Cinemachine::CinemachineBlendListCamera::Instruction>) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAE6CEC
    // private Cinemachine.ICinemachineCamera <LiveChild>k__BackingField
    // Size: 0x8
    // Offset: 0x90
    ::Cinemachine::ICinemachineCamera* LiveChild;
    // Field size check
    static_assert(sizeof(::Cinemachine::ICinemachineCamera*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xAE6CFC
    // private Cinemachine.ICinemachineCamera <TransitioningFrom>k__BackingField
    // Size: 0x8
    // Offset: 0x98
    ::Cinemachine::ICinemachineCamera* TransitioningFrom;
    // Field size check
    static_assert(sizeof(::Cinemachine::ICinemachineCamera*) == 0x8);
    // private Cinemachine.CameraState m_State
    // Size: 0xE4
    // Offset: 0xA0
    ::Cinemachine::CameraState m_State;
    // Field size check
    static_assert(sizeof(::Cinemachine::CameraState) == 0xE4);
    // Padding between fields: m_State and: mActivationTime
    char __padding8[0x4] = {};
    // private System.Single mActivationTime
    // Size: 0x4
    // Offset: 0x188
    float mActivationTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 mCurrentInstruction
    // Size: 0x4
    // Offset: 0x18C
    int mCurrentInstruction;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private Cinemachine.CinemachineBlend mActiveBlend
    // Size: 0x8
    // Offset: 0x190
    ::Cinemachine::CinemachineBlend* mActiveBlend;
    // Field size check
    static_assert(sizeof(::Cinemachine::CinemachineBlend*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Transform m_LookAt
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_m_LookAt();
    // Get instance field reference: public UnityEngine.Transform m_Follow
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_m_Follow();
    // Get instance field reference: public System.Boolean m_ShowDebugText
    [[deprecated("Use field access instead!")]] bool& dyn_m_ShowDebugText();
    // Get instance field reference: public System.Boolean m_Loop
    [[deprecated("Use field access instead!")]] bool& dyn_m_Loop();
    // Get instance field reference: Cinemachine.CinemachineVirtualCameraBase[] m_ChildCameras
    [[deprecated("Use field access instead!")]] ::ArrayW<::Cinemachine::CinemachineVirtualCameraBase*>& dyn_m_ChildCameras();
    // Get instance field reference: public Cinemachine.CinemachineBlendListCamera/Instruction[] m_Instructions
    [[deprecated("Use field access instead!")]] ::ArrayW<::Cinemachine::CinemachineBlendListCamera::Instruction>& dyn_m_Instructions();
    // Get instance field reference: private Cinemachine.ICinemachineCamera <LiveChild>k__BackingField
    [[deprecated("Use field access instead!")]] ::Cinemachine::ICinemachineCamera*& dyn_$LiveChild$k__BackingField();
    // Get instance field reference: private Cinemachine.ICinemachineCamera <TransitioningFrom>k__BackingField
    [[deprecated("Use field access instead!")]] ::Cinemachine::ICinemachineCamera*& dyn_$TransitioningFrom$k__BackingField();
    // Get instance field reference: private Cinemachine.CameraState m_State
    [[deprecated("Use field access instead!")]] ::Cinemachine::CameraState& dyn_m_State();
    // Get instance field reference: private System.Single mActivationTime
    [[deprecated("Use field access instead!")]] float& dyn_mActivationTime();
    // Get instance field reference: private System.Int32 mCurrentInstruction
    [[deprecated("Use field access instead!")]] int& dyn_mCurrentInstruction();
    // Get instance field reference: private Cinemachine.CinemachineBlend mActiveBlend
    [[deprecated("Use field access instead!")]] ::Cinemachine::CinemachineBlend*& dyn_mActiveBlend();
    // public System.Void set_LiveChild(Cinemachine.ICinemachineCamera value)
    // Offset: 0x13428AC
    void set_LiveChild(::Cinemachine::ICinemachineCamera* value);
    // public Cinemachine.ICinemachineCamera get_LiveChild()
    // Offset: 0x13428B4
    ::Cinemachine::ICinemachineCamera* get_LiveChild();
    // private Cinemachine.ICinemachineCamera get_TransitioningFrom()
    // Offset: 0x1342D94
    ::Cinemachine::ICinemachineCamera* get_TransitioningFrom();
    // private System.Void set_TransitioningFrom(Cinemachine.ICinemachineCamera value)
    // Offset: 0x1342D9C
    void set_TransitioningFrom(::Cinemachine::ICinemachineCamera* value);
    // private System.Void OnTransformChildrenChanged()
    // Offset: 0x134361C
    void OnTransformChildrenChanged();
    // private System.Void OnGuiHandler()
    // Offset: 0x1343628
    void OnGuiHandler();
    // public Cinemachine.CinemachineVirtualCameraBase[] get_ChildCameras()
    // Offset: 0x13437C0
    ::ArrayW<::Cinemachine::CinemachineVirtualCameraBase*> get_ChildCameras();
    // public System.Boolean get_IsBlending()
    // Offset: 0x13437E4
    bool get_IsBlending();
    // private System.Void InvalidateListOfChildren()
    // Offset: 0x1343540
    void InvalidateListOfChildren();
    // private System.Void UpdateListOfChildren()
    // Offset: 0x13429E4
    void UpdateListOfChildren();
    // System.Void ValidateInstructions()
    // Offset: 0x13437F4
    void ValidateInstructions();
    // private System.Void AdvanceCurrentInstruction(System.Single deltaTime)
    // Offset: 0x134323C
    void AdvanceCurrentInstruction(float deltaTime);
    // public override System.String get_Description()
    // Offset: 0x1342764
    // Implemented from: Cinemachine.CinemachineVirtualCameraBase
    // Base method: System.String CinemachineVirtualCameraBase::get_Description()
    ::StringW get_Description();
    // public override System.Boolean IsLiveChild(Cinemachine.ICinemachineCamera vcam, System.Boolean dominantChildOnly)
    // Offset: 0x13428BC
    // Implemented from: Cinemachine.CinemachineVirtualCameraBase
    // Base method: System.Boolean CinemachineVirtualCameraBase::IsLiveChild(Cinemachine.ICinemachineCamera vcam, System.Boolean dominantChildOnly)
    bool IsLiveChild(::Cinemachine::ICinemachineCamera* vcam, bool dominantChildOnly);
    // public override Cinemachine.CameraState get_State()
    // Offset: 0x13428E0
    // Implemented from: Cinemachine.CinemachineVirtualCameraBase
    // Base method: Cinemachine.CameraState CinemachineVirtualCameraBase::get_State()
    ::Cinemachine::CameraState get_State();
    // public override UnityEngine.Transform get_LookAt()
    // Offset: 0x13428F0
    // Implemented from: Cinemachine.CinemachineVirtualCameraBase
    // Base method: UnityEngine.Transform CinemachineVirtualCameraBase::get_LookAt()
    ::UnityEngine::Transform* get_LookAt();
    // public override System.Void set_LookAt(UnityEngine.Transform value)
    // Offset: 0x13428FC
    // Implemented from: Cinemachine.CinemachineVirtualCameraBase
    // Base method: System.Void CinemachineVirtualCameraBase::set_LookAt(UnityEngine.Transform value)
    void set_LookAt(::UnityEngine::Transform* value);
    // public override UnityEngine.Transform get_Follow()
    // Offset: 0x1342904
    // Implemented from: Cinemachine.CinemachineVirtualCameraBase
    // Base method: UnityEngine.Transform CinemachineVirtualCameraBase::get_Follow()
    ::UnityEngine::Transform* get_Follow();
    // public override System.Void set_Follow(UnityEngine.Transform value)
    // Offset: 0x1342910
    // Implemented from: Cinemachine.CinemachineVirtualCameraBase
    // Base method: System.Void CinemachineVirtualCameraBase::set_Follow(UnityEngine.Transform value)
    void set_Follow(::UnityEngine::Transform* value);
    // public override System.Void OnTargetObjectWarped(UnityEngine.Transform target, UnityEngine.Vector3 positionDelta)
    // Offset: 0x1342918
    // Implemented from: Cinemachine.CinemachineVirtualCameraBase
    // Base method: System.Void CinemachineVirtualCameraBase::OnTargetObjectWarped(UnityEngine.Transform target, UnityEngine.Vector3 positionDelta)
    void OnTargetObjectWarped(::UnityEngine::Transform* target, ::UnityEngine::Vector3 positionDelta);
    // public override System.Void ForceCameraPosition(UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    // Offset: 0x1342B90
    // Implemented from: Cinemachine.CinemachineVirtualCameraBase
    // Base method: System.Void CinemachineVirtualCameraBase::ForceCameraPosition(UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    void ForceCameraPosition(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot);
    // public override System.Void OnTransitionFromCamera(Cinemachine.ICinemachineCamera fromCam, UnityEngine.Vector3 worldUp, System.Single deltaTime)
    // Offset: 0x1342C90
    // Implemented from: Cinemachine.CinemachineVirtualCameraBase
    // Base method: System.Void CinemachineVirtualCameraBase::OnTransitionFromCamera(Cinemachine.ICinemachineCamera fromCam, UnityEngine.Vector3 worldUp, System.Single deltaTime)
    void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* fromCam, ::UnityEngine::Vector3 worldUp, float deltaTime);
    // public override System.Void InternalUpdateCameraState(UnityEngine.Vector3 worldUp, System.Single deltaTime)
    // Offset: 0x1342DA4
    // Implemented from: Cinemachine.CinemachineVirtualCameraBase
    // Base method: System.Void CinemachineVirtualCameraBase::InternalUpdateCameraState(UnityEngine.Vector3 worldUp, System.Single deltaTime)
    void InternalUpdateCameraState(::UnityEngine::Vector3 worldUp, float deltaTime);
    // protected override System.Void OnEnable()
    // Offset: 0x1343410
    // Implemented from: Cinemachine.CinemachineVirtualCameraBase
    // Base method: System.Void CinemachineVirtualCameraBase::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x134354C
    // Implemented from: Cinemachine.CinemachineVirtualCameraBase
    // Base method: System.Void CinemachineVirtualCameraBase::OnDisable()
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x1343970
    // Implemented from: Cinemachine.CinemachineVirtualCameraBase
    // Base method: System.Void CinemachineVirtualCameraBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineBlendListCamera* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineBlendListCamera::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineBlendListCamera*, creationType>()));
    }
  }; // Cinemachine.CinemachineBlendListCamera
  #pragma pack(pop)
  static check_size<sizeof(CinemachineBlendListCamera), 400 + sizeof(::Cinemachine::CinemachineBlend*)> __Cinemachine_CinemachineBlendListCameraSizeCheck;
  static_assert(sizeof(CinemachineBlendListCamera) == 0x198);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineBlendListCamera::Instruction, "Cinemachine", "CinemachineBlendListCamera/Instruction");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::set_LiveChild
// Il2CppName: set_LiveChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineBlendListCamera::*)(::Cinemachine::ICinemachineCamera*)>(&Cinemachine::CinemachineBlendListCamera::set_LiveChild)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Cinemachine", "ICinemachineCamera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "set_LiveChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::get_LiveChild
// Il2CppName: get_LiveChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Cinemachine::ICinemachineCamera* (Cinemachine::CinemachineBlendListCamera::*)()>(&Cinemachine::CinemachineBlendListCamera::get_LiveChild)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "get_LiveChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::get_TransitioningFrom
// Il2CppName: get_TransitioningFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Cinemachine::ICinemachineCamera* (Cinemachine::CinemachineBlendListCamera::*)()>(&Cinemachine::CinemachineBlendListCamera::get_TransitioningFrom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "get_TransitioningFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::set_TransitioningFrom
// Il2CppName: set_TransitioningFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineBlendListCamera::*)(::Cinemachine::ICinemachineCamera*)>(&Cinemachine::CinemachineBlendListCamera::set_TransitioningFrom)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Cinemachine", "ICinemachineCamera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "set_TransitioningFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::OnTransformChildrenChanged
// Il2CppName: OnTransformChildrenChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineBlendListCamera::*)()>(&Cinemachine::CinemachineBlendListCamera::OnTransformChildrenChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "OnTransformChildrenChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::OnGuiHandler
// Il2CppName: OnGuiHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineBlendListCamera::*)()>(&Cinemachine::CinemachineBlendListCamera::OnGuiHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "OnGuiHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::get_ChildCameras
// Il2CppName: get_ChildCameras
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Cinemachine::CinemachineVirtualCameraBase*> (Cinemachine::CinemachineBlendListCamera::*)()>(&Cinemachine::CinemachineBlendListCamera::get_ChildCameras)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "get_ChildCameras", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::get_IsBlending
// Il2CppName: get_IsBlending
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Cinemachine::CinemachineBlendListCamera::*)()>(&Cinemachine::CinemachineBlendListCamera::get_IsBlending)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "get_IsBlending", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::InvalidateListOfChildren
// Il2CppName: InvalidateListOfChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineBlendListCamera::*)()>(&Cinemachine::CinemachineBlendListCamera::InvalidateListOfChildren)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "InvalidateListOfChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::UpdateListOfChildren
// Il2CppName: UpdateListOfChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineBlendListCamera::*)()>(&Cinemachine::CinemachineBlendListCamera::UpdateListOfChildren)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "UpdateListOfChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::ValidateInstructions
// Il2CppName: ValidateInstructions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineBlendListCamera::*)()>(&Cinemachine::CinemachineBlendListCamera::ValidateInstructions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "ValidateInstructions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::AdvanceCurrentInstruction
// Il2CppName: AdvanceCurrentInstruction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineBlendListCamera::*)(float)>(&Cinemachine::CinemachineBlendListCamera::AdvanceCurrentInstruction)> {
  static const MethodInfo* get() {
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "AdvanceCurrentInstruction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::get_Description
// Il2CppName: get_Description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Cinemachine::CinemachineBlendListCamera::*)()>(&Cinemachine::CinemachineBlendListCamera::get_Description)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "get_Description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::IsLiveChild
// Il2CppName: IsLiveChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Cinemachine::CinemachineBlendListCamera::*)(::Cinemachine::ICinemachineCamera*, bool)>(&Cinemachine::CinemachineBlendListCamera::IsLiveChild)> {
  static const MethodInfo* get() {
    static auto* vcam = &::il2cpp_utils::GetClassFromName("Cinemachine", "ICinemachineCamera")->byval_arg;
    static auto* dominantChildOnly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "IsLiveChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vcam, dominantChildOnly});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::get_State
// Il2CppName: get_State
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Cinemachine::CameraState (Cinemachine::CinemachineBlendListCamera::*)()>(&Cinemachine::CinemachineBlendListCamera::get_State)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "get_State", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::get_LookAt
// Il2CppName: get_LookAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (Cinemachine::CinemachineBlendListCamera::*)()>(&Cinemachine::CinemachineBlendListCamera::get_LookAt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "get_LookAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::set_LookAt
// Il2CppName: set_LookAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineBlendListCamera::*)(::UnityEngine::Transform*)>(&Cinemachine::CinemachineBlendListCamera::set_LookAt)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "set_LookAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::get_Follow
// Il2CppName: get_Follow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (Cinemachine::CinemachineBlendListCamera::*)()>(&Cinemachine::CinemachineBlendListCamera::get_Follow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "get_Follow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::set_Follow
// Il2CppName: set_Follow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineBlendListCamera::*)(::UnityEngine::Transform*)>(&Cinemachine::CinemachineBlendListCamera::set_Follow)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "set_Follow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::OnTargetObjectWarped
// Il2CppName: OnTargetObjectWarped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineBlendListCamera::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&Cinemachine::CinemachineBlendListCamera::OnTargetObjectWarped)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* positionDelta = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "OnTargetObjectWarped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, positionDelta});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::ForceCameraPosition
// Il2CppName: ForceCameraPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineBlendListCamera::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&Cinemachine::CinemachineBlendListCamera::ForceCameraPosition)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "ForceCameraPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, rot});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::OnTransitionFromCamera
// Il2CppName: OnTransitionFromCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineBlendListCamera::*)(::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, float)>(&Cinemachine::CinemachineBlendListCamera::OnTransitionFromCamera)> {
  static const MethodInfo* get() {
    static auto* fromCam = &::il2cpp_utils::GetClassFromName("Cinemachine", "ICinemachineCamera")->byval_arg;
    static auto* worldUp = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "OnTransitionFromCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromCam, worldUp, deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::InternalUpdateCameraState
// Il2CppName: InternalUpdateCameraState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineBlendListCamera::*)(::UnityEngine::Vector3, float)>(&Cinemachine::CinemachineBlendListCamera::InternalUpdateCameraState)> {
  static const MethodInfo* get() {
    static auto* worldUp = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "InternalUpdateCameraState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{worldUp, deltaTime});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineBlendListCamera::*)()>(&Cinemachine::CinemachineBlendListCamera::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineBlendListCamera::*)()>(&Cinemachine::CinemachineBlendListCamera::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBlendListCamera*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBlendListCamera::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
