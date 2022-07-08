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
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: SerializationProtocol
  struct SerializationProtocol;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::SerializationProtocol, "ExitGames.Client.Photon", "SerializationProtocol");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.SerializationProtocol
  // [TokenAttribute] Offset: FFFFFFFF
  struct SerializationProtocol/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SerializationProtocol
    constexpr SerializationProtocol(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public ExitGames.Client.Photon.SerializationProtocol GpBinaryV16
    static constexpr const int GpBinaryV16 = 0;
    // Get static field: static public ExitGames.Client.Photon.SerializationProtocol GpBinaryV16
    static ::ExitGames::Client::Photon::SerializationProtocol _get_GpBinaryV16();
    // Set static field: static public ExitGames.Client.Photon.SerializationProtocol GpBinaryV16
    static void _set_GpBinaryV16(::ExitGames::Client::Photon::SerializationProtocol value);
    // static field const value: static public ExitGames.Client.Photon.SerializationProtocol GpBinaryV18
    static constexpr const int GpBinaryV18 = 1;
    // Get static field: static public ExitGames.Client.Photon.SerializationProtocol GpBinaryV18
    static ::ExitGames::Client::Photon::SerializationProtocol _get_GpBinaryV18();
    // Set static field: static public ExitGames.Client.Photon.SerializationProtocol GpBinaryV18
    static void _set_GpBinaryV18(::ExitGames::Client::Photon::SerializationProtocol value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // ExitGames.Client.Photon.SerializationProtocol
  #pragma pack(pop)
  static check_size<sizeof(SerializationProtocol), 0 + sizeof(int)> __ExitGames_Client_Photon_SerializationProtocolSizeCheck;
  static_assert(sizeof(SerializationProtocol) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
