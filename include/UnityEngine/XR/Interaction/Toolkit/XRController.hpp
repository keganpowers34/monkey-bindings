// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.XRBaseController
#include "UnityEngine/XR/Interaction/Toolkit/XRBaseController.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
// Including type: InputHelpers/Button
#include "GlobalNamespace/InputHelpers_Button.hpp"
// Including type: UnityEngine.XR.InputDevice
#include "UnityEngine/XR/InputDevice.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::XR::Interaction
namespace UnityEngine::Experimental::XR::Interaction {
  // Forward declaring type: BasePoseProvider
  class BasePoseProvider;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Skipping declaration: InteractionState because it is already included!
  // Forward declaring type: XRControllerState
  class XRControllerState;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: XRController
  class XRController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRController*, "UnityEngine.XR.Interaction.Toolkit", "XRController");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0xA9
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.XRController
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: ADD758
  class XRController : public ::UnityEngine::XR::Interaction::Toolkit::XRBaseController {
    public:
    // Writing base type padding for base size: 0x71 to desired offset: 0x74
    char ___base_padding[0x3] = {};
    public:
    // [TooltipAttribute] Offset: 0xADE360
    // private UnityEngine.XR.XRNode m_ControllerNode
    // Size: 0x4
    // Offset: 0x74
    ::UnityEngine::XR::XRNode m_ControllerNode;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::XRNode) == 0x4);
    // [TooltipAttribute] Offset: 0xADE3AC
    // private InputHelpers/Button m_SelectUsage
    // Size: 0x4
    // Offset: 0x78
    ::GlobalNamespace::InputHelpers::Button m_SelectUsage;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::InputHelpers::Button) == 0x4);
    // [TooltipAttribute] Offset: 0xADE3F8
    // private InputHelpers/Button m_ActivateUsage
    // Size: 0x4
    // Offset: 0x7C
    ::GlobalNamespace::InputHelpers::Button m_ActivateUsage;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::InputHelpers::Button) == 0x4);
    // [TooltipAttribute] Offset: 0xADE444
    // private InputHelpers/Button m_UIPressUsage
    // Size: 0x4
    // Offset: 0x80
    ::GlobalNamespace::InputHelpers::Button m_UIPressUsage;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::InputHelpers::Button) == 0x4);
    // [TooltipAttribute] Offset: 0xADE490
    // private System.Single m_AxisToPressThreshold
    // Size: 0x4
    // Offset: 0x84
    float m_AxisToPressThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xADE4DC
    // private InputHelpers/Button m_RotateAnchorLeft
    // Size: 0x4
    // Offset: 0x88
    ::GlobalNamespace::InputHelpers::Button m_RotateAnchorLeft;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::InputHelpers::Button) == 0x4);
    // [TooltipAttribute] Offset: 0xADE528
    // private InputHelpers/Button m_RotateAnchorRight
    // Size: 0x4
    // Offset: 0x8C
    ::GlobalNamespace::InputHelpers::Button m_RotateAnchorRight;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::InputHelpers::Button) == 0x4);
    // [TooltipAttribute] Offset: 0xADE574
    // private InputHelpers/Button m_MoveObjectIn
    // Size: 0x4
    // Offset: 0x90
    ::GlobalNamespace::InputHelpers::Button m_MoveObjectIn;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::InputHelpers::Button) == 0x4);
    // [TooltipAttribute] Offset: 0xADE5C0
    // private InputHelpers/Button m_MoveObjectOut
    // Size: 0x4
    // Offset: 0x94
    ::GlobalNamespace::InputHelpers::Button m_MoveObjectOut;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::InputHelpers::Button) == 0x4);
    // [TooltipAttribute] Offset: 0xADE60C
    // private UnityEngine.Experimental.XR.Interaction.BasePoseProvider m_PoseProvider
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider* m_PoseProvider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*) == 0x8);
    // private UnityEngine.XR.InputDevice m_InputDevice
    // Size: 0x9
    // Offset: 0xA0
    ::UnityEngine::XR::InputDevice m_InputDevice;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::InputDevice) == 0x9);
    public:
    // Get instance field reference: private UnityEngine.XR.XRNode m_ControllerNode
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::XRNode& dyn_m_ControllerNode();
    // Get instance field reference: private InputHelpers/Button m_SelectUsage
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::InputHelpers::Button& dyn_m_SelectUsage();
    // Get instance field reference: private InputHelpers/Button m_ActivateUsage
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::InputHelpers::Button& dyn_m_ActivateUsage();
    // Get instance field reference: private InputHelpers/Button m_UIPressUsage
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::InputHelpers::Button& dyn_m_UIPressUsage();
    // Get instance field reference: private System.Single m_AxisToPressThreshold
    [[deprecated("Use field access instead!")]] float& dyn_m_AxisToPressThreshold();
    // Get instance field reference: private InputHelpers/Button m_RotateAnchorLeft
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::InputHelpers::Button& dyn_m_RotateAnchorLeft();
    // Get instance field reference: private InputHelpers/Button m_RotateAnchorRight
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::InputHelpers::Button& dyn_m_RotateAnchorRight();
    // Get instance field reference: private InputHelpers/Button m_MoveObjectIn
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::InputHelpers::Button& dyn_m_MoveObjectIn();
    // Get instance field reference: private InputHelpers/Button m_MoveObjectOut
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::InputHelpers::Button& dyn_m_MoveObjectOut();
    // Get instance field reference: private UnityEngine.Experimental.XR.Interaction.BasePoseProvider m_PoseProvider
    [[deprecated("Use field access instead!")]] ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*& dyn_m_PoseProvider();
    // Get instance field reference: private UnityEngine.XR.InputDevice m_InputDevice
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::InputDevice& dyn_m_InputDevice();
    // public UnityEngine.XR.XRNode get_controllerNode()
    // Offset: 0xD1EC74
    ::UnityEngine::XR::XRNode get_controllerNode();
    // public System.Void set_controllerNode(UnityEngine.XR.XRNode value)
    // Offset: 0xD1EC7C
    void set_controllerNode(::UnityEngine::XR::XRNode value);
    // public InputHelpers/Button get_selectUsage()
    // Offset: 0xD1EC84
    ::GlobalNamespace::InputHelpers::Button get_selectUsage();
    // public System.Void set_selectUsage(InputHelpers/Button value)
    // Offset: 0xD1EC8C
    void set_selectUsage(::GlobalNamespace::InputHelpers::Button value);
    // public InputHelpers/Button get_activateUsage()
    // Offset: 0xD1EC94
    ::GlobalNamespace::InputHelpers::Button get_activateUsage();
    // public System.Void set_activateUsage(InputHelpers/Button value)
    // Offset: 0xD1EC9C
    void set_activateUsage(::GlobalNamespace::InputHelpers::Button value);
    // public InputHelpers/Button get_uiPressUsage()
    // Offset: 0xD1ECA4
    ::GlobalNamespace::InputHelpers::Button get_uiPressUsage();
    // public System.Void set_uiPressUsage(InputHelpers/Button value)
    // Offset: 0xD1ECAC
    void set_uiPressUsage(::GlobalNamespace::InputHelpers::Button value);
    // public System.Single get_axisToPressThreshold()
    // Offset: 0xD1ECB4
    float get_axisToPressThreshold();
    // public System.Void set_axisToPressThreshold(System.Single value)
    // Offset: 0xD1ECBC
    void set_axisToPressThreshold(float value);
    // public InputHelpers/Button get_rotateObjectLeft()
    // Offset: 0xD1ECC4
    ::GlobalNamespace::InputHelpers::Button get_rotateObjectLeft();
    // public System.Void set_rotateObjectLeft(InputHelpers/Button value)
    // Offset: 0xD1ECCC
    void set_rotateObjectLeft(::GlobalNamespace::InputHelpers::Button value);
    // public InputHelpers/Button get_rotateObjectRight()
    // Offset: 0xD1ECD4
    ::GlobalNamespace::InputHelpers::Button get_rotateObjectRight();
    // public System.Void set_rotateObjectRight(InputHelpers/Button value)
    // Offset: 0xD1ECDC
    void set_rotateObjectRight(::GlobalNamespace::InputHelpers::Button value);
    // public InputHelpers/Button get_moveObjectIn()
    // Offset: 0xD1ECE4
    ::GlobalNamespace::InputHelpers::Button get_moveObjectIn();
    // public System.Void set_moveObjectIn(InputHelpers/Button value)
    // Offset: 0xD1ECEC
    void set_moveObjectIn(::GlobalNamespace::InputHelpers::Button value);
    // public InputHelpers/Button get_moveObjectOut()
    // Offset: 0xD1ECF4
    ::GlobalNamespace::InputHelpers::Button get_moveObjectOut();
    // public System.Void set_moveObjectOut(InputHelpers/Button value)
    // Offset: 0xD1ECFC
    void set_moveObjectOut(::GlobalNamespace::InputHelpers::Button value);
    // public UnityEngine.Experimental.XR.Interaction.BasePoseProvider get_poseProvider()
    // Offset: 0xD1ED04
    ::UnityEngine::Experimental::XR::Interaction::BasePoseProvider* get_poseProvider();
    // public System.Void set_poseProvider(UnityEngine.Experimental.XR.Interaction.BasePoseProvider value)
    // Offset: 0xD1ED0C
    void set_poseProvider(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider* value);
    // public UnityEngine.XR.InputDevice get_inputDevice()
    // Offset: 0xD1ED14
    ::UnityEngine::XR::InputDevice get_inputDevice();
    // private System.Void HandleInteractionAction(InputHelpers/Button button, ref UnityEngine.XR.Interaction.Toolkit.InteractionState interactionState)
    // Offset: 0xD1EF94
    void HandleInteractionAction(::GlobalNamespace::InputHelpers::Button button, ByRef<::UnityEngine::XR::Interaction::Toolkit::InteractionState> interactionState);
    // protected override System.Void UpdateTrackingInput(UnityEngine.XR.Interaction.Toolkit.XRControllerState controllerState)
    // Offset: 0xD1ED58
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.XRBaseController
    // Base method: System.Void XRBaseController::UpdateTrackingInput(UnityEngine.XR.Interaction.Toolkit.XRControllerState controllerState)
    void UpdateTrackingInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState* controllerState);
    // protected override System.Void UpdateInput(UnityEngine.XR.Interaction.Toolkit.XRControllerState controllerState)
    // Offset: 0xD1EEFC
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.XRBaseController
    // Base method: System.Void XRBaseController::UpdateInput(UnityEngine.XR.Interaction.Toolkit.XRControllerState controllerState)
    void UpdateInput(::UnityEngine::XR::Interaction::Toolkit::XRControllerState* controllerState);
    // public override System.Boolean SendHapticImpulse(System.Single amplitude, System.Single duration)
    // Offset: 0xD1F06C
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.XRBaseController
    // Base method: System.Boolean XRBaseController::SendHapticImpulse(System.Single amplitude, System.Single duration)
    bool SendHapticImpulse(float amplitude, float duration);
    // public System.Void .ctor()
    // Offset: 0xD1F10C
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.XRBaseController
    // Base method: System.Void XRBaseController::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::XRController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRController*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.XRController
  #pragma pack(pop)
  static check_size<sizeof(XRController), 160 + sizeof(::UnityEngine::XR::InputDevice)> __UnityEngine_XR_Interaction_Toolkit_XRControllerSizeCheck;
  static_assert(sizeof(XRController) == 0xA9);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_controllerNode
