// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaGameManager
#include "GlobalNamespace/GorillaGameManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaCTFManager
  class GorillaCTFManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaCTFManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaCTFManager*, "", "GorillaCTFManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: GorillaCTFManager
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaCTFManager : public ::GlobalNamespace::GorillaGameManager {
    public:
    // public System.Void .ctor()
    // Offset: 0x1B68070
    // Implemented from: GorillaGameManager
    // Base method: System.Void GorillaGameManager::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaCTFManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaCTFManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaCTFManager*, creationType>()));
    }
  }; // GorillaCTFManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaCTFManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
