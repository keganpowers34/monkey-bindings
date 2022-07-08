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
// Type namespace: Cinemachine.PostFX
namespace Cinemachine::PostFX {
  // Forward declaring type: CinemachineVolumeSettings
  class CinemachineVolumeSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::PostFX::CinemachineVolumeSettings);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::PostFX::CinemachineVolumeSettings*, "Cinemachine.PostFX", "CinemachineVolumeSettings");
// Type namespace: Cinemachine.PostFX
namespace Cinemachine::PostFX {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.PostFX.CinemachineVolumeSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: AE6464
  class CinemachineVolumeSettings : public ::UnityEngine::MonoBehaviour {
    public:
    // public System.Void .ctor()
    // Offset: 0x138EABC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineVolumeSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::PostFX::CinemachineVolumeSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineVolumeSettings*, creationType>()));
    }
  }; // Cinemachine.PostFX.CinemachineVolumeSettings
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::PostFX::CinemachineVolumeSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
