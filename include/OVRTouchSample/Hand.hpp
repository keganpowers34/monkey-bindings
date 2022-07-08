// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRInput/Controller
#include "GlobalNamespace/OVRInput.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVRTouchSample
namespace OVRTouchSample {
  // Forward declaring type: HandPose
  class HandPose;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Renderer
  class Renderer;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRGrabber
  class OVRGrabber;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: OVRTouchSample
namespace OVRTouchSample {
  // Forward declaring type: Hand
  class Hand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVRTouchSample::Hand);
DEFINE_IL2CPP_ARG_TYPE(::OVRTouchSample::Hand*, "OVRTouchSample", "Hand");
// Type namespace: OVRTouchSample
namespace OVRTouchSample {
  // Size: 0x74
  #pragma pack(push, 1)
  // Autogenerated type: OVRTouchSample.Hand
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AF1B14
  class Hand : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::OVRTouchSample::Hand::$$c
    class $$c;
    public:
    // private OVRInput/Controller m_controller
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::OVRInput::Controller m_controller;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::Controller) == 0x4);
    // Padding between fields: m_controller and: m_animator
    char __padding0[0x4] = {};
    // private UnityEngine.Animator m_animator
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Animator* m_animator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animator*) == 0x8);
    // private OVRTouchSample.HandPose m_defaultGrabPose
    // Size: 0x8
    // Offset: 0x28
    ::OVRTouchSample::HandPose* m_defaultGrabPose;
    // Field size check
    static_assert(sizeof(::OVRTouchSample::HandPose*) == 0x8);
    // private UnityEngine.Collider[] m_colliders
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::Collider*> m_colliders;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Collider*>) == 0x8);
    // private System.Boolean m_collisionEnabled
    // Size: 0x1
    // Offset: 0x38
    bool m_collisionEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_collisionEnabled and: m_grabber
    char __padding4[0x7] = {};
    // private OVRGrabber m_grabber
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::OVRGrabber* m_grabber;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRGrabber*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Renderer> m_showAfterInputFocusAcquired
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* m_showAfterInputFocusAcquired;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*) == 0x8);
    // private System.Int32 m_animLayerIndexThumb
    // Size: 0x4
    // Offset: 0x50
    int m_animLayerIndexThumb;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_animLayerIndexPoint
    // Size: 0x4
    // Offset: 0x54
    int m_animLayerIndexPoint;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_animParamIndexFlex
    // Size: 0x4
    // Offset: 0x58
    int m_animParamIndexFlex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_animParamIndexPose
    // Size: 0x4
    // Offset: 0x5C
    int m_animParamIndexPose;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean m_isPointing
    // Size: 0x1
    // Offset: 0x60
    bool m_isPointing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_isGivingThumbsUp
    // Size: 0x1
    // Offset: 0x61
    bool m_isGivingThumbsUp;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_isGivingThumbsUp and: m_pointBlend
    char __padding12[0x2] = {};
    // private System.Single m_pointBlend
    // Size: 0x4
    // Offset: 0x64
    float m_pointBlend;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_thumbsUpBlend
    // Size: 0x4
    // Offset: 0x68
    float m_thumbsUpBlend;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_restoreOnInputAcquired
    // Size: 0x1
    // Offset: 0x6C
    bool m_restoreOnInputAcquired;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_restoreOnInputAcquired and: m_collisionScaleCurrent
    char __padding15[0x3] = {};
    // private System.Single m_collisionScaleCurrent
    // Size: 0x4
    // Offset: 0x70
    float m_collisionScaleCurrent;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static public System.String ANIM_LAYER_NAME_POINT
    static constexpr const char* ANIM_LAYER_NAME_POINT = "Point Layer";
    // Get static field: static public System.String ANIM_LAYER_NAME_POINT
    static ::StringW _get_ANIM_LAYER_NAME_POINT();
    // Set static field: static public System.String ANIM_LAYER_NAME_POINT
    static void _set_ANIM_LAYER_NAME_POINT(::StringW value);
    // static field const value: static public System.String ANIM_LAYER_NAME_THUMB
    static constexpr const char* ANIM_LAYER_NAME_THUMB = "Thumb Layer";
    // Get static field: static public System.String ANIM_LAYER_NAME_THUMB
    static ::StringW _get_ANIM_LAYER_NAME_THUMB();
    // Set static field: static public System.String ANIM_LAYER_NAME_THUMB
    static void _set_ANIM_LAYER_NAME_THUMB(::StringW value);
    // static field const value: static public System.String ANIM_PARAM_NAME_FLEX
    static constexpr const char* ANIM_PARAM_NAME_FLEX = "Flex";
    // Get static field: static public System.String ANIM_PARAM_NAME_FLEX
    static ::StringW _get_ANIM_PARAM_NAME_FLEX();
    // Set static field: static public System.String ANIM_PARAM_NAME_FLEX
    static void _set_ANIM_PARAM_NAME_FLEX(::StringW value);
    // static field const value: static public System.String ANIM_PARAM_NAME_POSE
    static constexpr const char* ANIM_PARAM_NAME_POSE = "Pose";
    // Get static field: static public System.String ANIM_PARAM_NAME_POSE
    static ::StringW _get_ANIM_PARAM_NAME_POSE();
    // Set static field: static public System.String ANIM_PARAM_NAME_POSE
    static void _set_ANIM_PARAM_NAME_POSE(::StringW value);
    // static field const value: static public System.Single THRESH_COLLISION_FLEX
    static constexpr const float THRESH_COLLISION_FLEX = 0.9;
    // Get static field: static public System.Single THRESH_COLLISION_FLEX
    static float _get_THRESH_COLLISION_FLEX();
    // Set static field: static public System.Single THRESH_COLLISION_FLEX
    static void _set_THRESH_COLLISION_FLEX(float value);
    // static field const value: static public System.Single INPUT_RATE_CHANGE
    static constexpr const float INPUT_RATE_CHANGE = 20;
    // Get static field: static public System.Single INPUT_RATE_CHANGE
    static float _get_INPUT_RATE_CHANGE();
    // Set static field: static public System.Single INPUT_RATE_CHANGE
    static void _set_INPUT_RATE_CHANGE(float value);
    // static field const value: static public System.Single COLLIDER_SCALE_MIN
    static constexpr const float COLLIDER_SCALE_MIN = 0.01;
    // Get static field: static public System.Single COLLIDER_SCALE_MIN
    static float _get_COLLIDER_SCALE_MIN();
    // Set static field: static public System.Single COLLIDER_SCALE_MIN
    static void _set_COLLIDER_SCALE_MIN(float value);
    // static field const value: static public System.Single COLLIDER_SCALE_MAX
    static constexpr const float COLLIDER_SCALE_MAX = 1;
    // Get static field: static public System.Single COLLIDER_SCALE_MAX
    static float _get_COLLIDER_SCALE_MAX();
    // Set static field: static public System.Single COLLIDER_SCALE_MAX
    static void _set_COLLIDER_SCALE_MAX(float value);
    // static field const value: static public System.Single COLLIDER_SCALE_PER_SECOND
    static constexpr const float COLLIDER_SCALE_PER_SECOND = 1;
    // Get static field: static public System.Single COLLIDER_SCALE_PER_SECOND
    static float _get_COLLIDER_SCALE_PER_SECOND();
    // Set static field: static public System.Single COLLIDER_SCALE_PER_SECOND
    static void _set_COLLIDER_SCALE_PER_SECOND(float value);
    // static field const value: static public System.Single TRIGGER_DEBOUNCE_TIME
    static constexpr const float TRIGGER_DEBOUNCE_TIME = 0.05;
    // Get static field: static public System.Single TRIGGER_DEBOUNCE_TIME
    static float _get_TRIGGER_DEBOUNCE_TIME();
    // Set static field: static public System.Single TRIGGER_DEBOUNCE_TIME
    static void _set_TRIGGER_DEBOUNCE_TIME(float value);
    // static field const value: static public System.Single THUMB_DEBOUNCE_TIME
    static constexpr const float THUMB_DEBOUNCE_TIME = 0.15;
    // Get static field: static public System.Single THUMB_DEBOUNCE_TIME
    static float _get_THUMB_DEBOUNCE_TIME();
    // Set static field: static public System.Single THUMB_DEBOUNCE_TIME
    static void _set_THUMB_DEBOUNCE_TIME(float value);
    // Get instance field reference: private OVRInput/Controller m_controller
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::Controller& dyn_m_controller();
    // Get instance field reference: private UnityEngine.Animator m_animator
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animator*& dyn_m_animator();
    // Get instance field reference: private OVRTouchSample.HandPose m_defaultGrabPose
    [[deprecated("Use field access instead!")]] ::OVRTouchSample::HandPose*& dyn_m_defaultGrabPose();
    // Get instance field reference: private UnityEngine.Collider[] m_colliders
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Collider*>& dyn_m_colliders();
    // Get instance field reference: private System.Boolean m_collisionEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_m_collisionEnabled();
    // Get instance field reference: private OVRGrabber m_grabber
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRGrabber*& dyn_m_grabber();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Renderer> m_showAfterInputFocusAcquired
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*& dyn_m_showAfterInputFocusAcquired();
    // Get instance field reference: private System.Int32 m_animLayerIndexThumb
    [[deprecated("Use field access instead!")]] int& dyn_m_animLayerIndexThumb();
    // Get instance field reference: private System.Int32 m_animLayerIndexPoint
    [[deprecated("Use field access instead!")]] int& dyn_m_animLayerIndexPoint();
    // Get instance field reference: private System.Int32 m_animParamIndexFlex
    [[deprecated("Use field access instead!")]] int& dyn_m_animParamIndexFlex();
    // Get instance field reference: private System.Int32 m_animParamIndexPose
    [[deprecated("Use field access instead!")]] int& dyn_m_animParamIndexPose();
    // Get instance field reference: private System.Boolean m_isPointing
    [[deprecated("Use field access instead!")]] bool& dyn_m_isPointing();
    // Get instance field reference: private System.Boolean m_isGivingThumbsUp
    [[deprecated("Use field access instead!")]] bool& dyn_m_isGivingThumbsUp();
    // Get instance field reference: private System.Single m_pointBlend
    [[deprecated("Use field access instead!")]] float& dyn_m_pointBlend();
    // Get instance field reference: private System.Single m_thumbsUpBlend
    [[deprecated("Use field access instead!")]] float& dyn_m_thumbsUpBlend();
    // Get instance field reference: private System.Boolean m_restoreOnInputAcquired
    [[deprecated("Use field access instead!")]] bool& dyn_m_restoreOnInputAcquired();
    // Get instance field reference: private System.Single m_collisionScaleCurrent
    [[deprecated("Use field access instead!")]] float& dyn_m_collisionScaleCurrent();
    // private System.Void Awake()
    // Offset: 0x1B8D61C
    void Awake();
    // private System.Void Start()
    // Offset: 0x1B8D674
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0x1B8DA7C
    void OnDestroy();
    // private System.Void Update()
    // Offset: 0x1B8DB48
    void Update();
    // private System.Void UpdateCapTouchStates()
    // Offset: 0x1B8DC54
    void UpdateCapTouchStates();
    // private System.Void LateUpdate()
    // Offset: 0x1B8DF8C
    void LateUpdate();
    // private System.Void OnInputFocusLost()
    // Offset: 0x1B8E0F4
    void OnInputFocusLost();
    // private System.Void OnInputFocusAcquired()
    // Offset: 0x1B8E240
    void OnInputFocusAcquired();
    // private System.Single InputValueRateChange(System.Boolean isDown, System.Single value)
    // Offset: 0x1B8DCF0
    float InputValueRateChange(bool isDown, float value);
    // private System.Void UpdateAnimStates()
    // Offset: 0x1B8DD90
    void UpdateAnimStates();
    // private System.Void CollisionEnable(System.Boolean enabled)
    // Offset: 0x1B8D8D0
    void CollisionEnable(bool enabled);
    // public System.Void .ctor()
    // Offset: 0x1B8E35C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Hand* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVRTouchSample::Hand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Hand*, creationType>()));
    }
  }; // OVRTouchSample.Hand
  #pragma pack(pop)
  static check_size<sizeof(Hand), 112 + sizeof(float)> __OVRTouchSample_HandSizeCheck;
  static_assert(sizeof(Hand) == 0x74);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVRTouchSample::Hand::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRTouchSample::Hand::*)()>(&OVRTouchSample::Hand::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRTouchSample::Hand::*)()>(&OVRTouchSample::Hand::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRTouchSample::Hand::*)()>(&OVRTouchSample::Hand::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRTouchSample::Hand::*)()>(&OVRTouchSample::Hand::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::UpdateCapTouchStates
// Il2CppName: UpdateCapTouchStates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRTouchSample::Hand::*)()>(&OVRTouchSample::Hand::UpdateCapTouchStates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "UpdateCapTouchStates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRTouchSample::Hand::*)()>(&OVRTouchSample::Hand::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::OnInputFocusLost
// Il2CppName: OnInputFocusLost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRTouchSample::Hand::*)()>(&OVRTouchSample::Hand::OnInputFocusLost)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "OnInputFocusLost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::OnInputFocusAcquired
// Il2CppName: OnInputFocusAcquired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRTouchSample::Hand::*)()>(&OVRTouchSample::Hand::OnInputFocusAcquired)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "OnInputFocusAcquired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::InputValueRateChange
// Il2CppName: InputValueRateChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OVRTouchSample::Hand::*)(bool, float)>(&OVRTouchSample::Hand::InputValueRateChange)> {
  static const MethodInfo* get() {
    static auto* isDown = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "InputValueRateChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isDown, value});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::UpdateAnimStates
// Il2CppName: UpdateAnimStates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRTouchSample::Hand::*)()>(&OVRTouchSample::Hand::UpdateAnimStates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "UpdateAnimStates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::CollisionEnable
// Il2CppName: CollisionEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRTouchSample::Hand::*)(bool)>(&OVRTouchSample::Hand::CollisionEnable)> {
  static const MethodInfo* get() {
    static auto* enabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "CollisionEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enabled});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
