// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Viveport.UserStats
#include "Viveport/UserStats.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Viveport::UserStats::LeaderBoardTimeRange, "Viveport", "UserStats/LeaderBoardTimeRange");
// Type namespace: Viveport
namespace Viveport {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Viveport.UserStats/LeaderBoardTimeRange
  // [TokenAttribute] Offset: FFFFFFFF
  struct UserStats::LeaderBoardTimeRange/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LeaderBoardTimeRange
    constexpr LeaderBoardTimeRange(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Viveport.UserStats/LeaderBoardTimeRange AllTime
    static constexpr const int AllTime = 0;
    // Get static field: static public Viveport.UserStats/LeaderBoardTimeRange AllTime
    static ::Viveport::UserStats::LeaderBoardTimeRange _get_AllTime();
    // Set static field: static public Viveport.UserStats/LeaderBoardTimeRange AllTime
    static void _set_AllTime(::Viveport::UserStats::LeaderBoardTimeRange value);
    // static field const value: static public Viveport.UserStats/LeaderBoardTimeRange Daily
    static constexpr const int Daily = 1;
    // Get static field: static public Viveport.UserStats/LeaderBoardTimeRange Daily
    static ::Viveport::UserStats::LeaderBoardTimeRange _get_Daily();
    // Set static field: static public Viveport.UserStats/LeaderBoardTimeRange Daily
    static void _set_Daily(::Viveport::UserStats::LeaderBoardTimeRange value);
    // static field const value: static public Viveport.UserStats/LeaderBoardTimeRange Weekly
    static constexpr const int Weekly = 2;
    // Get static field: static public Viveport.UserStats/LeaderBoardTimeRange Weekly
    static ::Viveport::UserStats::LeaderBoardTimeRange _get_Weekly();
    // Set static field: static public Viveport.UserStats/LeaderBoardTimeRange Weekly
    static void _set_Weekly(::Viveport::UserStats::LeaderBoardTimeRange value);
    // static field const value: static public Viveport.UserStats/LeaderBoardTimeRange Monthly
    static constexpr const int Monthly = 3;
    // Get static field: static public Viveport.UserStats/LeaderBoardTimeRange Monthly
    static ::Viveport::UserStats::LeaderBoardTimeRange _get_Monthly();
    // Set static field: static public Viveport.UserStats/LeaderBoardTimeRange Monthly
    static void _set_Monthly(::Viveport::UserStats::LeaderBoardTimeRange value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Viveport.UserStats/LeaderBoardTimeRange
  #pragma pack(pop)
  static check_size<sizeof(UserStats::LeaderBoardTimeRange), 0 + sizeof(int)> __Viveport_UserStats_LeaderBoardTimeRangeSizeCheck;
  static_assert(sizeof(UserStats::LeaderBoardTimeRange) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
