// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Collections.LowLevel.Unsafe.UnsafeUtility
#include "Unity/Collections/LowLevel/Unsafe/UnsafeUtility.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::AlignOfHelper_1, "Unity.Collections.LowLevel.Unsafe", "UnsafeUtility/AlignOfHelper`1");
// Type namespace: Unity.Collections.LowLevel.Unsafe
namespace Unity::Collections::LowLevel::Unsafe {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  struct UnsafeUtility::AlignOfHelper_1/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Byte dummy
    // Size: 0x1
    // Offset: 0x0
    uint8_t dummy;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public T data
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T data;
    public:
    // Creating value type constructor for type: AlignOfHelper_1
    constexpr AlignOfHelper_1(uint8_t dummy_ = {}, T data_ = {}) noexcept : dummy{dummy_}, data{data_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Byte dummy
    [[deprecated("Use field access instead!")]] uint8_t& dyn_dummy() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::AlignOfHelper_1::dyn_dummy");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "dummy"))->offset;
      return *reinterpret_cast<uint8_t*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public T data
    [[deprecated("Use field access instead!")]] T& dyn_data() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::AlignOfHelper_1::dyn_data");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "data"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
  }; // Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1
  // Could not write size check! Type: Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
