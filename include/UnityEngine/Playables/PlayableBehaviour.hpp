// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.IPlayableBehaviour
#include "UnityEngine/Playables/IPlayableBehaviour.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableBehaviour
  class PlayableBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Playables::PlayableBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableBehaviour*, "UnityEngine.Playables", "PlayableBehaviour");
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Playables.PlayableBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: A6C15C
  class PlayableBehaviour : public ::Il2CppObject/*, public ::UnityEngine::Playables::IPlayableBehaviour, public ::System::ICloneable*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Playables::IPlayableBehaviour
    operator ::UnityEngine::Playables::IPlayableBehaviour() noexcept {
      return *reinterpret_cast<::UnityEngine::Playables::IPlayableBehaviour*>(this);
    }
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x1528584
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayableBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Playables::PlayableBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayableBehaviour*, creationType>()));
    }
    // public System.Void OnGraphStart(UnityEngine.Playables.Playable playable)
    // Offset: 0x152858C
    void OnGraphStart(::UnityEngine::Playables::Playable playable);
    // public System.Void OnGraphStop(UnityEngine.Playables.Playable playable)
    // Offset: 0x1528590
    void OnGraphStop(::UnityEngine::Playables::Playable playable);
    // public System.Void OnPlayableCreate(UnityEngine.Playables.Playable playable)
    // Offset: 0x1528594
    void OnPlayableCreate(::UnityEngine::Playables::Playable playable);
    // public System.Void OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    // Offset: 0x1528598
    void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);
    // public System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x152859C
    void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);
    // public System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x15285A0
    void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);
    // public System.Void PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x15285A4
    void PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);
    // public System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x15285A8
    void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
    // public System.Object Clone()
    // Offset: 0x15285AC
    ::Il2CppObject* Clone();
  }; // UnityEngine.Playables.PlayableBehaviour
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBehaviour::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBehaviour::OnGraphStart
// Il2CppName: OnGraphStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableBehaviour::*)(::UnityEngine::Playables::Playable)>(&UnityEngine::Playables::PlayableBehaviour::OnGraphStart)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableBehaviour*), "OnGraphStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBehaviour::OnGraphStop
// Il2CppName: OnGraphStop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableBehaviour::*)(::UnityEngine::Playables::Playable)>(&UnityEngine::Playables::PlayableBehaviour::OnGraphStop)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableBehaviour*), "OnGraphStop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBehaviour::OnPlayableCreate
// Il2CppName: OnPlayableCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableBehaviour::*)(::UnityEngine::Playables::Playable)>(&UnityEngine::Playables::PlayableBehaviour::OnPlayableCreate)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableBehaviour*), "OnPlayableCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBehaviour::OnPlayableDestroy
// Il2CppName: OnPlayableDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableBehaviour::*)(::UnityEngine::Playables::Playable)>(&UnityEngine::Playables::PlayableBehaviour::OnPlayableDestroy)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableBehaviour*), "OnPlayableDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBehaviour::OnBehaviourPlay
// Il2CppName: OnBehaviourPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&UnityEngine::Playables::PlayableBehaviour::OnBehaviourPlay)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableBehaviour*), "OnBehaviourPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBehaviour::OnBehaviourPause
// Il2CppName: OnBehaviourPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&UnityEngine::Playables::PlayableBehaviour::OnBehaviourPause)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableBehaviour*), "OnBehaviourPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBehaviour::PrepareFrame
// Il2CppName: PrepareFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&UnityEngine::Playables::PlayableBehaviour::PrepareFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableBehaviour*), "PrepareFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBehaviour::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Playables::PlayableBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&UnityEngine::Playables::PlayableBehaviour::ProcessFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* playerData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableBehaviour*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info, playerData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBehaviour::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::Playables::PlayableBehaviour::*)()>(&UnityEngine::Playables::PlayableBehaviour::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableBehaviour*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
