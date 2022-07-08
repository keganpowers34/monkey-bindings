// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: PlayFab.WebRequestType
#include "PlayFab/WebRequestType.hpp"
// Including type: PlayFab.PlayFabLogLevel
#include "PlayFab/PlayFabLogLevel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayFabSharedSettings
  class PlayFabSharedSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayFabSharedSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayFabSharedSettings*, "", "PlayFabSharedSettings");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: PlayFabSharedSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: AD2680
  class PlayFabSharedSettings : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // public System.String TitleId
    // Size: 0x8
    // Offset: 0x18
    ::StringW TitleId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String VerticalName
    // Size: 0x8
    // Offset: 0x20
    ::StringW VerticalName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String ProductionEnvironmentUrl
    // Size: 0x8
    // Offset: 0x28
    ::StringW ProductionEnvironmentUrl;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public PlayFab.WebRequestType RequestType
    // Size: 0x4
    // Offset: 0x30
    ::PlayFab::WebRequestType RequestType;
    // Field size check
    static_assert(sizeof(::PlayFab::WebRequestType) == 0x4);
    // Padding between fields: RequestType and: AdvertisingIdType
    char __padding3[0x4] = {};
    // public System.String AdvertisingIdType
    // Size: 0x8
    // Offset: 0x38
    ::StringW AdvertisingIdType;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String AdvertisingIdValue
    // Size: 0x8
    // Offset: 0x40
    ::StringW AdvertisingIdValue;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean DisableAdvertising
    // Size: 0x1
    // Offset: 0x48
    bool DisableAdvertising;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean DisableDeviceInfo
    // Size: 0x1
    // Offset: 0x49
    bool DisableDeviceInfo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean DisableFocusTimeCollection
    // Size: 0x1
    // Offset: 0x4A
    bool DisableFocusTimeCollection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: DisableFocusTimeCollection and: RequestTimeout
    char __padding8[0x1] = {};
    // public System.Int32 RequestTimeout
    // Size: 0x4
    // Offset: 0x4C
    int RequestTimeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean RequestKeepAlive
    // Size: 0x1
    // Offset: 0x50
    bool RequestKeepAlive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean CompressApiData
    // Size: 0x1
    // Offset: 0x51
    bool CompressApiData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: CompressApiData and: LogLevel
    char __padding11[0x2] = {};
    // public PlayFab.PlayFabLogLevel LogLevel
    // Size: 0x4
    // Offset: 0x54
    ::PlayFab::PlayFabLogLevel LogLevel;
    // Field size check
    static_assert(sizeof(::PlayFab::PlayFabLogLevel) == 0x4);
    // public System.String LoggerHost
    // Size: 0x8
    // Offset: 0x58
    ::StringW LoggerHost;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 LoggerPort
    // Size: 0x4
    // Offset: 0x60
    int LoggerPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean EnableRealTimeLogging
    // Size: 0x1
    // Offset: 0x64
    bool EnableRealTimeLogging;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: EnableRealTimeLogging and: LogCapLimit
    char __padding15[0x3] = {};
    // public System.Int32 LogCapLimit
    // Size: 0x4
    // Offset: 0x68
    int LogCapLimit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.String TitleId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TitleId();
    // Get instance field reference: System.String VerticalName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_VerticalName();
    // Get instance field reference: public System.String ProductionEnvironmentUrl
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ProductionEnvironmentUrl();
    // Get instance field reference: public PlayFab.WebRequestType RequestType
    [[deprecated("Use field access instead!")]] ::PlayFab::WebRequestType& dyn_RequestType();
    // Get instance field reference: public System.String AdvertisingIdType
    [[deprecated("Use field access instead!")]] ::StringW& dyn_AdvertisingIdType();
    // Get instance field reference: public System.String AdvertisingIdValue
    [[deprecated("Use field access instead!")]] ::StringW& dyn_AdvertisingIdValue();
    // Get instance field reference: public System.Boolean DisableAdvertising
    [[deprecated("Use field access instead!")]] bool& dyn_DisableAdvertising();
    // Get instance field reference: public System.Boolean DisableDeviceInfo
    [[deprecated("Use field access instead!")]] bool& dyn_DisableDeviceInfo();
    // Get instance field reference: public System.Boolean DisableFocusTimeCollection
    [[deprecated("Use field access instead!")]] bool& dyn_DisableFocusTimeCollection();
    // Get instance field reference: public System.Int32 RequestTimeout
    [[deprecated("Use field access instead!")]] int& dyn_RequestTimeout();
    // Get instance field reference: public System.Boolean RequestKeepAlive
    [[deprecated("Use field access instead!")]] bool& dyn_RequestKeepAlive();
    // Get instance field reference: public System.Boolean CompressApiData
    [[deprecated("Use field access instead!")]] bool& dyn_CompressApiData();
    // Get instance field reference: public PlayFab.PlayFabLogLevel LogLevel
    [[deprecated("Use field access instead!")]] ::PlayFab::PlayFabLogLevel& dyn_LogLevel();
    // Get instance field reference: public System.String LoggerHost
    [[deprecated("Use field access instead!")]] ::StringW& dyn_LoggerHost();
    // Get instance field reference: public System.Int32 LoggerPort
    [[deprecated("Use field access instead!")]] int& dyn_LoggerPort();
    // Get instance field reference: public System.Boolean EnableRealTimeLogging
    [[deprecated("Use field access instead!")]] bool& dyn_EnableRealTimeLogging();
    // Get instance field reference: public System.Int32 LogCapLimit
    [[deprecated("Use field access instead!")]] int& dyn_LogCapLimit();
    // public System.Void .ctor()
    // Offset: 0x19A0354
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayFabSharedSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayFabSharedSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayFabSharedSettings*, creationType>()));
    }
  }; // PlayFabSharedSettings
  #pragma pack(pop)
  static check_size<sizeof(PlayFabSharedSettings), 104 + sizeof(int)> __GlobalNamespace_PlayFabSharedSettingsSizeCheck;
  static_assert(sizeof(PlayFabSharedSettings) == 0x6C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayFabSharedSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
