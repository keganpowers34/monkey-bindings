// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.UI.CoroutineTween.ITweenValue
#include "UnityEngine/UI/CoroutineTween/ITweenValue.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI::CoroutineTween
namespace UnityEngine::UI::CoroutineTween {
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI.CoroutineTween
namespace UnityEngine::UI::CoroutineTween {
  // Forward declaring type: FloatTween
  struct FloatTween;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CoroutineTween::FloatTween, "UnityEngine.UI.CoroutineTween", "FloatTween");
// Type namespace: UnityEngine.UI.CoroutineTween
namespace UnityEngine::UI::CoroutineTween {
  // Size: 0x15
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UI.CoroutineTween.FloatTween
  // [TokenAttribute] Offset: FFFFFFFF
  struct FloatTween/*, public ::System::ValueType, public ::UnityEngine::UI::CoroutineTween::ITweenValue*/ {
    public:
    // Nested type: ::UnityEngine::UI::CoroutineTween::FloatTween::FloatTweenCallback
    class FloatTweenCallback;
    public:
    // private UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback m_Target
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::UI::CoroutineTween::FloatTween::FloatTweenCallback* m_Target;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::CoroutineTween::FloatTween::FloatTweenCallback*) == 0x8);
    // private System.Single m_StartValue
    // Size: 0x4
    // Offset: 0x8
    float m_StartValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_TargetValue
    // Size: 0x4
    // Offset: 0xC
    float m_TargetValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_Duration
    // Size: 0x4
    // Offset: 0x10
    float m_Duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_IgnoreTimeScale
    // Size: 0x1
    // Offset: 0x14
    bool m_IgnoreTimeScale;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: FloatTween
    constexpr FloatTween(::UnityEngine::UI::CoroutineTween::FloatTween::FloatTweenCallback* m_Target_ = {}, float m_StartValue_ = {}, float m_TargetValue_ = {}, float m_Duration_ = {}, bool m_IgnoreTimeScale_ = {}) noexcept : m_Target{m_Target_}, m_StartValue{m_StartValue_}, m_TargetValue{m_TargetValue_}, m_Duration{m_Duration_}, m_IgnoreTimeScale{m_IgnoreTimeScale_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::UI::CoroutineTween::ITweenValue
    operator ::UnityEngine::UI::CoroutineTween::ITweenValue() noexcept {
      return *reinterpret_cast<::UnityEngine::UI::CoroutineTween::ITweenValue*>(this);
    }
    // Get instance field reference: private UnityEngine.UI.CoroutineTween.FloatTween/FloatTweenCallback m_Target
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::CoroutineTween::FloatTween::FloatTweenCallback*& dyn_m_Target();
    // Get instance field reference: private System.Single m_StartValue
    [[deprecated("Use field access instead!")]] float& dyn_m_StartValue();
    // Get instance field reference: private System.Single m_TargetValue
    [[deprecated("Use field access instead!")]] float& dyn_m_TargetValue();
    // Get instance field reference: private System.Single m_Duration
    [[deprecated("Use field access instead!")]] float& dyn_m_Duration();
    // Get instance field reference: private System.Boolean m_IgnoreTimeScale
    [[deprecated("Use field access instead!")]] bool& dyn_m_IgnoreTimeScale();
    // public System.Single get_startValue()
    // Offset: 0x99C858
    float get_startValue();
    // public System.Void set_startValue(System.Single value)
    // Offset: 0x99C860
    void set_startValue(float value);
    // public System.Single get_targetValue()
    // Offset: 0x99C868
    float get_targetValue();
    // public System.Void set_targetValue(System.Single value)
    // Offset: 0x99C870
    void set_targetValue(float value);
    // public System.Single get_duration()
    // Offset: 0x99C878
    float get_duration();
    // public System.Void set_duration(System.Single value)
    // Offset: 0x99C880
    void set_duration(float value);
    // public System.Boolean get_ignoreTimeScale()
    // Offset: 0x99C888
    bool get_ignoreTimeScale();
    // public System.Void set_ignoreTimeScale(System.Boolean value)
    // Offset: 0x99C890
    void set_ignoreTimeScale(bool value);
    // public System.Void TweenValue(System.Single floatPercentage)
    // Offset: 0x99C89C
    void TweenValue(float floatPercentage);
    // public System.Void AddOnChangedCallback(UnityEngine.Events.UnityAction`1<System.Single> callback)
    // Offset: 0x99C8A4
    void AddOnChangedCallback(::UnityEngine::Events::UnityAction_1<float>* callback);
    // public System.Boolean GetIgnoreTimescale()
    // Offset: 0x99C8AC
    bool GetIgnoreTimescale();
    // public System.Single GetDuration()
    // Offset: 0x99C8B4
    float GetDuration();
    // public System.Boolean ValidTarget()
    // Offset: 0x99C8BC
    bool ValidTarget();
  }; // UnityEngine.UI.CoroutineTween.FloatTween
  #pragma pack(pop)
  static check_size<sizeof(FloatTween), 20 + sizeof(bool)> __UnityEngine_UI_CoroutineTween_FloatTweenSizeCheck;
  static_assert(sizeof(FloatTween) == 0x15);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::FloatTween::get_startValue
// Il2CppName: get_startValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UI::CoroutineTween::FloatTween::*)()>(&UnityEngine::UI::CoroutineTween::FloatTween::get_startValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::FloatTween), "get_startValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::FloatTween::set_startValue
// Il2CppName: set_startValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CoroutineTween::FloatTween::*)(float)>(&UnityEngine::UI::CoroutineTween::FloatTween::set_startValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::FloatTween), "set_startValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::FloatTween::get_targetValue
// Il2CppName: get_targetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UI::CoroutineTween::FloatTween::*)()>(&UnityEngine::UI::CoroutineTween::FloatTween::get_targetValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::FloatTween), "get_targetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::FloatTween::set_targetValue
// Il2CppName: set_targetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CoroutineTween::FloatTween::*)(float)>(&UnityEngine::UI::CoroutineTween::FloatTween::set_targetValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::FloatTween), "set_targetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::FloatTween::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UI::CoroutineTween::FloatTween::*)()>(&UnityEngine::UI::CoroutineTween::FloatTween::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::FloatTween), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::FloatTween::set_duration
// Il2CppName: set_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CoroutineTween::FloatTween::*)(float)>(&UnityEngine::UI::CoroutineTween::FloatTween::set_duration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::FloatTween), "set_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::FloatTween::get_ignoreTimeScale
// Il2CppName: get_ignoreTimeScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::CoroutineTween::FloatTween::*)()>(&UnityEngine::UI::CoroutineTween::FloatTween::get_ignoreTimeScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::FloatTween), "get_ignoreTimeScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::FloatTween::set_ignoreTimeScale
// Il2CppName: set_ignoreTimeScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CoroutineTween::FloatTween::*)(bool)>(&UnityEngine::UI::CoroutineTween::FloatTween::set_ignoreTimeScale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::FloatTween), "set_ignoreTimeScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::FloatTween::TweenValue
// Il2CppName: TweenValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CoroutineTween::FloatTween::*)(float)>(&UnityEngine::UI::CoroutineTween::FloatTween::TweenValue)> {
  static const MethodInfo* get() {
    static auto* floatPercentage = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::FloatTween), "TweenValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{floatPercentage});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::FloatTween::AddOnChangedCallback
// Il2CppName: AddOnChangedCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::CoroutineTween::FloatTween::*)(::UnityEngine::Events::UnityAction_1<float>*)>(&UnityEngine::UI::CoroutineTween::FloatTween::AddOnChangedCallback)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::FloatTween), "AddOnChangedCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::FloatTween::GetIgnoreTimescale
// Il2CppName: GetIgnoreTimescale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::CoroutineTween::FloatTween::*)()>(&UnityEngine::UI::CoroutineTween::FloatTween::GetIgnoreTimescale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::FloatTween), "GetIgnoreTimescale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::FloatTween::GetDuration
// Il2CppName: GetDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UI::CoroutineTween::FloatTween::*)()>(&UnityEngine::UI::CoroutineTween::FloatTween::GetDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::FloatTween), "GetDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::CoroutineTween::FloatTween::ValidTarget
// Il2CppName: ValidTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::CoroutineTween::FloatTween::*)()>(&UnityEngine::UI::CoroutineTween::FloatTween::ValidTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::CoroutineTween::FloatTween), "ValidTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
