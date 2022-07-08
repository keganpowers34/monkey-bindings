// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: LocomotionTeleport/States
#include "GlobalNamespace/LocomotionTeleport.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: LocomotionTeleport because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`4<T1, T2, T3, T4>
  template<typename T1, typename T2, typename T3, typename T4>
  class Action_4;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TeleportDestination
  class TeleportDestination;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TeleportDestination);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TeleportDestination*, "", "TeleportDestination");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: TeleportDestination
  // [TokenAttribute] Offset: FFFFFFFF
  class TeleportDestination : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [CompilerGeneratedAttribute] Offset: 0xAF2A40
    // private System.Boolean <IsValidDestination>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool IsValidDestination;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsValidDestination and: PositionIndicator
    char __padding0[0x7] = {};
    // [TooltipAttribute] Offset: 0xAF2A50
    // public UnityEngine.Transform PositionIndicator
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* PositionIndicator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xAF2A88
    // public UnityEngine.Transform OrientationIndicator
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* OrientationIndicator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xAF2AC0
    // public UnityEngine.Quaternion LandingRotation
    // Size: 0x10
    // Offset: 0x30
    ::UnityEngine::Quaternion LandingRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public LocomotionTeleport LocomotionTeleport
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::LocomotionTeleport* LocomotionTeleport;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LocomotionTeleport*) == 0x8);
    // public LocomotionTeleport/States TeleportState
    // Size: 0x4
    // Offset: 0x48
    ::GlobalNamespace::LocomotionTeleport::States TeleportState;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LocomotionTeleport::States) == 0x4);
    // Padding between fields: TeleportState and: updateTeleportDestinationAction
    char __padding5[0x4] = {};
    // private readonly System.Action`4<System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Quaternion>,System.Nullable`1<UnityEngine.Quaternion>> _updateTeleportDestinationAction
    // Size: 0x8
    // Offset: 0x50
    ::System::Action_4<bool, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::UnityEngine::Quaternion>>* updateTeleportDestinationAction;
    // Field size check
    static_assert(sizeof(::System::Action_4<bool, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::UnityEngine::Quaternion>>*) == 0x8);
    // private System.Boolean _eventsActive
    // Size: 0x1
    // Offset: 0x58
    bool eventsActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: eventsActive and: Deactivated
    char __padding7[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xAF2AF8
    // private System.Action`1<TeleportDestination> Deactivated
    // Size: 0x8
    // Offset: 0x60
    ::System::Action_1<::GlobalNamespace::TeleportDestination*>* Deactivated;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::TeleportDestination*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean <IsValidDestination>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsValidDestination$k__BackingField();
    // Get instance field reference: public UnityEngine.Transform PositionIndicator
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_PositionIndicator();
    // Get instance field reference: public UnityEngine.Transform OrientationIndicator
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_OrientationIndicator();
    // Get instance field reference: public UnityEngine.Quaternion LandingRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_LandingRotation();
    // Get instance field reference: public LocomotionTeleport LocomotionTeleport
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LocomotionTeleport*& dyn_LocomotionTeleport();
    // Get instance field reference: public LocomotionTeleport/States TeleportState
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LocomotionTeleport::States& dyn_TeleportState();
    // Get instance field reference: private readonly System.Action`4<System.Boolean,System.Nullable`1<UnityEngine.Vector3>,System.Nullable`1<UnityEngine.Quaternion>,System.Nullable`1<UnityEngine.Quaternion>> _updateTeleportDestinationAction
    [[deprecated("Use field access instead!")]] ::System::Action_4<bool, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::UnityEngine::Quaternion>>*& dyn__updateTeleportDestinationAction();
    // Get instance field reference: private System.Boolean _eventsActive
    [[deprecated("Use field access instead!")]] bool& dyn__eventsActive();
    // Get instance field reference: private System.Action`1<TeleportDestination> Deactivated
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::TeleportDestination*>*& dyn_Deactivated();
    // public System.Boolean get_IsValidDestination()
    // Offset: 0x1BA11C8
    bool get_IsValidDestination();
    // private System.Void set_IsValidDestination(System.Boolean value)
    // Offset: 0x1BA11D0
    void set_IsValidDestination(bool value);
    // private System.Void .ctor()
    // Offset: 0x1BA11DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeleportDestination* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TeleportDestination::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeleportDestination*, creationType>()));
    }
    // public System.Void OnEnable()
    // Offset: 0x1BA1264
    void OnEnable();
    // private System.Void TryDisableEventHandlers()
    // Offset: 0x1BA133C
    void TryDisableEventHandlers();
    // public System.Void OnDisable()
    // Offset: 0x1BA137C
    void OnDisable();
    // public System.Void add_Deactivated(System.Action`1<TeleportDestination> value)
    // Offset: 0x1BA1380
    void add_Deactivated(::System::Action_1<::GlobalNamespace::TeleportDestination*>* value);
    // public System.Void remove_Deactivated(System.Action`1<TeleportDestination> value)
    // Offset: 0x1BA1424
    void remove_Deactivated(::System::Action_1<::GlobalNamespace::TeleportDestination*>* value);
    // public System.Void OnDeactivated()
    // Offset: 0x1BA14C8
    void OnDeactivated();
    // public System.Void Recycle()
    // Offset: 0x1BA1530
    void Recycle();
    // public System.Void UpdateTeleportDestination(System.Boolean isValidDestination, System.Nullable`1<UnityEngine.Vector3> position, System.Nullable`1<UnityEngine.Quaternion> rotation, System.Nullable`1<UnityEngine.Quaternion> landingRotation)
    // Offset: 0x1BA1550
    void UpdateTeleportDestination(bool isValidDestination, ::System::Nullable_1<::UnityEngine::Vector3> position, ::System::Nullable_1<::UnityEngine::Quaternion> rotation, ::System::Nullable_1<::UnityEngine::Quaternion> landingRotation);
  }; // TeleportDestination
  #pragma pack(pop)
  static check_size<sizeof(TeleportDestination), 96 + sizeof(::System::Action_1<::GlobalNamespace::TeleportDestination*>*)> __GlobalNamespace_TeleportDestinationSizeCheck;
  static_assert(sizeof(TeleportDestination) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TeleportDestination::get_IsValidDestination
// Il2CppName: get_IsValidDestination
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::TeleportDestination::*)()>(&GlobalNamespace::TeleportDestination::get_IsValidDestination)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportDestination*), "get_IsValidDestination", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportDestination::set_IsValidDestination
// Il2CppName: set_IsValidDestination
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportDestination::*)(bool)>(&GlobalNamespace::TeleportDestination::set_IsValidDestination)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportDestination*), "set_IsValidDestination", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportDestination::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TeleportDestination::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportDestination::*)()>(&GlobalNamespace::TeleportDestination::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportDestination*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportDestination::TryDisableEventHandlers
// Il2CppName: TryDisableEventHandlers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportDestination::*)()>(&GlobalNamespace::TeleportDestination::TryDisableEventHandlers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportDestination*), "TryDisableEventHandlers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportDestination::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportDestination::*)()>(&GlobalNamespace::TeleportDestination::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportDestination*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportDestination::add_Deactivated
// Il2CppName: add_Deactivated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportDestination::*)(::System::Action_1<::GlobalNamespace::TeleportDestination*>*)>(&GlobalNamespace::TeleportDestination::add_Deactivated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "TeleportDestination")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportDestination*), "add_Deactivated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportDestination::remove_Deactivated
// Il2CppName: remove_Deactivated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportDestination::*)(::System::Action_1<::GlobalNamespace::TeleportDestination*>*)>(&GlobalNamespace::TeleportDestination::remove_Deactivated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "TeleportDestination")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportDestination*), "remove_Deactivated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportDestination::OnDeactivated
// Il2CppName: OnDeactivated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportDestination::*)()>(&GlobalNamespace::TeleportDestination::OnDeactivated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportDestination*), "OnDeactivated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportDestination::Recycle
// Il2CppName: Recycle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportDestination::*)()>(&GlobalNamespace::TeleportDestination::Recycle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportDestination*), "Recycle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportDestination::UpdateTeleportDestination
// Il2CppName: UpdateTeleportDestination
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportDestination::*)(bool, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>, ::System::Nullable_1<::UnityEngine::Quaternion>)>(&GlobalNamespace::TeleportDestination::UpdateTeleportDestination)> {
  static const MethodInfo* get() {
    static auto* isValidDestination = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* position = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    static auto* rotation = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")})->byval_arg;
    static auto* landingRotation = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportDestination*), "UpdateTeleportDestination", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isValidDestination, position, rotation, landingRotation});
  }
};
