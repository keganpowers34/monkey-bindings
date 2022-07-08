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
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: AsnDecodeStatus
  struct AsnDecodeStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AsnDecodeStatus, "System.Security.Cryptography", "AsnDecodeStatus");
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.AsnDecodeStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct AsnDecodeStatus/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AsnDecodeStatus
    constexpr AsnDecodeStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.AsnDecodeStatus NotDecoded
    static constexpr const int NotDecoded = -1;
    // Get static field: static public System.Security.Cryptography.AsnDecodeStatus NotDecoded
    static ::System::Security::Cryptography::AsnDecodeStatus _get_NotDecoded();
    // Set static field: static public System.Security.Cryptography.AsnDecodeStatus NotDecoded
    static void _set_NotDecoded(::System::Security::Cryptography::AsnDecodeStatus value);
    // static field const value: static public System.Security.Cryptography.AsnDecodeStatus Ok
    static constexpr const int Ok = 0;
    // Get static field: static public System.Security.Cryptography.AsnDecodeStatus Ok
    static ::System::Security::Cryptography::AsnDecodeStatus _get_Ok();
    // Set static field: static public System.Security.Cryptography.AsnDecodeStatus Ok
    static void _set_Ok(::System::Security::Cryptography::AsnDecodeStatus value);
    // static field const value: static public System.Security.Cryptography.AsnDecodeStatus BadAsn
    static constexpr const int BadAsn = 1;
    // Get static field: static public System.Security.Cryptography.AsnDecodeStatus BadAsn
    static ::System::Security::Cryptography::AsnDecodeStatus _get_BadAsn();
    // Set static field: static public System.Security.Cryptography.AsnDecodeStatus BadAsn
    static void _set_BadAsn(::System::Security::Cryptography::AsnDecodeStatus value);
    // static field const value: static public System.Security.Cryptography.AsnDecodeStatus BadTag
    static constexpr const int BadTag = 2;
    // Get static field: static public System.Security.Cryptography.AsnDecodeStatus BadTag
    static ::System::Security::Cryptography::AsnDecodeStatus _get_BadTag();
    // Set static field: static public System.Security.Cryptography.AsnDecodeStatus BadTag
    static void _set_BadTag(::System::Security::Cryptography::AsnDecodeStatus value);
    // static field const value: static public System.Security.Cryptography.AsnDecodeStatus BadLength
    static constexpr const int BadLength = 3;
    // Get static field: static public System.Security.Cryptography.AsnDecodeStatus BadLength
    static ::System::Security::Cryptography::AsnDecodeStatus _get_BadLength();
    // Set static field: static public System.Security.Cryptography.AsnDecodeStatus BadLength
    static void _set_BadLength(::System::Security::Cryptography::AsnDecodeStatus value);
    // static field const value: static public System.Security.Cryptography.AsnDecodeStatus InformationNotAvailable
    static constexpr const int InformationNotAvailable = 4;
    // Get static field: static public System.Security.Cryptography.AsnDecodeStatus InformationNotAvailable
    static ::System::Security::Cryptography::AsnDecodeStatus _get_InformationNotAvailable();
    // Set static field: static public System.Security.Cryptography.AsnDecodeStatus InformationNotAvailable
    static void _set_InformationNotAvailable(::System::Security::Cryptography::AsnDecodeStatus value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Security.Cryptography.AsnDecodeStatus
  #pragma pack(pop)
  static check_size<sizeof(AsnDecodeStatus), 0 + sizeof(int)> __System_Security_Cryptography_AsnDecodeStatusSizeCheck;
  static_assert(sizeof(AsnDecodeStatus) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
