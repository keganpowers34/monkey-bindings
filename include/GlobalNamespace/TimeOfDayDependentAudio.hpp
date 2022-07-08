// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BetterDayNightManager/WeatherType
#include "GlobalNamespace/BetterDayNightManager.hpp"
// Including type: UnityEngine.ParticleSystem/MinMaxCurve
#include "UnityEngine/ParticleSystem_MinMaxCurve.hpp"
// Including type: UnityEngine.ParticleSystem/EmissionModule
#include "UnityEngine/ParticleSystem_EmissionModule.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: ParticleSystem because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TimeOfDayDependentAudio
  class TimeOfDayDependentAudio;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TimeOfDayDependentAudio);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TimeOfDayDependentAudio*, "", "TimeOfDayDependentAudio");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x9D
  #pragma pack(push, 1)
  // Autogenerated type: TimeOfDayDependentAudio
  // [TokenAttribute] Offset: FFFFFFFF
  class TimeOfDayDependentAudio : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::TimeOfDayDependentAudio::$UpdateTimeOfDay$d__22
    class $UpdateTimeOfDay$d__22;
    public:
    // public UnityEngine.AudioSource[] audioSources
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::AudioSource*> audioSources;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioSource*>) == 0x8);
    // public System.Single[] volumes
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<float> volumes;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single currentVolume
    // Size: 0x4
    // Offset: 0x28
    float currentVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single stepTime
    // Size: 0x4
    // Offset: 0x2C
    float stepTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public BetterDayNightManager/WeatherType myWeather
    // Size: 0x4
    // Offset: 0x30
    ::GlobalNamespace::BetterDayNightManager::WeatherType myWeather;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BetterDayNightManager::WeatherType) == 0x4);
    // Padding between fields: myWeather and: dependentStuff
    char __padding4[0x4] = {};
    // public UnityEngine.GameObject dependentStuff
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::GameObject* dependentStuff;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject timeOfDayDependent
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::GameObject* timeOfDayDependent;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public System.Boolean includesAudio
    // Size: 0x1
    // Offset: 0x48
    bool includesAudio;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: includesAudio and: myParticleSystem
    char __padding7[0x7] = {};
    // public UnityEngine.ParticleSystem myParticleSystem
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::ParticleSystem* myParticleSystem;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // private System.Single startingEmissionRate
    // Size: 0x4
    // Offset: 0x58
    float startingEmissionRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 lastEmission
    // Size: 0x4
    // Offset: 0x5C
    int lastEmission;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 nextEmission
    // Size: 0x4
    // Offset: 0x60
    int nextEmission;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: nextEmission and: newCurve
    char __padding11[0x4] = {};
    // private UnityEngine.ParticleSystem/MinMaxCurve newCurve
    // Size: 0x20
    // Offset: 0x68
    ::UnityEngine::ParticleSystem::MinMaxCurve newCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem::MinMaxCurve) == 0x20);
    // private UnityEngine.ParticleSystem/EmissionModule myEmissionModule
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::ParticleSystem::EmissionModule myEmissionModule;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem::EmissionModule) == 0x8);
    // private System.Single newRate
    // Size: 0x4
    // Offset: 0x90
    float newRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single positionMultiplierSet
    // Size: 0x4
    // Offset: 0x94
    float positionMultiplierSet;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single positionMultiplier
    // Size: 0x4
    // Offset: 0x98
    float positionMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean isModified
    // Size: 0x1
    // Offset: 0x9C
    bool isModified;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.AudioSource[] audioSources
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioSource*>& dyn_audioSources();
    // Get instance field reference: public System.Single[] volumes
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_volumes();
    // Get instance field reference: public System.Single currentVolume
    [[deprecated("Use field access instead!")]] float& dyn_currentVolume();
    // Get instance field reference: public System.Single stepTime
    [[deprecated("Use field access instead!")]] float& dyn_stepTime();
    // Get instance field reference: public BetterDayNightManager/WeatherType myWeather
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BetterDayNightManager::WeatherType& dyn_myWeather();
    // Get instance field reference: public UnityEngine.GameObject dependentStuff
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_dependentStuff();
    // Get instance field reference: public UnityEngine.GameObject timeOfDayDependent
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_timeOfDayDependent();
    // Get instance field reference: public System.Boolean includesAudio
    [[deprecated("Use field access instead!")]] bool& dyn_includesAudio();
    // Get instance field reference: public UnityEngine.ParticleSystem myParticleSystem
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn_myParticleSystem();
    // Get instance field reference: private System.Single startingEmissionRate
    [[deprecated("Use field access instead!")]] float& dyn_startingEmissionRate();
    // Get instance field reference: private System.Int32 lastEmission
    [[deprecated("Use field access instead!")]] int& dyn_lastEmission();
    // Get instance field reference: private System.Int32 nextEmission
    [[deprecated("Use field access instead!")]] int& dyn_nextEmission();
    // Get instance field reference: private UnityEngine.ParticleSystem/MinMaxCurve newCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem::MinMaxCurve& dyn_newCurve();
    // Get instance field reference: private UnityEngine.ParticleSystem/EmissionModule myEmissionModule
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem::EmissionModule& dyn_myEmissionModule();
    // Get instance field reference: private System.Single newRate
    [[deprecated("Use field access instead!")]] float& dyn_newRate();
    // Get instance field reference: public System.Single positionMultiplierSet
    [[deprecated("Use field access instead!")]] float& dyn_positionMultiplierSet();
    // Get instance field reference: public System.Single positionMultiplier
    [[deprecated("Use field access instead!")]] float& dyn_positionMultiplier();
    // Get instance field reference: public System.Boolean isModified
    [[deprecated("Use field access instead!")]] bool& dyn_isModified();
    // private System.Void Awake()
    // Offset: 0x1BA4F98
    void Awake();
    // private System.Void OnDisable()
    // Offset: 0x1BA5068
    void OnDisable();
    // private System.Void OnEnable()
    // Offset: 0x1BA5070
    void OnEnable();
    // private System.Void FixedUpdate()
    // Offset: 0x1BA510C
    void FixedUpdate();
    // private System.Collections.IEnumerator UpdateTimeOfDay()
    // Offset: 0x1BA509C
    ::System::Collections::IEnumerator* UpdateTimeOfDay();
    // public System.Void .ctor()
    // Offset: 0x1BA5140
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeOfDayDependentAudio* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TimeOfDayDependentAudio::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeOfDayDependentAudio*, creationType>()));
    }
  }; // TimeOfDayDependentAudio
  #pragma pack(pop)
  static check_size<sizeof(TimeOfDayDependentAudio), 156 + sizeof(bool)> __GlobalNamespace_TimeOfDayDependentAudioSizeCheck;
  static_assert(sizeof(TimeOfDayDependentAudio) == 0x9D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TimeOfDayDependentAudio::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TimeOfDayDependentAudio::*)()>(&GlobalNamespace::TimeOfDayDependentAudio::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeOfDayDependentAudio*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeOfDayDependentAudio::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TimeOfDayDependentAudio::*)()>(&GlobalNamespace::TimeOfDayDependentAudio::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeOfDayDependentAudio*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeOfDayDependentAudio::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TimeOfDayDependentAudio::*)()>(&GlobalNamespace::TimeOfDayDependentAudio::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeOfDayDependentAudio*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeOfDayDependentAudio::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TimeOfDayDependentAudio::*)()>(&GlobalNamespace::TimeOfDayDependentAudio::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeOfDayDependentAudio*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeOfDayDependentAudio::UpdateTimeOfDay
// Il2CppName: UpdateTimeOfDay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::TimeOfDayDependentAudio::*)()>(&GlobalNamespace::TimeOfDayDependentAudio::UpdateTimeOfDay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TimeOfDayDependentAudio*), "UpdateTimeOfDay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TimeOfDayDependentAudio::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
