// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: VREvent_Mouse_t
  struct VREvent_Mouse_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Mouse_t, "OVR.OpenVR", "VREvent_Mouse_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VREvent_Mouse_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_Mouse_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single x
    // Size: 0x4
    // Offset: 0x0
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x4
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.UInt32 button
    // Size: 0x4
    // Offset: 0x8
    uint button;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: VREvent_Mouse_t
    constexpr VREvent_Mouse_t(float x_ = {}, float y_ = {}, uint button_ = {}) noexcept : x{x_}, y{y_}, button{button_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single x
    [[deprecated("Use field access instead!")]] float& dyn_x();
    // Get instance field reference: public System.Single y
    [[deprecated("Use field access instead!")]] float& dyn_y();
    // Get instance field reference: public System.UInt32 button
    [[deprecated("Use field access instead!")]] uint& dyn_button();
  }; // OVR.OpenVR.VREvent_Mouse_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_Mouse_t), 8 + sizeof(uint)> __OVR_OpenVR_VREvent_Mouse_tSizeCheck;
  static_assert(sizeof(VREvent_Mouse_t) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
