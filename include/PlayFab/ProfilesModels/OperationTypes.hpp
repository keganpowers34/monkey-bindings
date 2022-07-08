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
// Type namespace: PlayFab.ProfilesModels
namespace PlayFab::ProfilesModels {
  // Forward declaring type: OperationTypes
  struct OperationTypes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::ProfilesModels::OperationTypes, "PlayFab.ProfilesModels", "OperationTypes");
// Type namespace: PlayFab.ProfilesModels
namespace PlayFab::ProfilesModels {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.ProfilesModels.OperationTypes
  // [TokenAttribute] Offset: FFFFFFFF
  struct OperationTypes/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OperationTypes
    constexpr OperationTypes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public PlayFab.ProfilesModels.OperationTypes Created
    static constexpr const int Created = 0;
    // Get static field: static public PlayFab.ProfilesModels.OperationTypes Created
    static ::PlayFab::ProfilesModels::OperationTypes _get_Created();
    // Set static field: static public PlayFab.ProfilesModels.OperationTypes Created
    static void _set_Created(::PlayFab::ProfilesModels::OperationTypes value);
    // static field const value: static public PlayFab.ProfilesModels.OperationTypes Updated
    static constexpr const int Updated = 1;
    // Get static field: static public PlayFab.ProfilesModels.OperationTypes Updated
    static ::PlayFab::ProfilesModels::OperationTypes _get_Updated();
    // Set static field: static public PlayFab.ProfilesModels.OperationTypes Updated
    static void _set_Updated(::PlayFab::ProfilesModels::OperationTypes value);
    // static field const value: static public PlayFab.ProfilesModels.OperationTypes Deleted
    static constexpr const int Deleted = 2;
    // Get static field: static public PlayFab.ProfilesModels.OperationTypes Deleted
    static ::PlayFab::ProfilesModels::OperationTypes _get_Deleted();
    // Set static field: static public PlayFab.ProfilesModels.OperationTypes Deleted
    static void _set_Deleted(::PlayFab::ProfilesModels::OperationTypes value);
    // static field const value: static public PlayFab.ProfilesModels.OperationTypes None
    static constexpr const int None = 3;
    // Get static field: static public PlayFab.ProfilesModels.OperationTypes None
    static ::PlayFab::ProfilesModels::OperationTypes _get_None();
    // Set static field: static public PlayFab.ProfilesModels.OperationTypes None
    static void _set_None(::PlayFab::ProfilesModels::OperationTypes value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // PlayFab.ProfilesModels.OperationTypes
  #pragma pack(pop)
  static check_size<sizeof(OperationTypes), 0 + sizeof(int)> __PlayFab_ProfilesModels_OperationTypesSizeCheck;
  static_assert(sizeof(OperationTypes) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
