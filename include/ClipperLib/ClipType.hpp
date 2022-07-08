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
// Type namespace: ClipperLib
namespace ClipperLib {
  // Forward declaring type: ClipType
  struct ClipType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::ClipperLib::ClipType, "ClipperLib", "ClipType");
// Type namespace: ClipperLib
namespace ClipperLib {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: ClipperLib.ClipType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ClipType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ClipType
    constexpr ClipType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public ClipperLib.ClipType ctIntersection
    static constexpr const int ctIntersection = 0;
    // Get static field: static public ClipperLib.ClipType ctIntersection
    static ::ClipperLib::ClipType _get_ctIntersection();
    // Set static field: static public ClipperLib.ClipType ctIntersection
    static void _set_ctIntersection(::ClipperLib::ClipType value);
    // static field const value: static public ClipperLib.ClipType ctUnion
    static constexpr const int ctUnion = 1;
    // Get static field: static public ClipperLib.ClipType ctUnion
    static ::ClipperLib::ClipType _get_ctUnion();
    // Set static field: static public ClipperLib.ClipType ctUnion
    static void _set_ctUnion(::ClipperLib::ClipType value);
    // static field const value: static public ClipperLib.ClipType ctDifference
    static constexpr const int ctDifference = 2;
    // Get static field: static public ClipperLib.ClipType ctDifference
    static ::ClipperLib::ClipType _get_ctDifference();
    // Set static field: static public ClipperLib.ClipType ctDifference
    static void _set_ctDifference(::ClipperLib::ClipType value);
    // static field const value: static public ClipperLib.ClipType ctXor
    static constexpr const int ctXor = 3;
    // Get static field: static public ClipperLib.ClipType ctXor
    static ::ClipperLib::ClipType _get_ctXor();
    // Set static field: static public ClipperLib.ClipType ctXor
    static void _set_ctXor(::ClipperLib::ClipType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // ClipperLib.ClipType
  #pragma pack(pop)
  static check_size<sizeof(ClipType), 0 + sizeof(int)> __ClipperLib_ClipTypeSizeCheck;
  static_assert(sizeof(ClipType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
