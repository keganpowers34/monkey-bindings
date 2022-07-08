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
// Type namespace: Unity.Jobs.LowLevel.Unsafe
namespace Unity::Jobs::LowLevel::Unsafe {
  // Forward declaring type: JobType
  struct JobType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::LowLevel::Unsafe::JobType, "Unity.Jobs.LowLevel.Unsafe", "JobType");
// Type namespace: Unity.Jobs.LowLevel.Unsafe
namespace Unity::Jobs::LowLevel::Unsafe {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Jobs.LowLevel.Unsafe.JobType
  // [TokenAttribute] Offset: FFFFFFFF
  struct JobType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: JobType
    constexpr JobType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Unity.Jobs.LowLevel.Unsafe.JobType Single
    static constexpr const int Single = 0;
    // Get static field: static public Unity.Jobs.LowLevel.Unsafe.JobType Single
    static ::Unity::Jobs::LowLevel::Unsafe::JobType _get_Single();
    // Set static field: static public Unity.Jobs.LowLevel.Unsafe.JobType Single
    static void _set_Single(::Unity::Jobs::LowLevel::Unsafe::JobType value);
    // static field const value: static public Unity.Jobs.LowLevel.Unsafe.JobType ParallelFor
    static constexpr const int ParallelFor = 1;
    // Get static field: static public Unity.Jobs.LowLevel.Unsafe.JobType ParallelFor
    static ::Unity::Jobs::LowLevel::Unsafe::JobType _get_ParallelFor();
    // Set static field: static public Unity.Jobs.LowLevel.Unsafe.JobType ParallelFor
    static void _set_ParallelFor(::Unity::Jobs::LowLevel::Unsafe::JobType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Unity.Jobs.LowLevel.Unsafe.JobType
  #pragma pack(pop)
  static check_size<sizeof(JobType), 0 + sizeof(int)> __Unity_Jobs_LowLevel_Unsafe_JobTypeSizeCheck;
  static_assert(sizeof(JobType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
