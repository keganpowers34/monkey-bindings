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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: ShareMediaStatus
  struct ShareMediaStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::ShareMediaStatus, "Oculus.Platform", "ShareMediaStatus");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.ShareMediaStatus
  // [TokenAttribute] Offset: FFFFFFFF
  struct ShareMediaStatus/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ShareMediaStatus
    constexpr ShareMediaStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0xACC2FC
    // static field const value: static public Oculus.Platform.ShareMediaStatus Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.ShareMediaStatus Unknown
    static ::Oculus::Platform::ShareMediaStatus _get_Unknown();
    // Set static field: static public Oculus.Platform.ShareMediaStatus Unknown
    static void _set_Unknown(::Oculus::Platform::ShareMediaStatus value);
    // [DescriptionAttribute] Offset: 0xACC334
    // static field const value: static public Oculus.Platform.ShareMediaStatus Shared
    static constexpr const int Shared = 1;
    // Get static field: static public Oculus.Platform.ShareMediaStatus Shared
    static ::Oculus::Platform::ShareMediaStatus _get_Shared();
    // Set static field: static public Oculus.Platform.ShareMediaStatus Shared
    static void _set_Shared(::Oculus::Platform::ShareMediaStatus value);
    // [DescriptionAttribute] Offset: 0xACC36C
    // static field const value: static public Oculus.Platform.ShareMediaStatus Canceled
    static constexpr const int Canceled = 2;
    // Get static field: static public Oculus.Platform.ShareMediaStatus Canceled
    static ::Oculus::Platform::ShareMediaStatus _get_Canceled();
    // Set static field: static public Oculus.Platform.ShareMediaStatus Canceled
    static void _set_Canceled(::Oculus::Platform::ShareMediaStatus value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Platform.ShareMediaStatus
  #pragma pack(pop)
  static check_size<sizeof(ShareMediaStatus), 0 + sizeof(int)> __Oculus_Platform_ShareMediaStatusSizeCheck;
  static_assert(sizeof(ShareMediaStatus) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
