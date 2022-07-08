// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.StepCounter
#include "UnityEngine/InputSystem/StepCounter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.InputSystem.Android
namespace UnityEngine::InputSystem::Android {
  // Forward declaring type: AndroidStepCounter
  class AndroidStepCounter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidStepCounter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidStepCounter*, "UnityEngine.InputSystem.Android", "AndroidStepCounter");
// Type namespace: UnityEngine.InputSystem.Android
namespace UnityEngine::InputSystem::Android {
  // Size: 0x158
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Android.AndroidStepCounter
  // [TokenAttribute] Offset: FFFFFFFF
  // [InputControlLayoutAttribute] Offset: AB8700
  // [PreserveAttribute] Offset: FFFFFFFF
  class AndroidStepCounter : public ::UnityEngine::InputSystem::StepCounter {
    public:
    // public System.Void .ctor()
    // Offset: 0xD99D50
    // Implemented from: UnityEngine.InputSystem.StepCounter
    // Base method: System.Void StepCounter::.ctor()
    // Base method: System.Void Sensor::.ctor()
    // Base method: System.Void InputDevice::.ctor()
    // Base method: System.Void InputControl::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidStepCounter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Android::AndroidStepCounter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidStepCounter*, creationType>()));
    }
  }; // UnityEngine.InputSystem.Android.AndroidStepCounter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Android::AndroidStepCounter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
