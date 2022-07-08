// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TeleportTargetHandler
#include "GlobalNamespace/TeleportTargetHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TeleportTargetHandlerPhysical
  class TeleportTargetHandlerPhysical;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TeleportTargetHandlerPhysical);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TeleportTargetHandlerPhysical*, "", "TeleportTargetHandlerPhysical");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: TeleportTargetHandlerPhysical
  // [TokenAttribute] Offset: FFFFFFFF
  class TeleportTargetHandlerPhysical : public ::GlobalNamespace::TeleportTargetHandler {
    public:
    // protected override System.Boolean ConsiderTeleport(UnityEngine.Vector3 start, ref UnityEngine.Vector3 end)
    // Offset: 0x1BA40A4
    // Implemented from: TeleportTargetHandler
    // Base method: System.Boolean TeleportTargetHandler::ConsiderTeleport(UnityEngine.Vector3 start, ref UnityEngine.Vector3 end)
    bool ConsiderTeleport(::UnityEngine::Vector3 start, ByRef<::UnityEngine::Vector3> end);
    // public System.Void .ctor()
    // Offset: 0x1BA4228
    // Implemented from: TeleportTargetHandler
    // Base method: System.Void TeleportTargetHandler::.ctor()
    // Base method: System.Void TeleportSupport::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeleportTargetHandlerPhysical* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TeleportTargetHandlerPhysical::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeleportTargetHandlerPhysical*, creationType>()));
    }
  }; // TeleportTargetHandlerPhysical
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TeleportTargetHandlerPhysical::ConsiderTeleport
// Il2CppName: ConsiderTeleport
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::TeleportTargetHandlerPhysical::*)(::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>)>(&GlobalNamespace::TeleportTargetHandlerPhysical::ConsiderTeleport)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportTargetHandlerPhysical*), "ConsiderTeleport", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportTargetHandlerPhysical::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
