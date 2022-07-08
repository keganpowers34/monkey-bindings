// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Viveport.Internal
namespace Viveport::Internal {
  // Forward declaring type: LeaderboardEntry_t
  struct LeaderboardEntry_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Viveport::Internal::LeaderboardEntry_t, "Viveport.Internal", "LeaderboardEntry_t");
// Type namespace: Viveport.Internal
namespace Viveport::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Viveport.Internal.LeaderboardEntry_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct LeaderboardEntry_t/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Int32 m_nGlobalRank
    // Size: 0x4
    // Offset: 0x0
    int m_nGlobalRank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_nScore
    // Size: 0x4
    // Offset: 0x4
    int m_nScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.String m_pUserName
    // Size: 0x8
    // Offset: 0x8
    ::StringW m_pUserName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: LeaderboardEntry_t
    constexpr LeaderboardEntry_t(int m_nGlobalRank_ = {}, int m_nScore_ = {}, ::StringW m_pUserName_ = {}) noexcept : m_nGlobalRank{m_nGlobalRank_}, m_nScore{m_nScore_}, m_pUserName{m_pUserName_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.Int32 m_nGlobalRank
    [[deprecated("Use field access instead!")]] int& dyn_m_nGlobalRank();
    // Get instance field reference: System.Int32 m_nScore
    [[deprecated("Use field access instead!")]] int& dyn_m_nScore();
    // Get instance field reference: System.String m_pUserName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_pUserName();
  }; // Viveport.Internal.LeaderboardEntry_t
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardEntry_t), 8 + sizeof(::StringW)> __Viveport_Internal_LeaderboardEntry_tSizeCheck;
  static_assert(sizeof(LeaderboardEntry_t) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
