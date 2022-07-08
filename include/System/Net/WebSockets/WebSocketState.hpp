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
// Type namespace: System.Net.WebSockets
namespace System::Net::WebSockets {
  // Forward declaring type: WebSocketState
  struct WebSocketState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebSockets::WebSocketState, "System.Net.WebSockets", "WebSocketState");
// Type namespace: System.Net.WebSockets
namespace System::Net::WebSockets {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebSockets.WebSocketState
  // [TokenAttribute] Offset: FFFFFFFF
  struct WebSocketState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: WebSocketState
    constexpr WebSocketState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.WebSockets.WebSocketState None
    static constexpr const int None = 0;
    // Get static field: static public System.Net.WebSockets.WebSocketState None
    static ::System::Net::WebSockets::WebSocketState _get_None();
    // Set static field: static public System.Net.WebSockets.WebSocketState None
    static void _set_None(::System::Net::WebSockets::WebSocketState value);
    // static field const value: static public System.Net.WebSockets.WebSocketState Connecting
    static constexpr const int Connecting = 1;
    // Get static field: static public System.Net.WebSockets.WebSocketState Connecting
    static ::System::Net::WebSockets::WebSocketState _get_Connecting();
    // Set static field: static public System.Net.WebSockets.WebSocketState Connecting
    static void _set_Connecting(::System::Net::WebSockets::WebSocketState value);
    // static field const value: static public System.Net.WebSockets.WebSocketState Open
    static constexpr const int Open = 2;
    // Get static field: static public System.Net.WebSockets.WebSocketState Open
    static ::System::Net::WebSockets::WebSocketState _get_Open();
    // Set static field: static public System.Net.WebSockets.WebSocketState Open
    static void _set_Open(::System::Net::WebSockets::WebSocketState value);
    // static field const value: static public System.Net.WebSockets.WebSocketState CloseSent
    static constexpr const int CloseSent = 3;
    // Get static field: static public System.Net.WebSockets.WebSocketState CloseSent
    static ::System::Net::WebSockets::WebSocketState _get_CloseSent();
    // Set static field: static public System.Net.WebSockets.WebSocketState CloseSent
    static void _set_CloseSent(::System::Net::WebSockets::WebSocketState value);
    // static field const value: static public System.Net.WebSockets.WebSocketState CloseReceived
    static constexpr const int CloseReceived = 4;
    // Get static field: static public System.Net.WebSockets.WebSocketState CloseReceived
    static ::System::Net::WebSockets::WebSocketState _get_CloseReceived();
    // Set static field: static public System.Net.WebSockets.WebSocketState CloseReceived
    static void _set_CloseReceived(::System::Net::WebSockets::WebSocketState value);
    // static field const value: static public System.Net.WebSockets.WebSocketState Closed
    static constexpr const int Closed = 5;
    // Get static field: static public System.Net.WebSockets.WebSocketState Closed
    static ::System::Net::WebSockets::WebSocketState _get_Closed();
    // Set static field: static public System.Net.WebSockets.WebSocketState Closed
    static void _set_Closed(::System::Net::WebSockets::WebSocketState value);
    // static field const value: static public System.Net.WebSockets.WebSocketState Aborted
    static constexpr const int Aborted = 6;
    // Get static field: static public System.Net.WebSockets.WebSocketState Aborted
    static ::System::Net::WebSockets::WebSocketState _get_Aborted();
    // Set static field: static public System.Net.WebSockets.WebSocketState Aborted
    static void _set_Aborted(::System::Net::WebSockets::WebSocketState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Net.WebSockets.WebSocketState
  #pragma pack(pop)
  static check_size<sizeof(WebSocketState), 0 + sizeof(int)> __System_Net_WebSockets_WebSocketStateSizeCheck;
  static_assert(sizeof(WebSocketState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
