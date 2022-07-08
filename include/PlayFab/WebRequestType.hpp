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
// Type namespace: PlayFab
namespace PlayFab {
  // Forward declaring type: WebRequestType
  struct WebRequestType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::WebRequestType, "PlayFab", "WebRequestType");
// Type namespace: PlayFab
namespace PlayFab {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.WebRequestType
  // [TokenAttribute] Offset: FFFFFFFF
  struct WebRequestType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: WebRequestType
    constexpr WebRequestType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PlayFab.WebRequestType UnityWebRequest
    static constexpr const int UnityWebRequest = 0;
    // Get static field: static public PlayFab.WebRequestType UnityWebRequest
    static ::PlayFab::WebRequestType _get_UnityWebRequest();
    // Set static field: static public PlayFab.WebRequestType UnityWebRequest
    static void _set_UnityWebRequest(::PlayFab::WebRequestType value);
    // static field const value: static public PlayFab.WebRequestType HttpWebRequest
    static constexpr const int HttpWebRequest = 1;
    // Get static field: static public PlayFab.WebRequestType HttpWebRequest
    static ::PlayFab::WebRequestType _get_HttpWebRequest();
    // Set static field: static public PlayFab.WebRequestType HttpWebRequest
    static void _set_HttpWebRequest(::PlayFab::WebRequestType value);
    // static field const value: static public PlayFab.WebRequestType CustomHttp
    static constexpr const int CustomHttp = 2;
    // Get static field: static public PlayFab.WebRequestType CustomHttp
    static ::PlayFab::WebRequestType _get_CustomHttp();
    // Set static field: static public PlayFab.WebRequestType CustomHttp
    static void _set_CustomHttp(::PlayFab::WebRequestType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // PlayFab.WebRequestType
  #pragma pack(pop)
  static check_size<sizeof(WebRequestType), 0 + sizeof(int)> __PlayFab_WebRequestTypeSizeCheck;
  static_assert(sizeof(WebRequestType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
