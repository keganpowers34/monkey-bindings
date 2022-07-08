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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SmoothLoop
  class SmoothLoop;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SmoothLoop);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SmoothLoop*, "", "SmoothLoop");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: SmoothLoop
  // [TokenAttribute] Offset: FFFFFFFF
  class SmoothLoop : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::SmoothLoop::$DelayedStart$d__6
    class $DelayedStart$d__6;
    public:
    // public UnityEngine.AudioSource source
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AudioSource* source;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // public System.Single delay
    // Size: 0x4
    // Offset: 0x20
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean randomStart
    // Size: 0x1
    // Offset: 0x24
    bool randomStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.AudioSource source
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn_source();
    // Get instance field reference: public System.Single delay
    [[deprecated("Use field access instead!")]] float& dyn_delay();
    // Get instance field reference: public System.Boolean randomStart
    [[deprecated("Use field access instead!")]] bool& dyn_randomStart();
    // private System.Void Start()
    // Offset: 0x1B9E84C
    void Start();
    // private System.Void Update()
    // Offset: 0x1B9E978
    void Update();
    // private System.Void OnEnable()
    // Offset: 0x1B9EA08
    void OnEnable();
    // public System.Collections.IEnumerator DelayedStart()
    // Offset: 0x1B9E908
    ::System::Collections::IEnumerator* DelayedStart();
    // public System.Void .ctor()
    // Offset: 0x1B9EAD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SmoothLoop* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SmoothLoop::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SmoothLoop*, creationType>()));
    }
  }; // SmoothLoop
  #pragma pack(pop)
  static check_size<sizeof(SmoothLoop), 36 + sizeof(bool)> __GlobalNamespace_SmoothLoopSizeCheck;
  static_assert(sizeof(SmoothLoop) == 0x25);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SmoothLoop::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SmoothLoop::*)()>(&GlobalNamespace::SmoothLoop::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SmoothLoop*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SmoothLoop::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SmoothLoop::*)()>(&GlobalNamespace::SmoothLoop::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SmoothLoop*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SmoothLoop::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SmoothLoop::*)()>(&GlobalNamespace::SmoothLoop::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SmoothLoop*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SmoothLoop::DelayedStart
// Il2CppName: DelayedStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::SmoothLoop::*)()>(&GlobalNamespace::SmoothLoop::DelayedStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SmoothLoop*), "DelayedStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SmoothLoop::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
