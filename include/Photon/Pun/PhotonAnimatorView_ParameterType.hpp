// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.PhotonAnimatorView
#include "Photon/Pun/PhotonAnimatorView.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonAnimatorView::ParameterType, "Photon.Pun", "PhotonAnimatorView/ParameterType");
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.PhotonAnimatorView/ParameterType
  // [TokenAttribute] Offset: FFFFFFFF
  struct PhotonAnimatorView::ParameterType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ParameterType
    constexpr ParameterType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Photon.Pun.PhotonAnimatorView/ParameterType Float
    static constexpr const int Float = 1;
    // Get static field: static public Photon.Pun.PhotonAnimatorView/ParameterType Float
    static ::Photon::Pun::PhotonAnimatorView::ParameterType _get_Float();
    // Set static field: static public Photon.Pun.PhotonAnimatorView/ParameterType Float
    static void _set_Float(::Photon::Pun::PhotonAnimatorView::ParameterType value);
    // static field const value: static public Photon.Pun.PhotonAnimatorView/ParameterType Int
    static constexpr const int Int = 3;
    // Get static field: static public Photon.Pun.PhotonAnimatorView/ParameterType Int
    static ::Photon::Pun::PhotonAnimatorView::ParameterType _get_Int();
    // Set static field: static public Photon.Pun.PhotonAnimatorView/ParameterType Int
    static void _set_Int(::Photon::Pun::PhotonAnimatorView::ParameterType value);
    // static field const value: static public Photon.Pun.PhotonAnimatorView/ParameterType Bool
    static constexpr const int Bool = 4;
    // Get static field: static public Photon.Pun.PhotonAnimatorView/ParameterType Bool
    static ::Photon::Pun::PhotonAnimatorView::ParameterType _get_Bool();
    // Set static field: static public Photon.Pun.PhotonAnimatorView/ParameterType Bool
    static void _set_Bool(::Photon::Pun::PhotonAnimatorView::ParameterType value);
    // static field const value: static public Photon.Pun.PhotonAnimatorView/ParameterType Trigger
    static constexpr const int Trigger = 9;
    // Get static field: static public Photon.Pun.PhotonAnimatorView/ParameterType Trigger
    static ::Photon::Pun::PhotonAnimatorView::ParameterType _get_Trigger();
    // Set static field: static public Photon.Pun.PhotonAnimatorView/ParameterType Trigger
    static void _set_Trigger(::Photon::Pun::PhotonAnimatorView::ParameterType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Photon.Pun.PhotonAnimatorView/ParameterType
  #pragma pack(pop)
  static check_size<sizeof(PhotonAnimatorView::ParameterType), 0 + sizeof(int)> __Photon_Pun_PhotonAnimatorView_ParameterTypeSizeCheck;
  static_assert(sizeof(PhotonAnimatorView::ParameterType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
