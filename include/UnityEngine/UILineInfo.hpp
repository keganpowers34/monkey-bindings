// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: UILineInfo
  struct UILineInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UILineInfo, "UnityEngine", "UILineInfo");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UILineInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: A7D4D4
  struct UILineInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 startCharIdx
    // Size: 0x4
    // Offset: 0x0
    int startCharIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 height
    // Size: 0x4
    // Offset: 0x4
    int height;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single topY
    // Size: 0x4
    // Offset: 0x8
    float topY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single leading
    // Size: 0x4
    // Offset: 0xC
    float leading;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: UILineInfo
    constexpr UILineInfo(int startCharIdx_ = {}, int height_ = {}, float topY_ = {}, float leading_ = {}) noexcept : startCharIdx{startCharIdx_}, height{height_}, topY{topY_}, leading{leading_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 startCharIdx
    [[deprecated("Use field access instead!")]] int& dyn_startCharIdx();
    // Get instance field reference: public System.Int32 height
    [[deprecated("Use field access instead!")]] int& dyn_height();
    // Get instance field reference: public System.Single topY
    [[deprecated("Use field access instead!")]] float& dyn_topY();
    // Get instance field reference: public System.Single leading
    [[deprecated("Use field access instead!")]] float& dyn_leading();
  }; // UnityEngine.UILineInfo
  #pragma pack(pop)
  static check_size<sizeof(UILineInfo), 12 + sizeof(float)> __UnityEngine_UILineInfoSizeCheck;
  static_assert(sizeof(UILineInfo) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
