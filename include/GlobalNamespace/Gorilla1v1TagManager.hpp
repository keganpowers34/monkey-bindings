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
  // Forward declaring type: Gorilla1v1TagManager
  class Gorilla1v1TagManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::Gorilla1v1TagManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Gorilla1v1TagManager*, "", "Gorilla1v1TagManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: Gorilla1v1TagManager
  // [TokenAttribute] Offset: FFFFFFFF
  class Gorilla1v1TagManager : public ::GlobalNamespace::GorillaGameManager {
    public:
    // public System.Void .ctor()
    // Offset: 0x1B67B70
    // Implemented from: GorillaGameManager
    // Base method: System.Void GorillaGameManager::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gorilla1v1TagManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Gorilla1v1TagManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gorilla1v1TagManager*, creationType>()));
    }
  }; // Gorilla1v1TagManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Gorilla1v1TagManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
