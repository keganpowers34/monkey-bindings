// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AddCollidersToParticleSystemTriggers
  class AddCollidersToParticleSystemTriggers;
  // Skipping declaration: WeatherType because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Collider
  class Collider;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Random
  class Random;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BetterDayNightManager
  class BetterDayNightManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BetterDayNightManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BetterDayNightManager*, "", "BetterDayNightManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18C
  #pragma pack(push, 1)
  // Autogenerated type: BetterDayNightManager
  // [TokenAttribute] Offset: FFFFFFFF
  class BetterDayNightManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::BetterDayNightManager::WeatherType
    struct WeatherType;
    // Nested type: ::GlobalNamespace::BetterDayNightManager::$UpdateTimeOfDay$d__61
    class $UpdateTimeOfDay$d__61;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: BetterDayNightManager/WeatherType
    // [TokenAttribute] Offset: FFFFFFFF
    struct WeatherType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: WeatherType
      constexpr WeatherType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public BetterDayNightManager/WeatherType None
      static constexpr const int None = 0;
      // Get static field: static public BetterDayNightManager/WeatherType None
      static ::GlobalNamespace::BetterDayNightManager::WeatherType _get_None();
      // Set static field: static public BetterDayNightManager/WeatherType None
      static void _set_None(::GlobalNamespace::BetterDayNightManager::WeatherType value);
      // static field const value: static public BetterDayNightManager/WeatherType Raining
      static constexpr const int Raining = 1;
      // Get static field: static public BetterDayNightManager/WeatherType Raining
      static ::GlobalNamespace::BetterDayNightManager::WeatherType _get_Raining();
      // Set static field: static public BetterDayNightManager/WeatherType Raining
      static void _set_Raining(::GlobalNamespace::BetterDayNightManager::WeatherType value);
      // static field const value: static public BetterDayNightManager/WeatherType All
      static constexpr const int All = 2;
      // Get static field: static public BetterDayNightManager/WeatherType All
      static ::GlobalNamespace::BetterDayNightManager::WeatherType _get_All();
      // Set static field: static public BetterDayNightManager/WeatherType All
      static void _set_All(::GlobalNamespace::BetterDayNightManager::WeatherType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // BetterDayNightManager/WeatherType
    #pragma pack(pop)
    static check_size<sizeof(BetterDayNightManager::WeatherType), 0 + sizeof(int)> __GlobalNamespace_BetterDayNightManager_WeatherTypeSizeCheck;
    static_assert(sizeof(BetterDayNightManager::WeatherType) == 0x4);
    public:
    // public UnityEngine.Shader standard
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Shader* standard;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // public UnityEngine.Shader gorillaUnlit
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Shader* gorillaUnlit;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // public UnityEngine.Shader gorillaUnlitCutout
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Shader* gorillaUnlitCutout;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // public UnityEngine.Material[] standardMaterialsUnlit
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::Material*> standardMaterialsUnlit;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Material*>) == 0x8);
    // public UnityEngine.Material[] standardMaterialsUnlitDarker
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::Material*> standardMaterialsUnlitDarker;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Material*>) == 0x8);
    // public UnityEngine.Material[] dayNightSupportedMaterials
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::Material*> dayNightSupportedMaterials;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Material*>) == 0x8);
    // public UnityEngine.Material[] dayNightSupportedMaterialsCutout
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::UnityEngine::Material*> dayNightSupportedMaterialsCutout;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Material*>) == 0x8);
    // public UnityEngine.Texture2D[] dayNightLightmaps
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::UnityEngine::Texture2D*> dayNightLightmaps;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Texture2D*>) == 0x8);
    // public UnityEngine.Texture2D[] dayNightWeatherLightmaps
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::UnityEngine::Texture2D*> dayNightWeatherLightmaps;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Texture2D*>) == 0x8);
    // public UnityEngine.Texture2D[] dayNightSkyboxTextures
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<::UnityEngine::Texture2D*> dayNightSkyboxTextures;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Texture2D*>) == 0x8);
    // public UnityEngine.Texture2D[] dayNightWeatherSkyboxTextures
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::UnityEngine::Texture2D*> dayNightWeatherSkyboxTextures;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Texture2D*>) == 0x8);
    // public System.Single[] standardUnlitColor
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<float> standardUnlitColor;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single[] standardUnlitColorWithPremadeColorDarker
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<float> standardUnlitColorWithPremadeColorDarker;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public UnityEngine.Material skyMaterial
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::Material* skyMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // public System.Single currentLerp
    // Size: 0x4
    // Offset: 0x88
    float currentLerp;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single currentIncrement
    // Size: 0x4
    // Offset: 0x8C
    float currentIncrement;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single currentTimestep
    // Size: 0x4
    // Offset: 0x90
    float currentTimestep;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single timeOfDay
    // Size: 0x4
    // Offset: 0x94
    float timeOfDay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Double[] timeOfDayRange
    // Size: 0x8
    // Offset: 0x98
    ::ArrayW<double> timeOfDayRange;
    // Field size check
    static_assert(sizeof(::ArrayW<double>) == 0x8);
    // public System.Double timeMultiplier
    // Size: 0x8
    // Offset: 0xA0
    double timeMultiplier;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Single lastTime
    // Size: 0x4
    // Offset: 0xA8
    float lastTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lastTime and: currentTime
    char __padding20[0x4] = {};
    // private System.Double currentTime
    // Size: 0x8
    // Offset: 0xB0
    double currentTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double totalHours
    // Size: 0x8
    // Offset: 0xB8
    double totalHours;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double totalSeconds
    // Size: 0x8
    // Offset: 0xC0
    double totalSeconds;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Single colorFrom
    // Size: 0x4
    // Offset: 0xC8
    float colorFrom;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single colorTo
    // Size: 0x4
    // Offset: 0xCC
    float colorTo;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single colorFromDarker
    // Size: 0x4
    // Offset: 0xD0
    float colorFromDarker;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single colorToDarker
    // Size: 0x4
    // Offset: 0xD4
    float colorToDarker;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 currentTimeIndex
    // Size: 0x4
    // Offset: 0xD8
    int currentTimeIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 currentWeatherIndex
    // Size: 0x4
    // Offset: 0xDC
    int currentWeatherIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 lastIndex
    // Size: 0x4
    // Offset: 0xE0
    int lastIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: lastIndex and: currentIndexSeconds
    char __padding30[0x4] = {};
    // private System.Double currentIndexSeconds
    // Size: 0x8
    // Offset: 0xE8
    double currentIndexSeconds;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Single tempLerp
    // Size: 0x4
    // Offset: 0xF0
    float tempLerp;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: tempLerp and: baseSeconds
    char __padding32[0x4] = {};
    // private System.Double baseSeconds
    // Size: 0x8
    // Offset: 0xF8
    double baseSeconds;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Boolean computerInit
    // Size: 0x1
    // Offset: 0x100
    bool computerInit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: computerInit and: h
    char __padding34[0x3] = {};
    // private System.Single h
    // Size: 0x4
    // Offset: 0x104
    float h;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single s
    // Size: 0x4
    // Offset: 0x108
    float s;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single v
    // Size: 0x4
    // Offset: 0x10C
    float v;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 mySeed
    // Size: 0x4
    // Offset: 0x110
    int mySeed;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: mySeed and: randomNumberGenerator
    char __padding38[0x4] = {};
    // public System.Random randomNumberGenerator
    // Size: 0x8
    // Offset: 0x118
    ::System::Random* randomNumberGenerator;
    // Field size check
    static_assert(sizeof(::System::Random*) == 0x8);
    // public BetterDayNightManager/WeatherType[] weatherCycle
    // Size: 0x8
    // Offset: 0x120
    ::ArrayW<::GlobalNamespace::BetterDayNightManager::WeatherType> weatherCycle;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BetterDayNightManager::WeatherType>) == 0x8);
    // public System.String currentTimeOfDay
    // Size: 0x8
    // Offset: 0x128
    ::StringW currentTimeOfDay;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Single rainChance
    // Size: 0x4
    // Offset: 0x130
    float rainChance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 maxRainDuration
    // Size: 0x4
    // Offset: 0x134
    int maxRainDuration;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single calcRainPercent
    // Size: 0x4
    // Offset: 0x138
    float calcRainPercent;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 rainDuration
    // Size: 0x4
    // Offset: 0x13C
    int rainDuration;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single remainingSeconds
    // Size: 0x4
    // Offset: 0x140
    float remainingSeconds;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 completedDayNightCycles
    // Size: 0x4
    // Offset: 0x144
    int completedDayNightCycles;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 currentWeatherCycle
    // Size: 0x4
    // Offset: 0x148
    int currentWeatherCycle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 fromWeatherIndex
    // Size: 0x4
    // Offset: 0x14C
    int fromWeatherIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 toWeatherIndex
    // Size: 0x4
    // Offset: 0x150
    int toWeatherIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: toWeatherIndex and: fromMap
    char __padding50[0x4] = {};
    // private UnityEngine.Texture2D fromMap
    // Size: 0x8
    // Offset: 0x158
    ::UnityEngine::Texture2D* fromMap;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // private UnityEngine.Texture2D fromSky
    // Size: 0x8
    // Offset: 0x160
    ::UnityEngine::Texture2D* fromSky;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // private UnityEngine.Texture2D toMap
    // Size: 0x8
    // Offset: 0x168
    ::UnityEngine::Texture2D* toMap;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // private UnityEngine.Texture2D toSky
    // Size: 0x8
    // Offset: 0x170
    ::UnityEngine::Texture2D* toSky;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // public AddCollidersToParticleSystemTriggers[] weatherSystems
    // Size: 0x8
    // Offset: 0x178
    ::ArrayW<::GlobalNamespace::AddCollidersToParticleSystemTriggers*> weatherSystems;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::AddCollidersToParticleSystemTriggers*>) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.Collider> collidersToAddToWeatherSystems
    // Size: 0x8
    // Offset: 0x180
    ::System::Collections::Generic::List_1<::UnityEngine::Collider*>* collidersToAddToWeatherSystems;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Collider*>*) == 0x8);
    // public System.Int32 overrideIndex
    // Size: 0x4
    // Offset: 0x188
    int overrideIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static public BetterDayNightManager instance
    static ::GlobalNamespace::BetterDayNightManager* _get_instance();
    // Set static field: static public BetterDayNightManager instance
    static void _set_instance(::GlobalNamespace::BetterDayNightManager* value);
    // Get instance field reference: public UnityEngine.Shader standard
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_standard();
    // Get instance field reference: public UnityEngine.Shader gorillaUnlit
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_gorillaUnlit();
    // Get instance field reference: public UnityEngine.Shader gorillaUnlitCutout
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_gorillaUnlitCutout();
    // Get instance field reference: public UnityEngine.Material[] standardMaterialsUnlit
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Material*>& dyn_standardMaterialsUnlit();
    // Get instance field reference: public UnityEngine.Material[] standardMaterialsUnlitDarker
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Material*>& dyn_standardMaterialsUnlitDarker();
    // Get instance field reference: public UnityEngine.Material[] dayNightSupportedMaterials
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Material*>& dyn_dayNightSupportedMaterials();
    // Get instance field reference: public UnityEngine.Material[] dayNightSupportedMaterialsCutout
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Material*>& dyn_dayNightSupportedMaterialsCutout();
    // Get instance field reference: public UnityEngine.Texture2D[] dayNightLightmaps
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Texture2D*>& dyn_dayNightLightmaps();
    // Get instance field reference: public UnityEngine.Texture2D[] dayNightWeatherLightmaps
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Texture2D*>& dyn_dayNightWeatherLightmaps();
    // Get instance field reference: public UnityEngine.Texture2D[] dayNightSkyboxTextures
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Texture2D*>& dyn_dayNightSkyboxTextures();
    // Get instance field reference: public UnityEngine.Texture2D[] dayNightWeatherSkyboxTextures
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Texture2D*>& dyn_dayNightWeatherSkyboxTextures();
    // Get instance field reference: public System.Single[] standardUnlitColor
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_standardUnlitColor();
    // Get instance field reference: public System.Single[] standardUnlitColorWithPremadeColorDarker
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_standardUnlitColorWithPremadeColorDarker();
    // Get instance field reference: public UnityEngine.Material skyMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_skyMaterial();
    // Get instance field reference: public System.Single currentLerp
    [[deprecated("Use field access instead!")]] float& dyn_currentLerp();
    // Get instance field reference: public System.Single currentIncrement
    [[deprecated("Use field access instead!")]] float& dyn_currentIncrement();
    // Get instance field reference: public System.Single currentTimestep
    [[deprecated("Use field access instead!")]] float& dyn_currentTimestep();
    // Get instance field reference: public System.Single timeOfDay
    [[deprecated("Use field access instead!")]] float& dyn_timeOfDay();
    // Get instance field reference: public System.Double[] timeOfDayRange
    [[deprecated("Use field access instead!")]] ::ArrayW<double>& dyn_timeOfDayRange();
    // Get instance field reference: public System.Double timeMultiplier
    [[deprecated("Use field access instead!")]] double& dyn_timeMultiplier();
    // Get instance field reference: private System.Single lastTime
    [[deprecated("Use field access instead!")]] float& dyn_lastTime();
    // Get instance field reference: private System.Double currentTime
    [[deprecated("Use field access instead!")]] double& dyn_currentTime();
    // Get instance field reference: private System.Double totalHours
    [[deprecated("Use field access instead!")]] double& dyn_totalHours();
    // Get instance field reference: private System.Double totalSeconds
    [[deprecated("Use field access instead!")]] double& dyn_totalSeconds();
    // Get instance field reference: private System.Single colorFrom
    [[deprecated("Use field access instead!")]] float& dyn_colorFrom();
    // Get instance field reference: private System.Single colorTo
    [[deprecated("Use field access instead!")]] float& dyn_colorTo();
    // Get instance field reference: private System.Single colorFromDarker
    [[deprecated("Use field access instead!")]] float& dyn_colorFromDarker();
    // Get instance field reference: private System.Single colorToDarker
    [[deprecated("Use field access instead!")]] float& dyn_colorToDarker();
    // Get instance field reference: public System.Int32 currentTimeIndex
    [[deprecated("Use field access instead!")]] int& dyn_currentTimeIndex();
    // Get instance field reference: public System.Int32 currentWeatherIndex
    [[deprecated("Use field access instead!")]] int& dyn_currentWeatherIndex();
    // Get instance field reference: private System.Int32 lastIndex
    [[deprecated("Use field access instead!")]] int& dyn_lastIndex();
    // Get instance field reference: private System.Double currentIndexSeconds
    [[deprecated("Use field access instead!")]] double& dyn_currentIndexSeconds();
    // Get instance field reference: private System.Single tempLerp
    [[deprecated("Use field access instead!")]] float& dyn_tempLerp();
    // Get instance field reference: private System.Double baseSeconds
    [[deprecated("Use field access instead!")]] double& dyn_baseSeconds();
    // Get instance field reference: private System.Boolean computerInit
    [[deprecated("Use field access instead!")]] bool& dyn_computerInit();
    // Get instance field reference: private System.Single h
    [[deprecated("Use field access instead!")]] float& dyn_h();
    // Get instance field reference: private System.Single s
    [[deprecated("Use field access instead!")]] float& dyn_s();
    // Get instance field reference: private System.Single v
    [[deprecated("Use field access instead!")]] float& dyn_v();
    // Get instance field reference: public System.Int32 mySeed
    [[deprecated("Use field access instead!")]] int& dyn_mySeed();
    // Get instance field reference: public System.Random randomNumberGenerator
    [[deprecated("Use field access instead!")]] ::System::Random*& dyn_randomNumberGenerator();
    // Get instance field reference: public BetterDayNightManager/WeatherType[] weatherCycle
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::BetterDayNightManager::WeatherType>& dyn_weatherCycle();
    // Get instance field reference: public System.String currentTimeOfDay
    [[deprecated("Use field access instead!")]] ::StringW& dyn_currentTimeOfDay();
    // Get instance field reference: public System.Single rainChance
    [[deprecated("Use field access instead!")]] float& dyn_rainChance();
    // Get instance field reference: public System.Int32 maxRainDuration
    [[deprecated("Use field access instead!")]] int& dyn_maxRainDuration();
    // Get instance field reference: public System.Single calcRainPercent
    [[deprecated("Use field access instead!")]] float& dyn_calcRainPercent();
    // Get instance field reference: private System.Int32 rainDuration
    [[deprecated("Use field access instead!")]] int& dyn_rainDuration();
    // Get instance field reference: private System.Single remainingSeconds
    [[deprecated("Use field access instead!")]] float& dyn_remainingSeconds();
    // Get instance field reference: private System.Int32 completedDayNightCycles
    [[deprecated("Use field access instead!")]] int& dyn_completedDayNightCycles();
    // Get instance field reference: private System.Int32 currentWeatherCycle
    [[deprecated("Use field access instead!")]] int& dyn_currentWeatherCycle();
    // Get instance field reference: private System.Int32 fromWeatherIndex
    [[deprecated("Use field access instead!")]] int& dyn_fromWeatherIndex();
    // Get instance field reference: private System.Int32 toWeatherIndex
    [[deprecated("Use field access instead!")]] int& dyn_toWeatherIndex();
    // Get instance field reference: private UnityEngine.Texture2D fromMap
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_fromMap();
    // Get instance field reference: private UnityEngine.Texture2D fromSky
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_fromSky();
    // Get instance field reference: private UnityEngine.Texture2D toMap
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_toMap();
    // Get instance field reference: private UnityEngine.Texture2D toSky
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_toSky();
    // Get instance field reference: public AddCollidersToParticleSystemTriggers[] weatherSystems
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::AddCollidersToParticleSystemTriggers*>& dyn_weatherSystems();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.Collider> collidersToAddToWeatherSystems
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*& dyn_collidersToAddToWeatherSystems();
    // Get instance field reference: public System.Int32 overrideIndex
    [[deprecated("Use field access instead!")]] int& dyn_overrideIndex();
    // private System.Void Awake()
    // Offset: 0x1B5E548
    void Awake();
    // private System.Collections.IEnumerator UpdateTimeOfDay()
    // Offset: 0x1B5EC9C
    ::System::Collections::IEnumerator* UpdateTimeOfDay();
    // private System.Void ChangeLerps(System.Single newLerp)
    // Offset: 0x1B5ED38
    void ChangeLerps(float newLerp);
    // private System.Void ChangeMaps(System.Int32 fromIndex, System.Int32 toIndex)
    // Offset: 0x1B5E938
    void ChangeMaps(int fromIndex, int toIndex);
    // public BetterDayNightManager/WeatherType CurrentWeather()
    // Offset: 0x1B5F000
    ::GlobalNamespace::BetterDayNightManager::WeatherType CurrentWeather();
    // public BetterDayNightManager/WeatherType NextWeather()
    // Offset: 0x1B5F040
    ::GlobalNamespace::BetterDayNightManager::WeatherType NextWeather();
    // public BetterDayNightManager/WeatherType LastWeather()
    // Offset: 0x1B5F08C
    ::GlobalNamespace::BetterDayNightManager::WeatherType LastWeather();
    // private System.Void GenerateWeatherEventTimes()
    // Offset: 0x1B5E740
    void GenerateWeatherEventTimes();
    // public System.Void .ctor()
    // Offset: 0x1B5F0D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BetterDayNightManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BetterDayNightManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BetterDayNightManager*, creationType>()));
    }
  }; // BetterDayNightManager
  #pragma pack(pop)
  static check_size<sizeof(BetterDayNightManager), 392 + sizeof(int)> __GlobalNamespace_BetterDayNightManagerSizeCheck;
  static_assert(sizeof(BetterDayNightManager) == 0x18C);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BetterDayNightManager::WeatherType, "", "BetterDayNightManager/WeatherType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BetterDayNightManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BetterDayNightManager::*)()>(&GlobalNamespace::BetterDayNightManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BetterDayNightManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BetterDayNightManager::UpdateTimeOfDay
