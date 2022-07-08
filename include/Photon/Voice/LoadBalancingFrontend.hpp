// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.LoadBalancingTransport
#include "Photon/Voice/LoadBalancingTransport.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: LoadBalancingFrontend
  class LoadBalancingFrontend;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::LoadBalancingFrontend);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::LoadBalancingFrontend*, "Photon.Voice", "LoadBalancingFrontend");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Photon.Voice.LoadBalancingFrontend
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: AB53F4
  class LoadBalancingFrontend : public ::Photon::Voice::LoadBalancingTransport {
    public:
    // public System.Void .ctor()
    // Offset: 0xFA5C80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoadBalancingFrontend* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::LoadBalancingFrontend::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoadBalancingFrontend*, creationType>()));
    }
  }; // Photon.Voice.LoadBalancingFrontend
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::LoadBalancingFrontend::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
