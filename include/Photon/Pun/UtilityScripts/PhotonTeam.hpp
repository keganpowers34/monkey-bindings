// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Forward declaring type: PhotonTeam
  class PhotonTeam;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::UtilityScripts::PhotonTeam);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::PhotonTeam*, "Photon.Pun.UtilityScripts", "PhotonTeam");
// Type namespace: Photon.Pun.UtilityScripts
namespace Photon::Pun::UtilityScripts {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.UtilityScripts.PhotonTeam
  // [TokenAttribute] Offset: FFFFFFFF
  class PhotonTeam : public ::Il2CppObject {
    public:
    public:
    // public System.String Name
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Byte Code
    // Size: 0x1
    // Offset: 0x18
    uint8_t Code;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Get instance field reference: public System.String Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Name();
    // Get instance field reference: public System.Byte Code
    [[deprecated("Use field access instead!")]] uint8_t& dyn_Code();
    // public System.Void .ctor()
    // Offset: 0x15946D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhotonTeam* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::UtilityScripts::PhotonTeam::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhotonTeam*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x159464C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Photon.Pun.UtilityScripts.PhotonTeam
  #pragma pack(pop)
  static check_size<sizeof(PhotonTeam), 24 + sizeof(uint8_t)> __Photon_Pun_UtilityScripts_PhotonTeamSizeCheck;
  static_assert(sizeof(PhotonTeam) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::PhotonTeam::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Pun::UtilityScripts::PhotonTeam::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Pun::UtilityScripts::PhotonTeam::*)()>(&Photon::Pun::UtilityScripts::PhotonTeam::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::UtilityScripts::PhotonTeam*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
