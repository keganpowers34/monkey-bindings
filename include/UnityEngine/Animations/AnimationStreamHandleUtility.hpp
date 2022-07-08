// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Animations.PropertyStreamHandle
#include "UnityEngine/Animations/PropertyStreamHandle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Animations
namespace UnityEngine::Animations {
  // Forward declaring type: AnimationStream
  struct AnimationStream;
}
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Forward declaring type: NativeArray`1<T>
  template<typename T>
  struct NativeArray_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Forward declaring type: AnimationStreamHandleUtility
  class AnimationStreamHandleUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::AnimationStreamHandleUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationStreamHandleUtility*, "UnityEngine.Animations", "AnimationStreamHandleUtility");
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.AnimationStreamHandleUtility
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: A9212C
  // [MovedFromAttribute] Offset: A9212C
  class AnimationStreamHandleUtility : public ::Il2CppObject {
    public:
    // static public System.Void WriteFloats(UnityEngine.Animations.AnimationStream stream, Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertyStreamHandle> handles, Unity.Collections.NativeArray`1<System.Single> buffer, System.Boolean useMask)
    // Offset: 0x1AD1064
    static void WriteFloats(::UnityEngine::Animations::AnimationStream stream, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle> handles, ::Unity::Collections::NativeArray_1<float> buffer, bool useMask);
    // static public System.Void ReadFloats(UnityEngine.Animations.AnimationStream stream, Unity.Collections.NativeArray`1<UnityEngine.Animations.PropertyStreamHandle> handles, Unity.Collections.NativeArray`1<System.Single> buffer)
    // Offset: 0x1AD11F8
    static void ReadFloats(::UnityEngine::Animations::AnimationStream stream, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle> handles, ::Unity::Collections::NativeArray_1<float> buffer);
    // static private System.Void ReadStreamFloatsInternal(ref UnityEngine.Animations.AnimationStream stream, System.Void* propertyStreamHandles, System.Void* floatBuffer, System.Int32 count)
    // Offset: 0x1AD1308
    static void ReadStreamFloatsInternal(ByRef<::UnityEngine::Animations::AnimationStream> stream, void* propertyStreamHandles, void* floatBuffer, int count);
    // static private System.Void WriteStreamFloatsInternal(ref UnityEngine.Animations.AnimationStream stream, System.Void* propertyStreamHandles, System.Void* floatBuffer, System.Int32 count, System.Boolean useMask)
    // Offset: 0x1AD1188
    static void WriteStreamFloatsInternal(ByRef<::UnityEngine::Animations::AnimationStream> stream, void* propertyStreamHandles, void* floatBuffer, int count, bool useMask);
  }; // UnityEngine.Animations.AnimationStreamHandleUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationStreamHandleUtility::WriteFloats
// Il2CppName: WriteFloats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Animations::AnimationStream, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>, ::Unity::Collections::NativeArray_1<float>, bool)>(&UnityEngine::Animations::AnimationStreamHandleUtility::WriteFloats)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->byval_arg;
    static auto* handles = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "PropertyStreamHandle")})->byval_arg;
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    static auto* useMask = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationStreamHandleUtility*), "WriteFloats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, handles, buffer, useMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationStreamHandleUtility::ReadFloats
// Il2CppName: ReadFloats
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Animations::AnimationStream, ::Unity::Collections::NativeArray_1<::UnityEngine::Animations::PropertyStreamHandle>, ::Unity::Collections::NativeArray_1<float>)>(&UnityEngine::Animations::AnimationStreamHandleUtility::ReadFloats)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->byval_arg;
    static auto* handles = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "PropertyStreamHandle")})->byval_arg;
    static auto* buffer = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Unity.Collections", "NativeArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationStreamHandleUtility*), "ReadFloats", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, handles, buffer});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationStreamHandleUtility::ReadStreamFloatsInternal
// Il2CppName: ReadStreamFloatsInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Animations::AnimationStream>, void*, void*, int)>(&UnityEngine::Animations::AnimationStreamHandleUtility::ReadStreamFloatsInternal)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->this_arg;
    static auto* propertyStreamHandles = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* floatBuffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationStreamHandleUtility*), "ReadStreamFloatsInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, propertyStreamHandles, floatBuffer, count});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::AnimationStreamHandleUtility::WriteStreamFloatsInternal
// Il2CppName: WriteStreamFloatsInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Animations::AnimationStream>, void*, void*, int, bool)>(&UnityEngine::Animations::AnimationStreamHandleUtility::WriteStreamFloatsInternal)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations", "AnimationStream")->this_arg;
    static auto* propertyStreamHandles = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* floatBuffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* useMask = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::AnimationStreamHandleUtility*), "WriteStreamFloatsInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, propertyStreamHandles, floatBuffer, count, useMask});
  }
};
