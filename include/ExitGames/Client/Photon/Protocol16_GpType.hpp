// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ExitGames.Client.Photon.Protocol16
#include "ExitGames/Client/Photon/Protocol16.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::Protocol16::GpType, "ExitGames.Client.Photon", "Protocol16/GpType");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.Protocol16/GpType
  // [TokenAttribute] Offset: FFFFFFFF
  struct Protocol16::GpType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: GpType
    constexpr GpType(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public ExitGames.Client.Photon.Protocol16/GpType Unknown
    static constexpr const uint8_t Unknown = 0u;
    // Get static field: static public ExitGames.Client.Photon.Protocol16/GpType Unknown
    static ::ExitGames::Client::Photon::Protocol16::GpType _get_Unknown();
    // Set static field: static public ExitGames.Client.Photon.Protocol16/GpType Unknown
    static void _set_Unknown(::ExitGames::Client::Photon::Protocol16::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol16/GpType Array
    static constexpr const uint8_t Array = 121u;
    // Get static field: static public ExitGames.Client.Photon.Protocol16/GpType Array
    static ::ExitGames::Client::Photon::Protocol16::GpType _get_Array();
    // Set static field: static public ExitGames.Client.Photon.Protocol16/GpType Array
    static void _set_Array(::ExitGames::Client::Photon::Protocol16::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol16/GpType Boolean
    static constexpr const uint8_t Boolean = 111u;
    // Get static field: static public ExitGames.Client.Photon.Protocol16/GpType Boolean
    static ::ExitGames::Client::Photon::Protocol16::GpType _get_Boolean();
    // Set static field: static public ExitGames.Client.Photon.Protocol16/GpType Boolean
    static void _set_Boolean(::ExitGames::Client::Photon::Protocol16::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol16/GpType Byte
    static constexpr const uint8_t Byte = 98u;
    // Get static field: static public ExitGames.Client.Photon.Protocol16/GpType Byte
    static ::ExitGames::Client::Photon::Protocol16::GpType _get_Byte();
    // Set static field: static public ExitGames.Client.Photon.Protocol16/GpType Byte
    static void _set_Byte(::ExitGames::Client::Photon::Protocol16::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol16/GpType ByteArray
    static constexpr const uint8_t ByteArray = 120u;
    // Get static field: static public ExitGames.Client.Photon.Protocol16/GpType ByteArray
    static ::ExitGames::Client::Photon::Protocol16::GpType _get_ByteArray();
    // Set static field: static public ExitGames.Client.Photon.Protocol16/GpType ByteArray
    static void _set_ByteArray(::ExitGames::Client::Photon::Protocol16::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol16/GpType ObjectArray
    static constexpr const uint8_t ObjectArray = 122u;
    // Get static field: static public ExitGames.Client.Photon.Protocol16/GpType ObjectArray
    static ::ExitGames::Client::Photon::Protocol16::GpType _get_ObjectArray();
    // Set static field: static public ExitGames.Client.Photon.Protocol16/GpType ObjectArray
    static void _set_ObjectArray(::ExitGames::Client::Photon::Protocol16::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol16/GpType Short
    static constexpr const uint8_t Short = 107u;
    // Get static field: static public ExitGames.Client.Photon.Protocol16/GpType Short
    static ::ExitGames::Client::Photon::Protocol16::GpType _get_Short();
    // Set static field: static public ExitGames.Client.Photon.Protocol16/GpType Short
    static void _set_Short(::ExitGames::Client::Photon::Protocol16::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol16/GpType Float
    static constexpr const uint8_t Float = 102u;
    // Get static field: static public ExitGames.Client.Photon.Protocol16/GpType Float
    static ::ExitGames::Client::Photon::Protocol16::GpType _get_Float();
    // Set static field: static public ExitGames.Client.Photon.Protocol16/GpType Float
    static void _set_Float(::ExitGames::Client::Photon::Protocol16::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol16/GpType Dictionary
    static constexpr const uint8_t Dictionary = 68u;
    // Get static field: static public ExitGames.Client.Photon.Protocol16/GpType Dictionary
    static ::ExitGames::Client::Photon::Protocol16::GpType _get_Dictionary();
    // Set static field: static public ExitGames.Client.Photon.Protocol16/GpType Dictionary
    static void _set_Dictionary(::ExitGames::Client::Photon::Protocol16::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol16/GpType Double
    static constexpr const uint8_t Double = 100u;
    // Get static field: static public ExitGames.Client.Photon.Protocol16/GpType Double
    static ::ExitGames::Client::Photon::Protocol16::GpType _get_Double();
    // Set static field: static public ExitGames.Client.Photon.Protocol16/GpType Double
    static void _set_Double(::ExitGames::Client::Photon::Protocol16::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol16/GpType Hashtable
    static constexpr const uint8_t Hashtable = 104u;
    // Get static field: static public ExitGames.Client.Photon.Protocol16/GpType Hashtable
    static ::ExitGames::Client::Photon::Protocol16::GpType _get_Hashtable();
    // Set static field: static public ExitGames.Client.Photon.Protocol16/GpType Hashtable
    static void _set_Hashtable(::ExitGames::Client::Photon::Protocol16::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol16/GpType Integer
    static constexpr const uint8_t Integer = 105u;
    // Get static field: static public ExitGames.Client.Photon.Protocol16/GpType Integer
    static ::ExitGames::Client::Photon::Protocol16::GpType _get_Integer();
    // Set static field: static public ExitGames.Client.Photon.Protocol16/GpType Integer
    static void _set_Integer(::ExitGames::Client::Photon::Protocol16::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol16/GpType IntegerArray
    static constexpr const uint8_t IntegerArray = 110u;
    // Get static field: static public ExitGames.Client.Photon.Protocol16/GpType IntegerArray
    static ::ExitGames::Client::Photon::Protocol16::GpType _get_IntegerArray();
    // Set static field: static public ExitGames.Client.Photon.Protocol16/GpType IntegerArray
    static void _set_IntegerArray(::ExitGames::Client::Photon::Protocol16::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol16/GpType Long
    static constexpr const uint8_t Long = 108u;
    // Get static field: static public ExitGames.Client.Photon.Protocol16/GpType Long
    static ::ExitGames::Client::Photon::Protocol16::GpType _get_Long();
    // Set static field: static public ExitGames.Client.Photon.Protocol16/GpType Long
    static void _set_Long(::ExitGames::Client::Photon::Protocol16::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol16/GpType String
    static constexpr const uint8_t String = 115u;
    // Get static field: static public ExitGames.Client.Photon.Protocol16/GpType String
    static ::ExitGames::Client::Photon::Protocol16::GpType _get_String();
    // Set static field: static public ExitGames.Client.Photon.Protocol16/GpType String
    static void _set_String(::ExitGames::Client::Photon::Protocol16::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol16/GpType StringArray
    static constexpr const uint8_t StringArray = 97u;
    // Get static field: static public ExitGames.Client.Photon.Protocol16/GpType StringArray
    static ::ExitGames::Client::Photon::Protocol16::GpType _get_StringArray();
    // Set static field: static public ExitGames.Client.Photon.Protocol16/GpType StringArray
    static void _set_StringArray(::ExitGames::Client::Photon::Protocol16::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol16/GpType Custom
    static constexpr const uint8_t Custom = 99u;
    // Get static field: static public ExitGames.Client.Photon.Protocol16/GpType Custom
    static ::ExitGames::Client::Photon::Protocol16::GpType _get_Custom();
    // Set static field: static public ExitGames.Client.Photon.Protocol16/GpType Custom
    static void _set_Custom(::ExitGames::Client::Photon::Protocol16::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol16/GpType Null
    static constexpr const uint8_t Null = 42u;
    // Get static field: static public ExitGames.Client.Photon.Protocol16/GpType Null
    static ::ExitGames::Client::Photon::Protocol16::GpType _get_Null();
    // Set static field: static public ExitGames.Client.Photon.Protocol16/GpType Null
    static void _set_Null(::ExitGames::Client::Photon::Protocol16::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol16/GpType EventData
    static constexpr const uint8_t EventData = 101u;
    // Get static field: static public ExitGames.Client.Photon.Protocol16/GpType EventData
    static ::ExitGames::Client::Photon::Protocol16::GpType _get_EventData();
    // Set static field: static public ExitGames.Client.Photon.Protocol16/GpType EventData
    static void _set_EventData(::ExitGames::Client::Photon::Protocol16::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol16/GpType OperationRequest
    static constexpr const uint8_t OperationRequest = 113u;
    // Get static field: static public ExitGames.Client.Photon.Protocol16/GpType OperationRequest
    static ::ExitGames::Client::Photon::Protocol16::GpType _get_OperationRequest();
    // Set static field: static public ExitGames.Client.Photon.Protocol16/GpType OperationRequest
    static void _set_OperationRequest(::ExitGames::Client::Photon::Protocol16::GpType value);
    // static field const value: static public ExitGames.Client.Photon.Protocol16/GpType OperationResponse
    static constexpr const uint8_t OperationResponse = 112u;
    // Get static field: static public ExitGames.Client.Photon.Protocol16/GpType OperationResponse
    static ::ExitGames::Client::Photon::Protocol16::GpType _get_OperationResponse();
    // Set static field: static public ExitGames.Client.Photon.Protocol16/GpType OperationResponse
    static void _set_OperationResponse(::ExitGames::Client::Photon::Protocol16::GpType value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // ExitGames.Client.Photon.Protocol16/GpType
  #pragma pack(pop)
  static check_size<sizeof(Protocol16::GpType), 0 + sizeof(uint8_t)> __ExitGames_Client_Photon_Protocol16_GpTypeSizeCheck;
  static_assert(sizeof(Protocol16::GpType) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
