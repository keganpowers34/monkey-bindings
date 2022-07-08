// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Forward declaring type: ClientAppType
  struct ClientAppType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::ClientAppType, "Photon.Realtime", "ClientAppType");
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Realtime.ClientAppType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ClientAppType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ClientAppType
    constexpr ClientAppType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Photon.Realtime.ClientAppType Realtime
    static constexpr const int Realtime = 0;
    // Get static field: static public Photon.Realtime.ClientAppType Realtime
    static ::Photon::Realtime::ClientAppType _get_Realtime();
    // Set static field: static public Photon.Realtime.ClientAppType Realtime
    static void _set_Realtime(::Photon::Realtime::ClientAppType value);
    // static field const value: static public Photon.Realtime.ClientAppType Voice
    static constexpr const int Voice = 1;
    // Get static field: static public Photon.Realtime.ClientAppType Voice
    static ::Photon::Realtime::ClientAppType _get_Voice();
    // Set static field: static public Photon.Realtime.ClientAppType Voice
    static void _set_Voice(::Photon::Realtime::ClientAppType value);
    // static field const value: static public Photon.Realtime.ClientAppType Fusion
    static constexpr const int Fusion = 2;
    // Get static field: static public Photon.Realtime.ClientAppType Fusion
    static ::Photon::Realtime::ClientAppType _get_Fusion();
    // Set static field: static public Photon.Realtime.ClientAppType Fusion
    static void _set_Fusion(::Photon::Realtime::ClientAppType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Photon.Realtime.ClientAppType
  #pragma pack(pop)
  static check_size<sizeof(ClientAppType), 0 + sizeof(int)> __Photon_Realtime_ClientAppTypeSizeCheck;
  static_assert(sizeof(ClientAppType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
