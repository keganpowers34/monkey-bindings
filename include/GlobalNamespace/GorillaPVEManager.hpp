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
  // Forward declaring type: GorillaPVEManager
  class GorillaPVEManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaPVEManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaPVEManager*, "", "GorillaPVEManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: GorillaPVEManager
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaPVEManager : public ::GlobalNamespace::GorillaGameManager {
    public:
    // public System.Void .ctor()
    // Offset: 0x1B7B204
    // Implemented from: GorillaGameManager
    // Base method: System.Void GorillaGameManager::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaPVEManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaPVEManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaPVEManager*, creationType>()));
    }
  }; // GorillaPVEManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaPVEManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
