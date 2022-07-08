// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Animations.TransformStreamHandle
#include "UnityEngine/Animations/TransformStreamHandle.hpp"
// Including type: UnityEngine.Animations.TransformSceneHandle
#include "UnityEngine/Animations/TransformSceneHandle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Animator
  class Animator;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::Animations
namespace UnityEngine::Animations {
  // Forward declaring type: AnimationStream
  struct AnimationStream;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: ReadOnlyTransformHandle
  struct ReadOnlyTransformHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle, "UnityEngine.Animations.Rigging", "ReadOnlyTransformHandle");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x15
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.Rigging.ReadOnlyTransformHandle
  // [TokenAttribute] Offset: FFFFFFFF
  struct ReadOnlyTransformHandle/*, public ::System::ValueType*/ {
    public:
    public:
    // private UnityEngine.Animations.TransformStreamHandle m_StreamHandle
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Animations::TransformStreamHandle m_StreamHandle;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::TransformStreamHandle) == 0xC);
    // private UnityEngine.Animations.TransformSceneHandle m_SceneHandle
    // Size: 0x8
    // Offset: 0xC
    ::UnityEngine::Animations::TransformSceneHandle m_SceneHandle;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::TransformSceneHandle) == 0x8);
    // private System.Byte m_InStream
    // Size: 0x1
    // Offset: 0x14
    uint8_t m_InStream;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: ReadOnlyTransformHandle
    constexpr ReadOnlyTransformHandle(::UnityEngine::Animations::TransformStreamHandle m_StreamHandle_ = {}, ::UnityEngine::Animations::TransformSceneHandle m_SceneHandle_ = {}, uint8_t m_InStream_ = {}) noexcept : m_StreamHandle{m_StreamHandle_}, m_SceneHandle{m_SceneHandle_}, m_InStream{m_InStream_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private UnityEngine.Animations.TransformStreamHandle m_StreamHandle
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::TransformStreamHandle& dyn_m_StreamHandle();
    // Get instance field reference: private UnityEngine.Animations.TransformSceneHandle m_SceneHandle
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::TransformSceneHandle& dyn_m_SceneHandle();
    // Get instance field reference: private System.Byte m_InStream
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_InStream();
    // public UnityEngine.Vector3 GetLocalPosition(UnityEngine.Animations.AnimationStream stream)
    // Offset: 0x9ABFF4
    ::UnityEngine::Vector3 GetLocalPosition(::UnityEngine::Animations::AnimationStream stream);
    // public UnityEngine.Quaternion GetLocalRotation(UnityEngine.Animations.AnimationStream stream)
    // Offset: 0x9AC030
    ::UnityEngine::Quaternion GetLocalRotation(::UnityEngine::Animations::AnimationStream stream);
    // public UnityEngine.Vector3 GetLocalScale(UnityEngine.Animations.AnimationStream stream)
    // Offset: 0x9AC06C
    ::UnityEngine::Vector3 GetLocalScale(::UnityEngine::Animations::AnimationStream stream);
    // public System.Void GetLocalTRS(UnityEngine.Animations.AnimationStream stream, out UnityEngine.Vector3 position, out UnityEngine.Quaternion rotation, out UnityEngine.Vector3 scale)
    // Offset: 0x9AC0A8
    void GetLocalTRS(::UnityEngine::Animations::AnimationStream stream, ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation, ByRef<::UnityEngine::Vector3> scale);
    // public UnityEngine.Vector3 GetPosition(UnityEngine.Animations.AnimationStream stream)
    // Offset: 0x9AC0E4
    ::UnityEngine::Vector3 GetPosition(::UnityEngine::Animations::AnimationStream stream);
    // public UnityEngine.Quaternion GetRotation(UnityEngine.Animations.AnimationStream stream)
    // Offset: 0x9AC120
    ::UnityEngine::Quaternion GetRotation(::UnityEngine::Animations::AnimationStream stream);
    // public System.Void GetGlobalTR(UnityEngine.Animations.AnimationStream stream, out UnityEngine.Vector3 position, out UnityEngine.Quaternion rotation)
    // Offset: 0x9AC15C
    void GetGlobalTR(::UnityEngine::Animations::AnimationStream stream, ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation);
    // public System.Boolean IsResolved(UnityEngine.Animations.AnimationStream stream)
    // Offset: 0x9AC198
    bool IsResolved(::UnityEngine::Animations::AnimationStream stream);
    // public System.Boolean IsValid(UnityEngine.Animations.AnimationStream stream)
    // Offset: 0x9AC208
    bool IsValid(::UnityEngine::Animations::AnimationStream stream);
    // public System.Void Resolve(UnityEngine.Animations.AnimationStream stream)
    // Offset: 0x9AC248
    void Resolve(::UnityEngine::Animations::AnimationStream stream);
    // static public UnityEngine.Animations.Rigging.ReadOnlyTransformHandle Bind(UnityEngine.Animator animator, UnityEngine.Transform transform)
    // Offset: 0x1160F90
    static ::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle Bind(::UnityEngine::Animator* animator, ::UnityEngine::Transform* transform);
  }; // UnityEngine.Animations.Rigging.ReadOnlyTransformHandle
  #pragma pack(pop)
  static check_size<sizeof(ReadOnlyTransformHandle), 20 + sizeof(uint8_t)> __UnityEngine_Animations_Rigging_ReadOnlyTransformHandleSizeCheck;
  static_assert(sizeof(ReadOnlyTransformHandle) == 0x15);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::GetLocalPosition
