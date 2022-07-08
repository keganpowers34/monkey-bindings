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
// Type namespace: PlayFab.DataModels
namespace PlayFab::DataModels {
  // Forward declaring type: OperationTypes
  struct OperationTypes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::DataModels::OperationTypes, "PlayFab.DataModels", "OperationTypes");
// Type namespace: PlayFab.DataModels
namespace PlayFab::DataModels {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.DataModels.OperationTypes
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
    // static field const value: static public PlayFab.DataModels.OperationTypes Created
    static constexpr const int Created = 0;
    // Get static field: static public PlayFab.DataModels.OperationTypes Created
    static ::PlayFab::DataModels::OperationTypes _get_Created();
    // Set static field: static public PlayFab.DataModels.OperationTypes Created
    static void _set_Created(::PlayFab::DataModels::OperationTypes value);
    // static field const value: static public PlayFab.DataModels.OperationTypes Updated
    static constexpr const int Updated = 1;
    // Get static field: static public PlayFab.DataModels.OperationTypes Updated
    static ::PlayFab::DataModels::OperationTypes _get_Updated();
    // Set static field: static public PlayFab.DataModels.OperationTypes Updated
    static void _set_Updated(::PlayFab::DataModels::OperationTypes value);
    // static field const value: static public PlayFab.DataModels.OperationTypes Deleted
    static constexpr const int Deleted = 2;
    // Get static field: static public PlayFab.DataModels.OperationTypes Deleted
    static ::PlayFab::DataModels::OperationTypes _get_Deleted();
    // Set static field: static public PlayFab.DataModels.OperationTypes Deleted
    static void _set_Deleted(::PlayFab::DataModels::OperationTypes value);
    // static field const value: static public PlayFab.DataModels.OperationTypes None
    static constexpr const int None = 3;
    // Get static field: static public PlayFab.DataModels.OperationTypes None
    static ::PlayFab::DataModels::OperationTypes _get_None();
    // Set static field: static public PlayFab.DataModels.OperationTypes None
    static void _set_None(::PlayFab::DataModels::OperationTypes value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // PlayFab.DataModels.OperationTypes
  #pragma pack(pop)
  static check_size<sizeof(OperationTypes), 0 + sizeof(int)> __PlayFab_DataModels_OperationTypesSizeCheck;
  static_assert(sizeof(OperationTypes) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
