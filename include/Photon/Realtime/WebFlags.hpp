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
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Forward declaring type: WebFlags
  class WebFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Realtime::WebFlags);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::WebFlags*, "Photon.Realtime", "WebFlags");
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Realtime.WebFlags
  // [TokenAttribute] Offset: FFFFFFFF
  class WebFlags : public ::Il2CppObject {
    public:
    public:
    // public System.Byte WebhookFlags
    // Size: 0x1
    // Offset: 0x10
    uint8_t WebhookFlags;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return WebhookFlags;
    }
    // Get static field: static public readonly Photon.Realtime.WebFlags Default
    static ::Photon::Realtime::WebFlags* _get_Default();
    // Set static field: static public readonly Photon.Realtime.WebFlags Default
    static void _set_Default(::Photon::Realtime::WebFlags* value);
    // static field const value: static public System.Byte HttpForwardConst
    static constexpr const uint8_t HttpForwardConst = 1u;
    // Get static field: static public System.Byte HttpForwardConst
    static uint8_t _get_HttpForwardConst();
    // Set static field: static public System.Byte HttpForwardConst
    static void _set_HttpForwardConst(uint8_t value);
    // static field const value: static public System.Byte SendAuthCookieConst
    static constexpr const uint8_t SendAuthCookieConst = 2u;
    // Get static field: static public System.Byte SendAuthCookieConst
    static uint8_t _get_SendAuthCookieConst();
    // Set static field: static public System.Byte SendAuthCookieConst
    static void _set_SendAuthCookieConst(uint8_t value);
    // static field const value: static public System.Byte SendSyncConst
    static constexpr const uint8_t SendSyncConst = 4u;
    // Get static field: static public System.Byte SendSyncConst
    static uint8_t _get_SendSyncConst();
    // Set static field: static public System.Byte SendSyncConst
    static void _set_SendSyncConst(uint8_t value);
    // static field const value: static public System.Byte SendStateConst
    static constexpr const uint8_t SendStateConst = 8u;
    // Get static field: static public System.Byte SendStateConst
    static uint8_t _get_SendStateConst();
    // Set static field: static public System.Byte SendStateConst
    static void _set_SendStateConst(uint8_t value);
    // Get instance field reference: public System.Byte WebhookFlags
    [[deprecated("Use field access instead!")]] uint8_t& dyn_WebhookFlags();
    // public System.Boolean get_HttpForward()
    // Offset: 0x1C28248
    bool get_HttpForward();
    // public System.Void set_HttpForward(System.Boolean value)
    // Offset: 0x1C28254
    void set_HttpForward(bool value);
    // public System.Boolean get_SendAuthCookie()
    // Offset: 0x1C28270
    bool get_SendAuthCookie();
    // public System.Void set_SendAuthCookie(System.Boolean value)
    // Offset: 0x1C2827C
    void set_SendAuthCookie(bool value);
    // public System.Boolean get_SendSync()
    // Offset: 0x1C28298
    bool get_SendSync();
    // public System.Void set_SendSync(System.Boolean value)
    // Offset: 0x1C282A4
    void set_SendSync(bool value);
    // public System.Boolean get_SendState()
    // Offset: 0x1C282C0
    bool get_SendState();
    // public System.Void set_SendState(System.Boolean value)
    // Offset: 0x1C282CC
    void set_SendState(bool value);
    // public System.Void .ctor(System.Byte webhookFlags)
    // Offset: 0x1C282E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebFlags* New_ctor(uint8_t webhookFlags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Realtime::WebFlags::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebFlags*, creationType>(webhookFlags)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1C28314
    static void _cctor();
  }; // Photon.Realtime.WebFlags
  #pragma pack(pop)
  static check_size<sizeof(WebFlags), 16 + sizeof(uint8_t)> __Photon_Realtime_WebFlagsSizeCheck;
  static_assert(sizeof(WebFlags) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Realtime::WebFlags::get_HttpForward
// Il2CppName: get_HttpForward
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::WebFlags::*)()>(&Photon::Realtime::WebFlags::get_HttpForward)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::WebFlags*), "get_HttpForward", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::WebFlags::set_HttpForward
// Il2CppName: set_HttpForward
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::WebFlags::*)(bool)>(&Photon::Realtime::WebFlags::set_HttpForward)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::WebFlags*), "set_HttpForward", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::WebFlags::get_SendAuthCookie
// Il2CppName: get_SendAuthCookie
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::WebFlags::*)()>(&Photon::Realtime::WebFlags::get_SendAuthCookie)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::WebFlags*), "get_SendAuthCookie", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::WebFlags::set_SendAuthCookie
// Il2CppName: set_SendAuthCookie
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::WebFlags::*)(bool)>(&Photon::Realtime::WebFlags::set_SendAuthCookie)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::WebFlags*), "set_SendAuthCookie", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::WebFlags::get_SendSync
// Il2CppName: get_SendSync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::WebFlags::*)()>(&Photon::Realtime::WebFlags::get_SendSync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::WebFlags*), "get_SendSync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::WebFlags::set_SendSync
// Il2CppName: set_SendSync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::WebFlags::*)(bool)>(&Photon::Realtime::WebFlags::set_SendSync)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::WebFlags*), "set_SendSync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::WebFlags::get_SendState
// Il2CppName: get_SendState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Realtime::WebFlags::*)()>(&Photon::Realtime::WebFlags::get_SendState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::WebFlags*), "get_SendState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::WebFlags::set_SendState
// Il2CppName: set_SendState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Realtime::WebFlags::*)(bool)>(&Photon::Realtime::WebFlags::set_SendState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::WebFlags*), "set_SendState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Realtime::WebFlags::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Realtime::WebFlags::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Photon::Realtime::WebFlags::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Realtime::WebFlags*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
