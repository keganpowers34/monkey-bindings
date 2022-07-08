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
// Type namespace: Ionic.Zlib
namespace Ionic::Zlib {
  // Forward declaring type: BlockState
  struct BlockState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Ionic::Zlib::BlockState, "Ionic.Zlib", "BlockState");
// Type namespace: Ionic.Zlib
namespace Ionic::Zlib {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Ionic.Zlib.BlockState
  // [TokenAttribute] Offset: FFFFFFFF
  struct BlockState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BlockState
    constexpr BlockState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Ionic.Zlib.BlockState NeedMore
    static constexpr const int NeedMore = 0;
    // Get static field: static public Ionic.Zlib.BlockState NeedMore
    static ::Ionic::Zlib::BlockState _get_NeedMore();
    // Set static field: static public Ionic.Zlib.BlockState NeedMore
    static void _set_NeedMore(::Ionic::Zlib::BlockState value);
    // static field const value: static public Ionic.Zlib.BlockState BlockDone
    static constexpr const int BlockDone = 1;
    // Get static field: static public Ionic.Zlib.BlockState BlockDone
    static ::Ionic::Zlib::BlockState _get_BlockDone();
    // Set static field: static public Ionic.Zlib.BlockState BlockDone
    static void _set_BlockDone(::Ionic::Zlib::BlockState value);
    // static field const value: static public Ionic.Zlib.BlockState FinishStarted
    static constexpr const int FinishStarted = 2;
    // Get static field: static public Ionic.Zlib.BlockState FinishStarted
    static ::Ionic::Zlib::BlockState _get_FinishStarted();
    // Set static field: static public Ionic.Zlib.BlockState FinishStarted
    static void _set_FinishStarted(::Ionic::Zlib::BlockState value);
    // static field const value: static public Ionic.Zlib.BlockState FinishDone
    static constexpr const int FinishDone = 3;
    // Get static field: static public Ionic.Zlib.BlockState FinishDone
    static ::Ionic::Zlib::BlockState _get_FinishDone();
    // Set static field: static public Ionic.Zlib.BlockState FinishDone
    static void _set_FinishDone(::Ionic::Zlib::BlockState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Ionic.Zlib.BlockState
  #pragma pack(pop)
  static check_size<sizeof(BlockState), 0 + sizeof(int)> __Ionic_Zlib_BlockStateSizeCheck;
  static_assert(sizeof(BlockState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