// Il2CppName: GetLocalPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::*)(::UnityEngine::Animations::AnimationStream)>(&UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::GetLocalPosition)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ReadOnlyTransformHandle), "GetLocalPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::GetLocalRotation
// Il2CppName: GetLocalRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::*)(::UnityEngine::Animations::AnimationStream)>(&UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::GetLocalRotation)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ReadOnlyTransformHandle), "GetLocalRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::GetLocalScale
// Il2CppName: GetLocalScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::*)(::UnityEngine::Animations::AnimationStream)>(&UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::GetLocalScale)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ReadOnlyTransformHandle), "GetLocalScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::GetLocalTRS
// Il2CppName: GetLocalTRS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::*)(::UnityEngine::Animations::AnimationStream, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Vector3>)>(&UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::GetLocalTRS)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ReadOnlyTransformHandle), "GetLocalTRS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, position, rotation, scale});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::GetPosition
// Il2CppName: GetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::*)(::UnityEngine::Animations::AnimationStream)>(&UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::GetPosition)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ReadOnlyTransformHandle), "GetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::GetRotation
// Il2CppName: GetRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::*)(::UnityEngine::Animations::AnimationStream)>(&UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::GetRotation)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ReadOnlyTransformHandle), "GetRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::GetGlobalTR
// Il2CppName: GetGlobalTR
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::*)(::UnityEngine::Animations::AnimationStream, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>)>(&UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::GetGlobalTR)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ReadOnlyTransformHandle), "GetGlobalTR", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, position, rotation});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::IsResolved
// Il2CppName: IsResolved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::*)(::UnityEngine::Animations::AnimationStream)>(&UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::IsResolved)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ReadOnlyTransformHandle), "IsResolved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::*)(::UnityEngine::Animations::AnimationStream)>(&UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::IsValid)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ReadOnlyTransformHandle), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::Resolve
// Il2CppName: Resolve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::*)(::UnityEngine::Animations::AnimationStream)>(&UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::Resolve)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ReadOnlyTransformHandle), "Resolve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::Bind
// Il2CppName: Bind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::Rigging::ReadOnlyTransformHandle (*)(::UnityEngine::Animator*, ::UnityEngine::Transform*)>(&UnityEngine::Animations::Rigging::ReadOnlyTransformHandle::Bind)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ReadOnlyTransformHandle), "Bind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator, transform});
  }
};
