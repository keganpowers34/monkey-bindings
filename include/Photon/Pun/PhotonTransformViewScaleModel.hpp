// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonTransformViewScaleModel
  class PhotonTransformViewScaleModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::PhotonTransformViewScaleModel);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonTransformViewScaleModel*, "Photon.Pun", "PhotonTransformViewScaleModel");
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.PhotonTransformViewScaleModel
  // [TokenAttribute] Offset: FFFFFFFF
  class PhotonTransformViewScaleModel : public ::Il2CppObject {
    public:
    // Nested type: ::Photon::Pun::PhotonTransformViewScaleModel::InterpolateOptions
    struct InterpolateOptions;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Photon.Pun.PhotonTransformViewScaleModel/InterpolateOptions
    // [TokenAttribute] Offset: FFFFFFFF
    struct InterpolateOptions/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: InterpolateOptions
      constexpr InterpolateOptions(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Photon.Pun.PhotonTransformViewScaleModel/InterpolateOptions Disabled
      static constexpr const int Disabled = 0;
      // Get static field: static public Photon.Pun.PhotonTransformViewScaleModel/InterpolateOptions Disabled
      static ::Photon::Pun::PhotonTransformViewScaleModel::InterpolateOptions _get_Disabled();
      // Set static field: static public Photon.Pun.PhotonTransformViewScaleModel/InterpolateOptions Disabled
      static void _set_Disabled(::Photon::Pun::PhotonTransformViewScaleModel::InterpolateOptions value);
      // static field const value: static public Photon.Pun.PhotonTransformViewScaleModel/InterpolateOptions MoveTowards
      static constexpr const int MoveTowards = 1;
      // Get static field: static public Photon.Pun.PhotonTransformViewScaleModel/InterpolateOptions MoveTowards
      static ::Photon::Pun::PhotonTransformViewScaleModel::InterpolateOptions _get_MoveTowards();
      // Set static field: static public Photon.Pun.PhotonTransformViewScaleModel/InterpolateOptions MoveTowards
      static void _set_MoveTowards(::Photon::Pun::PhotonTransformViewScaleModel::InterpolateOptions value);
      // static field const value: static public Photon.Pun.PhotonTransformViewScaleModel/InterpolateOptions Lerp
      static constexpr const int Lerp = 2;
      // Get static field: static public Photon.Pun.PhotonTransformViewScaleModel/InterpolateOptions Lerp
      static ::Photon::Pun::PhotonTransformViewScaleModel::InterpolateOptions _get_Lerp();
      // Set static field: static public Photon.Pun.PhotonTransformViewScaleModel/InterpolateOptions Lerp
      static void _set_Lerp(::Photon::Pun::PhotonTransformViewScaleModel::InterpolateOptions value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Photon.Pun.PhotonTransformViewScaleModel/InterpolateOptions
    #pragma pack(pop)
    static check_size<sizeof(PhotonTransformViewScaleModel::InterpolateOptions), 0 + sizeof(int)> __Photon_Pun_PhotonTransformViewScaleModel_InterpolateOptionsSizeCheck;
    static_assert(sizeof(PhotonTransformViewScaleModel::InterpolateOptions) == 0x4);
    public:
    // public System.Boolean SynchronizeEnabled
    // Size: 0x1
    // Offset: 0x10
    bool SynchronizeEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: SynchronizeEnabled and: InterpolateOption
    char __padding0[0x3] = {};
    // public Photon.Pun.PhotonTransformViewScaleModel/InterpolateOptions InterpolateOption
    // Size: 0x4
    // Offset: 0x14
    ::Photon::Pun::PhotonTransformViewScaleModel::InterpolateOptions InterpolateOption;
    // Field size check
    static_assert(sizeof(::Photon::Pun::PhotonTransformViewScaleModel::InterpolateOptions) == 0x4);
    // public System.Single InterpolateMoveTowardsSpeed
    // Size: 0x4
    // Offset: 0x18
    float InterpolateMoveTowardsSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single InterpolateLerpSpeed
    // Size: 0x4
    // Offset: 0x1C
    float InterpolateLerpSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Boolean SynchronizeEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_SynchronizeEnabled();
    // Get instance field reference: public Photon.Pun.PhotonTransformViewScaleModel/InterpolateOptions InterpolateOption
    [[deprecated("Use field access instead!")]] ::Photon::Pun::PhotonTransformViewScaleModel::InterpolateOptions& dyn_InterpolateOption();
    // Get instance field reference: public System.Single InterpolateMoveTowardsSpeed
    [[deprecated("Use field access instead!")]] float& dyn_InterpolateMoveTowardsSpeed();
    // Get instance field reference: public System.Single InterpolateLerpSpeed
    [[deprecated("Use field access instead!")]] float& dyn_InterpolateLerpSpeed();
    // public System.Void .ctor()
    // Offset: 0x1AC1C64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhotonTransformViewScaleModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::PhotonTransformViewScaleModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhotonTransformViewScaleModel*, creationType>()));
    }
  }; // Photon.Pun.PhotonTransformViewScaleModel
  #pragma pack(pop)
  static check_size<sizeof(PhotonTransformViewScaleModel), 28 + sizeof(float)> __Photon_Pun_PhotonTransformViewScaleModelSizeCheck;
  static_assert(sizeof(PhotonTransformViewScaleModel) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonTransformViewScaleModel::InterpolateOptions, "Photon.Pun", "PhotonTransformViewScaleModel/InterpolateOptions");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::PhotonTransformViewScaleModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
