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
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509ChainStatusFlags
  struct X509ChainStatusFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509ChainStatusFlags, "Mono.Security.X509", "X509ChainStatusFlags");
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.X509ChainStatusFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct X509ChainStatusFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: X509ChainStatusFlags
    constexpr X509ChainStatusFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Mono.Security.X509.X509ChainStatusFlags InvalidBasicConstraints
    static constexpr const int InvalidBasicConstraints = 1024;
    // Get static field: static public Mono.Security.X509.X509ChainStatusFlags InvalidBasicConstraints
    static ::Mono::Security::X509::X509ChainStatusFlags _get_InvalidBasicConstraints();
    // Set static field: static public Mono.Security.X509.X509ChainStatusFlags InvalidBasicConstraints
    static void _set_InvalidBasicConstraints(::Mono::Security::X509::X509ChainStatusFlags value);
    // static field const value: static public Mono.Security.X509.X509ChainStatusFlags NoError
    static constexpr const int NoError = 0;
    // Get static field: static public Mono.Security.X509.X509ChainStatusFlags NoError
    static ::Mono::Security::X509::X509ChainStatusFlags _get_NoError();
    // Set static field: static public Mono.Security.X509.X509ChainStatusFlags NoError
    static void _set_NoError(::Mono::Security::X509::X509ChainStatusFlags value);
    // static field const value: static public Mono.Security.X509.X509ChainStatusFlags NotSignatureValid
    static constexpr const int NotSignatureValid = 8;
    // Get static field: static public Mono.Security.X509.X509ChainStatusFlags NotSignatureValid
    static ::Mono::Security::X509::X509ChainStatusFlags _get_NotSignatureValid();
    // Set static field: static public Mono.Security.X509.X509ChainStatusFlags NotSignatureValid
    static void _set_NotSignatureValid(::Mono::Security::X509::X509ChainStatusFlags value);
    // static field const value: static public Mono.Security.X509.X509ChainStatusFlags NotTimeNested
    static constexpr const int NotTimeNested = 2;
    // Get static field: static public Mono.Security.X509.X509ChainStatusFlags NotTimeNested
    static ::Mono::Security::X509::X509ChainStatusFlags _get_NotTimeNested();
    // Set static field: static public Mono.Security.X509.X509ChainStatusFlags NotTimeNested
    static void _set_NotTimeNested(::Mono::Security::X509::X509ChainStatusFlags value);
    // static field const value: static public Mono.Security.X509.X509ChainStatusFlags NotTimeValid
    static constexpr const int NotTimeValid = 1;
    // Get static field: static public Mono.Security.X509.X509ChainStatusFlags NotTimeValid
    static ::Mono::Security::X509::X509ChainStatusFlags _get_NotTimeValid();
    // Set static field: static public Mono.Security.X509.X509ChainStatusFlags NotTimeValid
    static void _set_NotTimeValid(::Mono::Security::X509::X509ChainStatusFlags value);
    // static field const value: static public Mono.Security.X509.X509ChainStatusFlags PartialChain
    static constexpr const int PartialChain = 65536;
    // Get static field: static public Mono.Security.X509.X509ChainStatusFlags PartialChain
    static ::Mono::Security::X509::X509ChainStatusFlags _get_PartialChain();
    // Set static field: static public Mono.Security.X509.X509ChainStatusFlags PartialChain
    static void _set_PartialChain(::Mono::Security::X509::X509ChainStatusFlags value);
    // static field const value: static public Mono.Security.X509.X509ChainStatusFlags UntrustedRoot
    static constexpr const int UntrustedRoot = 32;
    // Get static field: static public Mono.Security.X509.X509ChainStatusFlags UntrustedRoot
    static ::Mono::Security::X509::X509ChainStatusFlags _get_UntrustedRoot();
    // Set static field: static public Mono.Security.X509.X509ChainStatusFlags UntrustedRoot
    static void _set_UntrustedRoot(::Mono::Security::X509::X509ChainStatusFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Mono.Security.X509.X509ChainStatusFlags
  #pragma pack(pop)
  static check_size<sizeof(X509ChainStatusFlags), 0 + sizeof(int)> __Mono_Security_X509_X509ChainStatusFlagsSizeCheck;
  static_assert(sizeof(X509ChainStatusFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
