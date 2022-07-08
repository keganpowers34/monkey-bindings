// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Forward declaring type: PhotonPortDefinition
  struct PhotonPortDefinition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::PhotonPortDefinition, "Photon.Realtime", "PhotonPortDefinition");
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Size: 0x6
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Photon.Realtime.PhotonPortDefinition
  // [TokenAttribute] Offset: FFFFFFFF
  struct PhotonPortDefinition/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt16 NameServerPort
    // Size: 0x2
    // Offset: 0x0
    uint16_t NameServerPort;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.UInt16 MasterServerPort
    // Size: 0x2
    // Offset: 0x2
    uint16_t MasterServerPort;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.UInt16 GameServerPort
    // Size: 0x2
    // Offset: 0x4
    uint16_t GameServerPort;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    public:
    // Creating value type constructor for type: PhotonPortDefinition
    constexpr PhotonPortDefinition(uint16_t NameServerPort_ = {}, uint16_t MasterServerPort_ = {}, uint16_t GameServerPort_ = {}) noexcept : NameServerPort{NameServerPort_}, MasterServerPort{MasterServerPort_}, GameServerPort{GameServerPort_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static public readonly Photon.Realtime.PhotonPortDefinition AlternativeUdpPorts
    static ::Photon::Realtime::PhotonPortDefinition _get_AlternativeUdpPorts();
    // Set static field: static public readonly Photon.Realtime.PhotonPortDefinition AlternativeUdpPorts
    static void _set_AlternativeUdpPorts(::Photon::Realtime::PhotonPortDefinition value);
    // Get instance field reference: public System.UInt16 NameServerPort
    [[deprecated("Use field access instead!")]] uint16_t& dyn_NameServerPort();
    // Get instance field reference: public System.UInt16 MasterServerPort
    [[deprecated("Use field access instead!")]] uint16_t& dyn_MasterServerPort();
    // Get instance field reference: public System.UInt16 GameServerPort
    [[deprecated("Use field access instead!")]] uint16_t& dyn_GameServerPort();
    // static private System.Void .cctor()
    // Offset: 0x1C17C38
    static void _cctor();
  }; // Photon.Realtime.PhotonPortDefinition
  #pragma pack(pop)
  static check_size<sizeof(PhotonPortDefinition), 4 + sizeof(uint16_t)> __Photon_Realtime_PhotonPortDefinitionSizeCheck;
  static_assert(sizeof(PhotonPortDefinition) == 0x6);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Realtime::PhotonPortDefinition::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Photon::Realtime::PhotonPortDefinition::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::PhotonPortDefinition), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
