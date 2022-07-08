// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: Version
  class Version;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::Version);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::Version*, "ExitGames.Client.Photon", "Version");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.Version
  // [TokenAttribute] Offset: FFFFFFFF
  class Version : public ::Il2CppObject {
    public:
    // Get static field: static readonly System.Byte[] clientVersion
    static ::ArrayW<uint8_t> _get_clientVersion();
    // Set static field: static readonly System.Byte[] clientVersion
    static void _set_clientVersion(::ArrayW<uint8_t> value);
    // static private System.Void .cctor()
    // Offset: 0x1ABC680
    static void _cctor();
  }; // ExitGames.Client.Photon.Version
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::Version::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&ExitGames::Client::Photon::Version::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::Version*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
