// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: PlayFab.PluginContract
#include "PlayFab/PluginContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab
namespace PlayFab {
  // Forward declaring type: PluginContractKey
  struct PluginContractKey;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::PluginContractKey, "PlayFab", "PluginContractKey");
// Type namespace: PlayFab
namespace PlayFab {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: PlayFab.PluginContractKey
  // [TokenAttribute] Offset: FFFFFFFF
  struct PluginContractKey/*, public ::System::ValueType*/ {
    public:
    public:
    // public PlayFab.PluginContract _pluginContract
    // Size: 0x4
    // Offset: 0x0
    ::PlayFab::PluginContract pluginContract;
    // Field size check
    static_assert(sizeof(::PlayFab::PluginContract) == 0x4);
    // Padding between fields: pluginContract and: pluginName
    char __padding0[0x4] = {};
    // public System.String _pluginName
    // Size: 0x8
    // Offset: 0x8
    ::StringW pluginName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: PluginContractKey
    constexpr PluginContractKey(::PlayFab::PluginContract pluginContract_ = {}, ::StringW pluginName_ = {}) noexcept : pluginContract{pluginContract_}, pluginName{pluginName_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public PlayFab.PluginContract _pluginContract
    [[deprecated("Use field access instead!")]] ::PlayFab::PluginContract& dyn__pluginContract();
    // Get instance field reference: public System.String _pluginName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__pluginName();
  }; // PlayFab.PluginContractKey
  #pragma pack(pop)
  static check_size<sizeof(PluginContractKey), 8 + sizeof(::StringW)> __PlayFab_PluginContractKeySizeCheck;
  static_assert(sizeof(PluginContractKey) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
