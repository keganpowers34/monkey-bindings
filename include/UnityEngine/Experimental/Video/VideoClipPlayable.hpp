// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayable
#include "UnityEngine/Playables/IPlayable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.PlayableHandle
#include "UnityEngine/Playables/PlayableHandle.hpp"
// Completed includes
// Type namespace: UnityEngine.Experimental.Video
namespace UnityEngine::Experimental::Video {
  // Forward declaring type: VideoClipPlayable
  struct VideoClipPlayable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Video::VideoClipPlayable, "UnityEngine.Experimental.Video", "VideoClipPlayable");
// Type namespace: UnityEngine.Experimental.Video
namespace UnityEngine::Experimental::Video {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.Video.VideoClipPlayable
  // [TokenAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: AAA65C
  // [RequiredByNativeCodeAttribute] Offset: AAA65C
  // [NativeHeaderAttribute] Offset: AAA65C
  // [NativeHeaderAttribute] Offset: AAA65C
  // [NativeHeaderAttribute] Offset: AAA65C
  // [NativeHeaderAttribute] Offset: AAA65C
  struct VideoClipPlayable/*, public ::System::ValueType, public ::UnityEngine::Playables::IPlayable, public ::System::IEquatable_1<::UnityEngine::Experimental::Video::VideoClipPlayable>*/ {
    public:
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Playables::PlayableHandle m_Handle;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableHandle) == 0xC);
    public:
    // Creating value type constructor for type: VideoClipPlayable
    constexpr VideoClipPlayable(::UnityEngine::Playables::PlayableHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Playables::IPlayable
    operator ::UnityEngine::Playables::IPlayable() noexcept {
      return *reinterpret_cast<::UnityEngine::Playables::IPlayable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Experimental::Video::VideoClipPlayable>
    operator ::System::IEquatable_1<::UnityEngine::Experimental::Video::VideoClipPlayable>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Experimental::Video::VideoClipPlayable>*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Playables::PlayableHandle
    constexpr operator ::UnityEngine::Playables::PlayableHandle() const noexcept {
      return m_Handle;
    }
    // Get instance field reference: private UnityEngine.Playables.PlayableHandle m_Handle
    [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::PlayableHandle& dyn_m_Handle();
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0x9D1890
    ::UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Experimental.Video.VideoClipPlayable other)
    // Offset: 0x9D189C
    bool Equals(::UnityEngine::Experimental::Video::VideoClipPlayable other);
  }; // UnityEngine.Experimental.Video.VideoClipPlayable
  #pragma pack(pop)
  static check_size<sizeof(VideoClipPlayable), 0 + sizeof(::UnityEngine::Playables::PlayableHandle)> __UnityEngine_Experimental_Video_VideoClipPlayableSizeCheck;
  static_assert(sizeof(VideoClipPlayable) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Video::VideoClipPlayable::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableHandle (UnityEngine::Experimental::Video::VideoClipPlayable::*)()>(&UnityEngine::Experimental::Video::VideoClipPlayable::GetHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Video::VideoClipPlayable), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Video::VideoClipPlayable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Experimental::Video::VideoClipPlayable::*)(::UnityEngine::Experimental::Video::VideoClipPlayable)>(&UnityEngine::Experimental::Video::VideoClipPlayable::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Video", "VideoClipPlayable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Video::VideoClipPlayable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
