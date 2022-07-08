// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Byte
#include "System/Byte.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Photon.Chat
namespace Photon::Chat {
  // Forward declaring type: ChannelWellKnownProperties
  class ChannelWellKnownProperties;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Chat::ChannelWellKnownProperties);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Chat::ChannelWellKnownProperties*, "Photon.Chat", "ChannelWellKnownProperties");
// Type namespace: Photon.Chat
namespace Photon::Chat {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Chat.ChannelWellKnownProperties
  // [TokenAttribute] Offset: FFFFFFFF
  class ChannelWellKnownProperties : public ::Il2CppObject {
    public:
    // static field const value: static public System.Byte MaxSubscribers
    static constexpr const uint8_t MaxSubscribers = 255u;
    // Get static field: static public System.Byte MaxSubscribers
    static uint8_t _get_MaxSubscribers();
    // Set static field: static public System.Byte MaxSubscribers
    static void _set_MaxSubscribers(uint8_t value);
    // static field const value: static public System.Byte PublishSubscribers
    static constexpr const uint8_t PublishSubscribers = 254u;
    // Get static field: static public System.Byte PublishSubscribers
    static uint8_t _get_PublishSubscribers();
    // Set static field: static public System.Byte PublishSubscribers
    static void _set_PublishSubscribers(uint8_t value);
    // public System.Void .ctor()
    // Offset: 0x1B01698
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ChannelWellKnownProperties* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Chat::ChannelWellKnownProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ChannelWellKnownProperties*, creationType>()));
    }
  }; // Photon.Chat.ChannelWellKnownProperties
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Chat::ChannelWellKnownProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
