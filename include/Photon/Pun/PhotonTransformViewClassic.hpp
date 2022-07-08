// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Pun.MonoBehaviourPun
#include "Photon/Pun/MonoBehaviourPun.hpp"
// Including type: Photon.Pun.IPunObservable
#include "Photon/Pun/IPunObservable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonTransformViewPositionModel
  class PhotonTransformViewPositionModel;
  // Forward declaring type: PhotonTransformViewRotationModel
  class PhotonTransformViewRotationModel;
  // Forward declaring type: PhotonTransformViewScaleModel
  class PhotonTransformViewScaleModel;
  // Forward declaring type: PhotonTransformViewPositionControl
  class PhotonTransformViewPositionControl;
  // Forward declaring type: PhotonTransformViewRotationControl
  class PhotonTransformViewRotationControl;
  // Forward declaring type: PhotonTransformViewScaleControl
  class PhotonTransformViewScaleControl;
  // Forward declaring type: PhotonView
  class PhotonView;
  // Forward declaring type: PhotonStream
  class PhotonStream;
  // Forward declaring type: PhotonMessageInfo
  struct PhotonMessageInfo;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonTransformViewClassic
  class PhotonTransformViewClassic;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::PhotonTransformViewClassic);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonTransformViewClassic*, "Photon.Pun", "PhotonTransformViewClassic");
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Size: 0x5A
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.PhotonTransformViewClassic
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: AB4864
  class PhotonTransformViewClassic : public ::Photon::Pun::MonoBehaviourPun/*, public ::Photon::Pun::IPunObservable*/ {
    public:
    public:
    // public Photon.Pun.PhotonTransformViewPositionModel m_PositionModel
    // Size: 0x8
    // Offset: 0x20
    ::Photon::Pun::PhotonTransformViewPositionModel* m_PositionModel;
    // Field size check
    static_assert(sizeof(::Photon::Pun::PhotonTransformViewPositionModel*) == 0x8);
    // public Photon.Pun.PhotonTransformViewRotationModel m_RotationModel
    // Size: 0x8
    // Offset: 0x28
    ::Photon::Pun::PhotonTransformViewRotationModel* m_RotationModel;
    // Field size check
    static_assert(sizeof(::Photon::Pun::PhotonTransformViewRotationModel*) == 0x8);
    // public Photon.Pun.PhotonTransformViewScaleModel m_ScaleModel
    // Size: 0x8
    // Offset: 0x30
    ::Photon::Pun::PhotonTransformViewScaleModel* m_ScaleModel;
    // Field size check
    static_assert(sizeof(::Photon::Pun::PhotonTransformViewScaleModel*) == 0x8);
    // private Photon.Pun.PhotonTransformViewPositionControl m_PositionControl
    // Size: 0x8
    // Offset: 0x38
    ::Photon::Pun::PhotonTransformViewPositionControl* m_PositionControl;
    // Field size check
    static_assert(sizeof(::Photon::Pun::PhotonTransformViewPositionControl*) == 0x8);
    // private Photon.Pun.PhotonTransformViewRotationControl m_RotationControl
    // Size: 0x8
    // Offset: 0x40
    ::Photon::Pun::PhotonTransformViewRotationControl* m_RotationControl;
    // Field size check
    static_assert(sizeof(::Photon::Pun::PhotonTransformViewRotationControl*) == 0x8);
    // private Photon.Pun.PhotonTransformViewScaleControl m_ScaleControl
    // Size: 0x8
    // Offset: 0x48
    ::Photon::Pun::PhotonTransformViewScaleControl* m_ScaleControl;
    // Field size check
    static_assert(sizeof(::Photon::Pun::PhotonTransformViewScaleControl*) == 0x8);
    // private Photon.Pun.PhotonView m_PhotonView
    // Size: 0x8
    // Offset: 0x50
    ::Photon::Pun::PhotonView* m_PhotonView;
    // Field size check
    static_assert(sizeof(::Photon::Pun::PhotonView*) == 0x8);
    // private System.Boolean m_ReceivedNetworkUpdate
    // Size: 0x1
    // Offset: 0x58
    bool m_ReceivedNetworkUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_firstTake
    // Size: 0x1
    // Offset: 0x59
    bool m_firstTake;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Photon::Pun::IPunObservable
    operator ::Photon::Pun::IPunObservable() noexcept {
      return *reinterpret_cast<::Photon::Pun::IPunObservable*>(this);
    }
    // Get instance field reference: public Photon.Pun.PhotonTransformViewPositionModel m_PositionModel
    [[deprecated("Use field access instead!")]] ::Photon::Pun::PhotonTransformViewPositionModel*& dyn_m_PositionModel();
    // Get instance field reference: public Photon.Pun.PhotonTransformViewRotationModel m_RotationModel
    [[deprecated("Use field access instead!")]] ::Photon::Pun::PhotonTransformViewRotationModel*& dyn_m_RotationModel();
    // Get instance field reference: public Photon.Pun.PhotonTransformViewScaleModel m_ScaleModel
    [[deprecated("Use field access instead!")]] ::Photon::Pun::PhotonTransformViewScaleModel*& dyn_m_ScaleModel();
    // Get instance field reference: private Photon.Pun.PhotonTransformViewPositionControl m_PositionControl
    [[deprecated("Use field access instead!")]] ::Photon::Pun::PhotonTransformViewPositionControl*& dyn_m_PositionControl();
    // Get instance field reference: private Photon.Pun.PhotonTransformViewRotationControl m_RotationControl
    [[deprecated("Use field access instead!")]] ::Photon::Pun::PhotonTransformViewRotationControl*& dyn_m_RotationControl();
    // Get instance field reference: private Photon.Pun.PhotonTransformViewScaleControl m_ScaleControl
    [[deprecated("Use field access instead!")]] ::Photon::Pun::PhotonTransformViewScaleControl*& dyn_m_ScaleControl();
    // Get instance field reference: private Photon.Pun.PhotonView m_PhotonView
    [[deprecated("Use field access instead!")]] ::Photon::Pun::PhotonView*& dyn_m_PhotonView();
    // Get instance field reference: private System.Boolean m_ReceivedNetworkUpdate
    [[deprecated("Use field access instead!")]] bool& dyn_m_ReceivedNetworkUpdate();
    // Get instance field reference: private System.Boolean m_firstTake
    [[deprecated("Use field access instead!")]] bool& dyn_m_firstTake();
    // private System.Void Awake()
    // Offset: 0x1AC0B08
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x1AC0D4C
    void OnEnable();
    // private System.Void Update()
    // Offset: 0x1AC0D58
    void Update();
    // private System.Void UpdatePosition()
    // Offset: 0x1AC0E30
    void UpdatePosition();
    // private System.Void UpdateRotation()
    // Offset: 0x1AC0EC4
    void UpdateRotation();
    // private System.Void UpdateScale()
    // Offset: 0x1AC0F58
    void UpdateScale();
    // public System.Void SetSynchronizedValues(UnityEngine.Vector3 speed, System.Single turnSpeed)
    // Offset: 0x1AC1654
    void SetSynchronizedValues(::UnityEngine::Vector3 speed, float turnSpeed);
    // public System.Void OnPhotonSerializeView(Photon.Pun.PhotonStream stream, Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x1AC1680
    void OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);
    // public System.Void .ctor()
    // Offset: 0x1AC1B24
    // Implemented from: Photon.Pun.MonoBehaviourPun
    // Base method: System.Void MonoBehaviourPun::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhotonTransformViewClassic* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::PhotonTransformViewClassic::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhotonTransformViewClassic*, creationType>()));
    }
  }; // Photon.Pun.PhotonTransformViewClassic
  #pragma pack(pop)
  static check_size<sizeof(PhotonTransformViewClassic), 89 + sizeof(bool)> __Photon_Pun_PhotonTransformViewClassicSizeCheck;
  static_assert(sizeof(PhotonTransformViewClassic) == 0x5A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::PhotonTransformViewClassic::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonTransformViewClassic::*)()>(&Photon::Pun::PhotonTransformViewClassic::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonTransformViewClassic*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonTransformViewClassic::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonTransformViewClassic::*)()>(&Photon::Pun::PhotonTransformViewClassic::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonTransformViewClassic*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonTransformViewClassic::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonTransformViewClassic::*)()>(&Photon::Pun::PhotonTransformViewClassic::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonTransformViewClassic*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonTransformViewClassic::UpdatePosition
// Il2CppName: UpdatePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonTransformViewClassic::*)()>(&Photon::Pun::PhotonTransformViewClassic::UpdatePosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonTransformViewClassic*), "UpdatePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonTransformViewClassic::UpdateRotation
// Il2CppName: UpdateRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonTransformViewClassic::*)()>(&Photon::Pun::PhotonTransformViewClassic::UpdateRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonTransformViewClassic*), "UpdateRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonTransformViewClassic::UpdateScale
// Il2CppName: UpdateScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonTransformViewClassic::*)()>(&Photon::Pun::PhotonTransformViewClassic::UpdateScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonTransformViewClassic*), "UpdateScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonTransformViewClassic::SetSynchronizedValues
// Il2CppName: SetSynchronizedValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonTransformViewClassic::*)(::UnityEngine::Vector3, float)>(&Photon::Pun::PhotonTransformViewClassic::SetSynchronizedValues)> {
  static const MethodInfo* get() {
    static auto* speed = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* turnSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonTransformViewClassic*), "SetSynchronizedValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{speed, turnSpeed});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonTransformViewClassic::OnPhotonSerializeView
// Il2CppName: OnPhotonSerializeView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Pun::PhotonTransformViewClassic::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&Photon::Pun::PhotonTransformViewClassic::OnPhotonSerializeView)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonStream")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::PhotonTransformViewClassic*), "OnPhotonSerializeView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, info});
  }
};
// Writing MetadataGetter for method: Photon::Pun::PhotonTransformViewClassic::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
