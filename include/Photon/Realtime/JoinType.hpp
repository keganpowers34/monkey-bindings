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
  // Forward declaring type: JoinType
  struct JoinType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::JoinType, "Photon.Realtime", "JoinType");
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Realtime.JoinType
  // [TokenAttribute] Offset: FFFFFFFF
  struct JoinType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: JoinType
    constexpr JoinType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Photon.Realtime.JoinType CreateRoom
    static constexpr const int CreateRoom = 0;
    // Get static field: static public Photon.Realtime.JoinType CreateRoom
    static ::Photon::Realtime::JoinType _get_CreateRoom();
    // Set static field: static public Photon.Realtime.JoinType CreateRoom
    static void _set_CreateRoom(::Photon::Realtime::JoinType value);
    // static field const value: static public Photon.Realtime.JoinType JoinRoom
    static constexpr const int JoinRoom = 1;
    // Get static field: static public Photon.Realtime.JoinType JoinRoom
    static ::Photon::Realtime::JoinType _get_JoinRoom();
    // Set static field: static public Photon.Realtime.JoinType JoinRoom
    static void _set_JoinRoom(::Photon::Realtime::JoinType value);
    // static field const value: static public Photon.Realtime.JoinType JoinRandomRoom
    static constexpr const int JoinRandomRoom = 2;
    // Get static field: static public Photon.Realtime.JoinType JoinRandomRoom
    static ::Photon::Realtime::JoinType _get_JoinRandomRoom();
    // Set static field: static public Photon.Realtime.JoinType JoinRandomRoom
    static void _set_JoinRandomRoom(::Photon::Realtime::JoinType value);
    // static field const value: static public Photon.Realtime.JoinType JoinRandomOrCreateRoom
    static constexpr const int JoinRandomOrCreateRoom = 3;
    // Get static field: static public Photon.Realtime.JoinType JoinRandomOrCreateRoom
    static ::Photon::Realtime::JoinType _get_JoinRandomOrCreateRoom();
    // Set static field: static public Photon.Realtime.JoinType JoinRandomOrCreateRoom
    static void _set_JoinRandomOrCreateRoom(::Photon::Realtime::JoinType value);
    // static field const value: static public Photon.Realtime.JoinType JoinOrCreateRoom
    static constexpr const int JoinOrCreateRoom = 4;
    // Get static field: static public Photon.Realtime.JoinType JoinOrCreateRoom
    static ::Photon::Realtime::JoinType _get_JoinOrCreateRoom();
    // Set static field: static public Photon.Realtime.JoinType JoinOrCreateRoom
    static void _set_JoinOrCreateRoom(::Photon::Realtime::JoinType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Photon.Realtime.JoinType
  #pragma pack(pop)
  static check_size<sizeof(JoinType), 0 + sizeof(int)> __Photon_Realtime_JoinTypeSizeCheck;
  static_assert(sizeof(JoinType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
