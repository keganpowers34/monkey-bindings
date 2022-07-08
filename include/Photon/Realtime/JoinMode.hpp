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
  // Forward declaring type: JoinMode
  struct JoinMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::JoinMode, "Photon.Realtime", "JoinMode");
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Realtime.JoinMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct JoinMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: JoinMode
    constexpr JoinMode(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public Photon.Realtime.JoinMode Default
    static constexpr const uint8_t Default = 0u;
    // Get static field: static public Photon.Realtime.JoinMode Default
    static ::Photon::Realtime::JoinMode _get_Default();
    // Set static field: static public Photon.Realtime.JoinMode Default
    static void _set_Default(::Photon::Realtime::JoinMode value);
    // static field const value: static public Photon.Realtime.JoinMode CreateIfNotExists
    static constexpr const uint8_t CreateIfNotExists = 1u;
    // Get static field: static public Photon.Realtime.JoinMode CreateIfNotExists
    static ::Photon::Realtime::JoinMode _get_CreateIfNotExists();
    // Set static field: static public Photon.Realtime.JoinMode CreateIfNotExists
    static void _set_CreateIfNotExists(::Photon::Realtime::JoinMode value);
    // static field const value: static public Photon.Realtime.JoinMode JoinOrRejoin
    static constexpr const uint8_t JoinOrRejoin = 2u;
    // Get static field: static public Photon.Realtime.JoinMode JoinOrRejoin
    static ::Photon::Realtime::JoinMode _get_JoinOrRejoin();
    // Set static field: static public Photon.Realtime.JoinMode JoinOrRejoin
    static void _set_JoinOrRejoin(::Photon::Realtime::JoinMode value);
    // static field const value: static public Photon.Realtime.JoinMode RejoinOnly
    static constexpr const uint8_t RejoinOnly = 3u;
    // Get static field: static public Photon.Realtime.JoinMode RejoinOnly
    static ::Photon::Realtime::JoinMode _get_RejoinOnly();
    // Set static field: static public Photon.Realtime.JoinMode RejoinOnly
    static void _set_RejoinOnly(::Photon::Realtime::JoinMode value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // Photon.Realtime.JoinMode
  #pragma pack(pop)
  static check_size<sizeof(JoinMode), 0 + sizeof(uint8_t)> __Photon_Realtime_JoinModeSizeCheck;
  static_assert(sizeof(JoinMode) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
