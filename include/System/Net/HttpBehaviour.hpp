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
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: HttpBehaviour
  struct HttpBehaviour;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpBehaviour, "System.Net", "HttpBehaviour");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpBehaviour
  // [TokenAttribute] Offset: FFFFFFFF
  struct HttpBehaviour/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: HttpBehaviour
    constexpr HttpBehaviour(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.HttpBehaviour Unknown
    static constexpr const uint8_t Unknown = 0u;
    // Get static field: static public System.Net.HttpBehaviour Unknown
    static ::System::Net::HttpBehaviour _get_Unknown();
    // Set static field: static public System.Net.HttpBehaviour Unknown
    static void _set_Unknown(::System::Net::HttpBehaviour value);
    // static field const value: static public System.Net.HttpBehaviour HTTP10
    static constexpr const uint8_t HTTP10 = 1u;
    // Get static field: static public System.Net.HttpBehaviour HTTP10
    static ::System::Net::HttpBehaviour _get_HTTP10();
    // Set static field: static public System.Net.HttpBehaviour HTTP10
    static void _set_HTTP10(::System::Net::HttpBehaviour value);
    // static field const value: static public System.Net.HttpBehaviour HTTP11PartiallyCompliant
    static constexpr const uint8_t HTTP11PartiallyCompliant = 2u;
    // Get static field: static public System.Net.HttpBehaviour HTTP11PartiallyCompliant
    static ::System::Net::HttpBehaviour _get_HTTP11PartiallyCompliant();
    // Set static field: static public System.Net.HttpBehaviour HTTP11PartiallyCompliant
    static void _set_HTTP11PartiallyCompliant(::System::Net::HttpBehaviour value);
    // static field const value: static public System.Net.HttpBehaviour HTTP11
    static constexpr const uint8_t HTTP11 = 3u;
    // Get static field: static public System.Net.HttpBehaviour HTTP11
    static ::System::Net::HttpBehaviour _get_HTTP11();
    // Set static field: static public System.Net.HttpBehaviour HTTP11
    static void _set_HTTP11(::System::Net::HttpBehaviour value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // System.Net.HttpBehaviour
  #pragma pack(pop)
  static check_size<sizeof(HttpBehaviour), 0 + sizeof(uint8_t)> __System_Net_HttpBehaviourSizeCheck;
  static_assert(sizeof(HttpBehaviour) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
