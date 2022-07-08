// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.ShrinkablePolygon
#include "Cinemachine/ShrinkablePolygon.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::ShrinkablePolygon::AspectData, "Cinemachine", "ShrinkablePolygon/AspectData");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Cinemachine.ShrinkablePolygon/AspectData
  // [TokenAttribute] Offset: FFFFFFFF
  struct ShrinkablePolygon::AspectData/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single m_AspectRatio
    // Size: 0x4
    // Offset: 0x0
    float m_AspectRatio;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_AspectRatioBasedDiagonal
    // Size: 0x4
    // Offset: 0x4
    float m_AspectRatioBasedDiagonal;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector2[] m_NormalDirections
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<::UnityEngine::Vector2> m_NormalDirections;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector2>) == 0x8);
    public:
    // Creating value type constructor for type: AspectData
    constexpr AspectData(float m_AspectRatio_ = {}, float m_AspectRatioBasedDiagonal_ = {}, ::ArrayW<::UnityEngine::Vector2> m_NormalDirections_ = ::ArrayW<::UnityEngine::Vector2>(static_cast<void*>(nullptr))) noexcept : m_AspectRatio{m_AspectRatio_}, m_AspectRatioBasedDiagonal{m_AspectRatioBasedDiagonal_}, m_NormalDirections{m_NormalDirections_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single m_AspectRatio
    [[deprecated("Use field access instead!")]] float& dyn_m_AspectRatio();
    // Get instance field reference: public System.Single m_AspectRatioBasedDiagonal
    [[deprecated("Use field access instead!")]] float& dyn_m_AspectRatioBasedDiagonal();
    // Get instance field reference: public UnityEngine.Vector2[] m_NormalDirections
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector2>& dyn_m_NormalDirections();
    // public System.Void .ctor(System.Single aspectRatio)
    // Offset: 0x9B1EE4
    AspectData(float aspectRatio);
  }; // Cinemachine.ShrinkablePolygon/AspectData
  #pragma pack(pop)
  static check_size<sizeof(ShrinkablePolygon::AspectData), 8 + sizeof(::ArrayW<::UnityEngine::Vector2>)> __Cinemachine_ShrinkablePolygon_AspectDataSizeCheck;
  static_assert(sizeof(ShrinkablePolygon::AspectData) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::ShrinkablePolygon::AspectData::AspectData
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