// Il2CppName: UpdateTimeOfDay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::BetterDayNightManager::*)()>(&GlobalNamespace::BetterDayNightManager::UpdateTimeOfDay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BetterDayNightManager*), "UpdateTimeOfDay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BetterDayNightManager::ChangeLerps
// Il2CppName: ChangeLerps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BetterDayNightManager::*)(float)>(&GlobalNamespace::BetterDayNightManager::ChangeLerps)> {
  static const MethodInfo* get() {
    static auto* newLerp = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BetterDayNightManager*), "ChangeLerps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newLerp});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BetterDayNightManager::ChangeMaps
// Il2CppName: ChangeMaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BetterDayNightManager::*)(int, int)>(&GlobalNamespace::BetterDayNightManager::ChangeMaps)> {
  static const MethodInfo* get() {
    static auto* fromIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* toIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BetterDayNightManager*), "ChangeMaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromIndex, toIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BetterDayNightManager::CurrentWeather
// Il2CppName: CurrentWeather
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BetterDayNightManager::WeatherType (GlobalNamespace::BetterDayNightManager::*)()>(&GlobalNamespace::BetterDayNightManager::CurrentWeather)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BetterDayNightManager*), "CurrentWeather", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BetterDayNightManager::NextWeather
// Il2CppName: NextWeather
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BetterDayNightManager::WeatherType (GlobalNamespace::BetterDayNightManager::*)()>(&GlobalNamespace::BetterDayNightManager::NextWeather)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BetterDayNightManager*), "NextWeather", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BetterDayNightManager::LastWeather
// Il2CppName: LastWeather
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BetterDayNightManager::WeatherType (GlobalNamespace::BetterDayNightManager::*)()>(&GlobalNamespace::BetterDayNightManager::LastWeather)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BetterDayNightManager*), "LastWeather", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BetterDayNightManager::GenerateWeatherEventTimes
// Il2CppName: GenerateWeatherEventTimes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BetterDayNightManager::*)()>(&GlobalNamespace::BetterDayNightManager::GenerateWeatherEventTimes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BetterDayNightManager*), "GenerateWeatherEventTimes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BetterDayNightManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
