// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Animations.Rigging.IAnimatableProperty`1
#include "UnityEngine/Animations/Rigging/IAnimatableProperty_1.hpp"
// Including type: UnityEngine.Animations.PropertyStreamHandle
#include "UnityEngine/Animations/PropertyStreamHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
  // Forward declaring type: Component
  class Component;
}
// Forward declaring namespace: UnityEngine::Animations
namespace UnityEngine::Animations {
  // Skipping declaration: AnimationStream because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: IntProperty
  struct IntProperty;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::IntProperty, "UnityEngine.Animations.Rigging", "IntProperty");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.Rigging.IntProperty
  // [TokenAttribute] Offset: FFFFFFFF
  struct IntProperty/*, public ::System::ValueType, public ::UnityEngine::Animations::Rigging::IAnimatableProperty_1<int>*/ {
    public:
    public:
    // public UnityEngine.Animations.PropertyStreamHandle value
    // Size: 0x10
    // Offset: 0x0
    ::UnityEngine::Animations::PropertyStreamHandle value;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::PropertyStreamHandle) == 0x10);
    public:
    // Creating value type constructor for type: IntProperty
    constexpr IntProperty(::UnityEngine::Animations::PropertyStreamHandle value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Animations::Rigging::IAnimatableProperty_1<int>
    operator ::UnityEngine::Animations::Rigging::IAnimatableProperty_1<int>() noexcept {
      return *reinterpret_cast<::UnityEngine::Animations::Rigging::IAnimatableProperty_1<int>*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Animations::PropertyStreamHandle
    constexpr operator ::UnityEngine::Animations::PropertyStreamHandle() const noexcept {
      return value;
    }
    // Get instance field reference: public UnityEngine.Animations.PropertyStreamHandle value
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::PropertyStreamHandle& dyn_value();
    // static public UnityEngine.Animations.Rigging.IntProperty Bind(UnityEngine.Animator animator, UnityEngine.Component component, System.String name)
    // Offset: 0x115B42C
    static ::UnityEngine::Animations::Rigging::IntProperty Bind(::UnityEngine::Animator* animator, ::UnityEngine::Component* component, ::StringW name);
    // static public UnityEngine.Animations.Rigging.IntProperty BindCustom(UnityEngine.Animator animator, System.String property)
    // Offset: 0x115B490
    static ::UnityEngine::Animations::Rigging::IntProperty BindCustom(::UnityEngine::Animator* animator, ::StringW property);
    // public System.Int32 Get(UnityEngine.Animations.AnimationStream stream)
    // Offset: 0x9AB71C
    int Get(::UnityEngine::Animations::AnimationStream stream);
    // public System.Void Set(UnityEngine.Animations.AnimationStream stream, System.Int32 v)
    // Offset: 0x9AB75C
    void Set(::UnityEngine::Animations::AnimationStream stream, int v);
  }; // UnityEngine.Animations.Rigging.IntProperty
  #pragma pack(pop)
  static check_size<sizeof(IntProperty), 0 + sizeof(::UnityEngine::Animations::PropertyStreamHandle)> __UnityEngine_Animations_Rigging_IntPropertySizeCheck;
  static_assert(sizeof(IntProperty) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IntProperty::Bind
// Il2CppName: Bind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::Rigging::IntProperty (*)(::UnityEngine::Animator*, ::UnityEngine::Component*, ::StringW)>(&UnityEngine::Animations::Rigging::IntProperty::Bind)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* component = &::il2cpp_utils::GetClassFromName("UnityEngine", "Component")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IntProperty), "Bind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, component, name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IntProperty::BindCustom
// Il2CppName: BindCustom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::Rigging::IntProperty (*)(::UnityEngine::Animator*, ::StringW)>(&UnityEngine::Animations::Rigging::IntProperty::BindCustom)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* property = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IntProperty), "BindCustom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, property});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IntProperty::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Animations::Rigging::IntProperty::*)(::UnityEngine::Animations::AnimationStream)>(&UnityEngine::Animations::Rigging::IntProperty::Get)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IntProperty), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IntProperty::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::IntProperty::*)(::UnityEngine::Animations::AnimationStream, int)>(&UnityEngine::Animations::Rigging::IntProperty::Set)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->byval_arg;
    static auto* v = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IntProperty), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, v});
  }
};
