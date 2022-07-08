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
  // Forward declaring type: ConnectionProtocol
  struct ConnectionProtocol;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::ConnectionProtocol, "ExitGames.Client.Photon", "ConnectionProtocol");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.ConnectionProtocol
  // [TokenAttribute] Offset: FFFFFFFF
  struct ConnectionProtocol/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: ConnectionProtocol
    constexpr ConnectionProtocol(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public ExitGames.Client.Photon.ConnectionProtocol Udp
    static constexpr const uint8_t Udp = 0u;
    // Get static field: static public ExitGames.Client.Photon.ConnectionProtocol Udp
    static ::ExitGames::Client::Photon::ConnectionProtocol _get_Udp();
    // Set static field: static public ExitGames.Client.Photon.ConnectionProtocol Udp
    static void _set_Udp(::ExitGames::Client::Photon::ConnectionProtocol value);
    // static field const value: static public ExitGames.Client.Photon.ConnectionProtocol Tcp
    static constexpr const uint8_t Tcp = 1u;
    // Get static field: static public ExitGames.Client.Photon.ConnectionProtocol Tcp
    static ::ExitGames::Client::Photon::ConnectionProtocol _get_Tcp();
    // Set static field: static public ExitGames.Client.Photon.ConnectionProtocol Tcp
    static void _set_Tcp(::ExitGames::Client::Photon::ConnectionProtocol value);
    // static field const value: static public ExitGames.Client.Photon.ConnectionProtocol WebSocket
    static constexpr const uint8_t WebSocket = 4u;
    // Get static field: static public ExitGames.Client.Photon.ConnectionProtocol WebSocket
    static ::ExitGames::Client::Photon::ConnectionProtocol _get_WebSocket();
    // Set static field: static public ExitGames.Client.Photon.ConnectionProtocol WebSocket
    static void _set_WebSocket(::ExitGames::Client::Photon::ConnectionProtocol value);
    // static field const value: static public ExitGames.Client.Photon.ConnectionProtocol WebSocketSecure
    static constexpr const uint8_t WebSocketSecure = 5u;
    // Get static field: static public ExitGames.Client.Photon.ConnectionProtocol WebSocketSecure
    static ::ExitGames::Client::Photon::ConnectionProtocol _get_WebSocketSecure();
    // Set static field: static public ExitGames.Client.Photon.ConnectionProtocol WebSocketSecure
    static void _set_WebSocketSecure(::ExitGames::Client::Photon::ConnectionProtocol value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // ExitGames.Client.Photon.ConnectionProtocol
  #pragma pack(pop)
  static check_size<sizeof(ConnectionProtocol), 0 + sizeof(uint8_t)> __ExitGames_Client_Photon_ConnectionProtocolSizeCheck;
  static_assert(sizeof(ConnectionProtocol) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