// Il2CppName: get_controllerNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::XRNode (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_controllerNode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_controllerNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::set_controllerNode
// Il2CppName: set_controllerNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::XR::XRNode)>(&UnityEngine::XR::Interaction::Toolkit::XRController::set_controllerNode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "set_controllerNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_selectUsage
// Il2CppName: get_selectUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::InputHelpers::Button (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_selectUsage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_selectUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::set_selectUsage
// Il2CppName: set_selectUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::GlobalNamespace::InputHelpers::Button)>(&UnityEngine::XR::Interaction::Toolkit::XRController::set_selectUsage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "InputHelpers/Button")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "set_selectUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_activateUsage
// Il2CppName: get_activateUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::InputHelpers::Button (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_activateUsage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_activateUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::set_activateUsage
// Il2CppName: set_activateUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::GlobalNamespace::InputHelpers::Button)>(&UnityEngine::XR::Interaction::Toolkit::XRController::set_activateUsage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "InputHelpers/Button")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "set_activateUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_uiPressUsage
// Il2CppName: get_uiPressUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::InputHelpers::Button (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_uiPressUsage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_uiPressUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::set_uiPressUsage
// Il2CppName: set_uiPressUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::GlobalNamespace::InputHelpers::Button)>(&UnityEngine::XR::Interaction::Toolkit::XRController::set_uiPressUsage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "InputHelpers/Button")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "set_uiPressUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_axisToPressThreshold
// Il2CppName: get_axisToPressThreshold
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_axisToPressThreshold)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_axisToPressThreshold", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::set_axisToPressThreshold
// Il2CppName: set_axisToPressThreshold
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(float)>(&UnityEngine::XR::Interaction::Toolkit::XRController::set_axisToPressThreshold)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "set_axisToPressThreshold", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_rotateObjectLeft
// Il2CppName: get_rotateObjectLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::InputHelpers::Button (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_rotateObjectLeft)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_rotateObjectLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::set_rotateObjectLeft
// Il2CppName: set_rotateObjectLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::GlobalNamespace::InputHelpers::Button)>(&UnityEngine::XR::Interaction::Toolkit::XRController::set_rotateObjectLeft)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "InputHelpers/Button")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "set_rotateObjectLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_rotateObjectRight
// Il2CppName: get_rotateObjectRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::InputHelpers::Button (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_rotateObjectRight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_rotateObjectRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::set_rotateObjectRight
// Il2CppName: set_rotateObjectRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::GlobalNamespace::InputHelpers::Button)>(&UnityEngine::XR::Interaction::Toolkit::XRController::set_rotateObjectRight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "InputHelpers/Button")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "set_rotateObjectRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_moveObjectIn
// Il2CppName: get_moveObjectIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::InputHelpers::Button (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_moveObjectIn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_moveObjectIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::set_moveObjectIn
// Il2CppName: set_moveObjectIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::GlobalNamespace::InputHelpers::Button)>(&UnityEngine::XR::Interaction::Toolkit::XRController::set_moveObjectIn)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "InputHelpers/Button")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "set_moveObjectIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_moveObjectOut
// Il2CppName: get_moveObjectOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::InputHelpers::Button (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_moveObjectOut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_moveObjectOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::set_moveObjectOut
// Il2CppName: set_moveObjectOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::GlobalNamespace::InputHelpers::Button)>(&UnityEngine::XR::Interaction::Toolkit::XRController::set_moveObjectOut)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "InputHelpers/Button")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "set_moveObjectOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_poseProvider
// Il2CppName: get_poseProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider* (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_poseProvider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_poseProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::set_poseProvider
// Il2CppName: set_poseProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*)>(&UnityEngine::XR::Interaction::Toolkit::XRController::set_poseProvider)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.XR.Interaction", "BasePoseProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "set_poseProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::get_inputDevice
// Il2CppName: get_inputDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::InputDevice (UnityEngine::XR::Interaction::Toolkit::XRController::*)()>(&UnityEngine::XR::Interaction::Toolkit::XRController::get_inputDevice)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "get_inputDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::HandleInteractionAction
// Il2CppName: HandleInteractionAction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::GlobalNamespace::InputHelpers::Button, ByRef<::UnityEngine::XR::Interaction::Toolkit::InteractionState>)>(&UnityEngine::XR::Interaction::Toolkit::XRController::HandleInteractionAction)> {
  static const MethodInfo* get() {
    static auto* button = &::il2cpp_utils::GetClassFromName("", "InputHelpers/Button")->byval_arg;
    static auto* interactionState = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "InteractionState")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "HandleInteractionAction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{button, interactionState});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::UpdateTrackingInput
// Il2CppName: UpdateTrackingInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*)>(&UnityEngine::XR::Interaction::Toolkit::XRController::UpdateTrackingInput)> {
  static const MethodInfo* get() {
    static auto* controllerState = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRControllerState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "UpdateTrackingInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controllerState});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::UpdateInput
// Il2CppName: UpdateInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::XRController::*)(::UnityEngine::XR::Interaction::Toolkit::XRControllerState*)>(&UnityEngine::XR::Interaction::Toolkit::XRController::UpdateInput)> {
  static const MethodInfo* get() {
    static auto* controllerState = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "XRControllerState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "UpdateInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{controllerState});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::SendHapticImpulse
// Il2CppName: SendHapticImpulse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::XRController::*)(float, float)>(&UnityEngine::XR::Interaction::Toolkit::XRController::SendHapticImpulse)> {
  static const MethodInfo* get() {
    static auto* amplitude = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::XRController*), "SendHapticImpulse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{amplitude, duration});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::XRController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
