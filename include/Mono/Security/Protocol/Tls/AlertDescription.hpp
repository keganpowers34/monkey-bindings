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
// Type namespace: Mono.Security.Protocol.Tls
namespace Mono::Security::Protocol::Tls {
  // Forward declaring type: AlertDescription
  struct AlertDescription;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Tls::AlertDescription, "Mono.Security.Protocol.Tls", "AlertDescription");
// Type namespace: Mono.Security.Protocol.Tls
namespace Mono::Security::Protocol::Tls {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Tls.AlertDescription
  // [TokenAttribute] Offset: FFFFFFFF
  struct AlertDescription/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: AlertDescription
    constexpr AlertDescription(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription CloseNotify
    static constexpr const uint8_t CloseNotify = 0u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription CloseNotify
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_CloseNotify();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription CloseNotify
    static void _set_CloseNotify(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription UnexpectedMessage
    static constexpr const uint8_t UnexpectedMessage = 10u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription UnexpectedMessage
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_UnexpectedMessage();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription UnexpectedMessage
    static void _set_UnexpectedMessage(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription BadRecordMAC
    static constexpr const uint8_t BadRecordMAC = 20u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription BadRecordMAC
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_BadRecordMAC();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription BadRecordMAC
    static void _set_BadRecordMAC(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription DecryptionFailed
    static constexpr const uint8_t DecryptionFailed = 21u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription DecryptionFailed
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_DecryptionFailed();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription DecryptionFailed
    static void _set_DecryptionFailed(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription RecordOverflow
    static constexpr const uint8_t RecordOverflow = 22u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription RecordOverflow
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_RecordOverflow();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription RecordOverflow
    static void _set_RecordOverflow(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription DecompressionFailiure
    static constexpr const uint8_t DecompressionFailiure = 30u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription DecompressionFailiure
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_DecompressionFailiure();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription DecompressionFailiure
    static void _set_DecompressionFailiure(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription HandshakeFailiure
    static constexpr const uint8_t HandshakeFailiure = 40u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription HandshakeFailiure
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_HandshakeFailiure();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription HandshakeFailiure
    static void _set_HandshakeFailiure(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription NoCertificate
    static constexpr const uint8_t NoCertificate = 41u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription NoCertificate
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_NoCertificate();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription NoCertificate
    static void _set_NoCertificate(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription BadCertificate
    static constexpr const uint8_t BadCertificate = 42u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription BadCertificate
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_BadCertificate();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription BadCertificate
    static void _set_BadCertificate(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription UnsupportedCertificate
    static constexpr const uint8_t UnsupportedCertificate = 43u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription UnsupportedCertificate
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_UnsupportedCertificate();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription UnsupportedCertificate
    static void _set_UnsupportedCertificate(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription CertificateRevoked
    static constexpr const uint8_t CertificateRevoked = 44u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription CertificateRevoked
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_CertificateRevoked();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription CertificateRevoked
    static void _set_CertificateRevoked(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription CertificateExpired
    static constexpr const uint8_t CertificateExpired = 45u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription CertificateExpired
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_CertificateExpired();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription CertificateExpired
    static void _set_CertificateExpired(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription CertificateUnknown
    static constexpr const uint8_t CertificateUnknown = 46u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription CertificateUnknown
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_CertificateUnknown();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription CertificateUnknown
    static void _set_CertificateUnknown(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription IlegalParameter
    static constexpr const uint8_t IlegalParameter = 47u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription IlegalParameter
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_IlegalParameter();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription IlegalParameter
    static void _set_IlegalParameter(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription UnknownCA
    static constexpr const uint8_t UnknownCA = 48u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription UnknownCA
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_UnknownCA();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription UnknownCA
    static void _set_UnknownCA(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription AccessDenied
    static constexpr const uint8_t AccessDenied = 49u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription AccessDenied
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_AccessDenied();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription AccessDenied
    static void _set_AccessDenied(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription DecodeError
    static constexpr const uint8_t DecodeError = 50u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription DecodeError
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_DecodeError();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription DecodeError
    static void _set_DecodeError(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription DecryptError
    static constexpr const uint8_t DecryptError = 51u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription DecryptError
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_DecryptError();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription DecryptError
    static void _set_DecryptError(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription ExportRestriction
    static constexpr const uint8_t ExportRestriction = 60u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription ExportRestriction
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_ExportRestriction();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription ExportRestriction
    static void _set_ExportRestriction(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription ProtocolVersion
    static constexpr const uint8_t ProtocolVersion = 70u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription ProtocolVersion
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_ProtocolVersion();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription ProtocolVersion
    static void _set_ProtocolVersion(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription InsuficientSecurity
    static constexpr const uint8_t InsuficientSecurity = 71u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription InsuficientSecurity
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_InsuficientSecurity();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription InsuficientSecurity
    static void _set_InsuficientSecurity(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription InternalError
    static constexpr const uint8_t InternalError = 80u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription InternalError
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_InternalError();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription InternalError
    static void _set_InternalError(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription UserCancelled
    static constexpr const uint8_t UserCancelled = 90u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription UserCancelled
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_UserCancelled();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription UserCancelled
    static void _set_UserCancelled(::Mono::Security::Protocol::Tls::AlertDescription value);
    // static field const value: static public Mono.Security.Protocol.Tls.AlertDescription NoRenegotiation
    static constexpr const uint8_t NoRenegotiation = 100u;
    // Get static field: static public Mono.Security.Protocol.Tls.AlertDescription NoRenegotiation
    static ::Mono::Security::Protocol::Tls::AlertDescription _get_NoRenegotiation();
    // Set static field: static public Mono.Security.Protocol.Tls.AlertDescription NoRenegotiation
    static void _set_NoRenegotiation(::Mono::Security::Protocol::Tls::AlertDescription value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // Mono.Security.Protocol.Tls.AlertDescription
  #pragma pack(pop)
  static check_size<sizeof(AlertDescription), 0 + sizeof(uint8_t)> __Mono_Security_Protocol_Tls_AlertDescriptionSizeCheck;
  static_assert(sizeof(AlertDescription) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
