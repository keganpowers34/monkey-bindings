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
// Type namespace: Viveport.Internal
namespace Viveport::Internal {
  // Forward declaring type: ELeaderboardUploadScoreMethod
  struct ELeaderboardUploadScoreMethod;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Viveport::Internal::ELeaderboardUploadScoreMethod, "Viveport.Internal", "ELeaderboardUploadScoreMethod");
// Type namespace: Viveport.Internal
namespace Viveport::Internal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Viveport.Internal.ELeaderboardUploadScoreMethod
  // [TokenAttribute] Offset: FFFFFFFF
  struct ELeaderboardUploadScoreMethod/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ELeaderboardUploadScoreMethod
    constexpr ELeaderboardUploadScoreMethod(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Viveport.Internal.ELeaderboardUploadScoreMethod k_ELeaderboardUploadScoreMethodNone
    static constexpr const int k_ELeaderboardUploadScoreMethodNone = 0;
    // Get static field: static public Viveport.Internal.ELeaderboardUploadScoreMethod k_ELeaderboardUploadScoreMethodNone
    static ::Viveport::Internal::ELeaderboardUploadScoreMethod _get_k_ELeaderboardUploadScoreMethodNone();
    // Set static field: static public Viveport.Internal.ELeaderboardUploadScoreMethod k_ELeaderboardUploadScoreMethodNone
    static void _set_k_ELeaderboardUploadScoreMethodNone(::Viveport::Internal::ELeaderboardUploadScoreMethod value);
    // static field const value: static public Viveport.Internal.ELeaderboardUploadScoreMethod k_ELeaderboardUploadScoreMethodKeepBest
    static constexpr const int k_ELeaderboardUploadScoreMethodKeepBest = 1;
    // Get static field: static public Viveport.Internal.ELeaderboardUploadScoreMethod k_ELeaderboardUploadScoreMethodKeepBest
    static ::Viveport::Internal::ELeaderboardUploadScoreMethod _get_k_ELeaderboardUploadScoreMethodKeepBest();
    // Set static field: static public Viveport.Internal.ELeaderboardUploadScoreMethod k_ELeaderboardUploadScoreMethodKeepBest
    static void _set_k_ELeaderboardUploadScoreMethodKeepBest(::Viveport::Internal::ELeaderboardUploadScoreMethod value);
    // static field const value: static public Viveport.Internal.ELeaderboardUploadScoreMethod k_ELeaderboardUploadScoreMethodForceUpdate
    static constexpr const int k_ELeaderboardUploadScoreMethodForceUpdate = 2;
    // Get static field: static public Viveport.Internal.ELeaderboardUploadScoreMethod k_ELeaderboardUploadScoreMethodForceUpdate
    static ::Viveport::Internal::ELeaderboardUploadScoreMethod _get_k_ELeaderboardUploadScoreMethodForceUpdate();
    // Set static field: static public Viveport.Internal.ELeaderboardUploadScoreMethod k_ELeaderboardUploadScoreMethodForceUpdate
    static void _set_k_ELeaderboardUploadScoreMethodForceUpdate(::Viveport::Internal::ELeaderboardUploadScoreMethod value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Viveport.Internal.ELeaderboardUploadScoreMethod
  #pragma pack(pop)
  static check_size<sizeof(ELeaderboardUploadScoreMethod), 0 + sizeof(int)> __Viveport_Internal_ELeaderboardUploadScoreMethodSizeCheck;
  static_assert(sizeof(ELeaderboardUploadScoreMethod) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
