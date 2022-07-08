// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: CinemachineTargetGroup
  class CinemachineTargetGroup;
}
// Completed forward declares
// Type namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: GroupWeightManipulator
  class GroupWeightManipulator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::GroupWeightManipulator);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::GroupWeightManipulator*, "Cinemachine", "GroupWeightManipulator");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.GroupWeightManipulator
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: AE617C
  // [ExecuteAlways] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: AE617C
  class GroupWeightManipulator : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [TooltipAttribute] Offset: 0xAEBA2C
    // public System.Single m_Weight0
    // Size: 0x4
    // Offset: 0x18
    float m_Weight0;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAEBA64
    // public System.Single m_Weight1
    // Size: 0x4
    // Offset: 0x1C
    float m_Weight1;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAEBA9C
    // public System.Single m_Weight2
    // Size: 0x4
    // Offset: 0x20
    float m_Weight2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAEBAD4
    // public System.Single m_Weight3
    // Size: 0x4
    // Offset: 0x24
    float m_Weight3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAEBB0C
    // public System.Single m_Weight4
    // Size: 0x4
    // Offset: 0x28
    float m_Weight4;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAEBB44
    // public System.Single m_Weight5
    // Size: 0x4
    // Offset: 0x2C
    float m_Weight5;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAEBB7C
    // public System.Single m_Weight6
    // Size: 0x4
    // Offset: 0x30
    float m_Weight6;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xAEBBB4
    // public System.Single m_Weight7
    // Size: 0x4
    // Offset: 0x34
    float m_Weight7;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private Cinemachine.CinemachineTargetGroup m_group
    // Size: 0x8
    // Offset: 0x38
    ::Cinemachine::CinemachineTargetGroup* m_group;
    // Field size check
    static_assert(sizeof(::Cinemachine::CinemachineTargetGroup*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single m_Weight0
    [[deprecated("Use field access instead!")]] float& dyn_m_Weight0();
    // Get instance field reference: public System.Single m_Weight1
    [[deprecated("Use field access instead!")]] float& dyn_m_Weight1();
    // Get instance field reference: public System.Single m_Weight2
    [[deprecated("Use field access instead!")]] float& dyn_m_Weight2();
    // Get instance field reference: public System.Single m_Weight3
    [[deprecated("Use field access instead!")]] float& dyn_m_Weight3();
    // Get instance field reference: public System.Single m_Weight4
    [[deprecated("Use field access instead!")]] float& dyn_m_Weight4();
    // Get instance field reference: public System.Single m_Weight5
    [[deprecated("Use field access instead!")]] float& dyn_m_Weight5();
    // Get instance field reference: public System.Single m_Weight6
    [[deprecated("Use field access instead!")]] float& dyn_m_Weight6();
    // Get instance field reference: public System.Single m_Weight7
    [[deprecated("Use field access instead!")]] float& dyn_m_Weight7();
    // Get instance field reference: private Cinemachine.CinemachineTargetGroup m_group
    [[deprecated("Use field access instead!")]] ::Cinemachine::CinemachineTargetGroup*& dyn_m_group();
    // private System.Void Start()
    // Offset: 0x138DDB0
    void Start();
    // private System.Void OnValidate()
    // Offset: 0x138DE08
    void OnValidate();
    // private System.Void Update()
    // Offset: 0x138DF14
    void Update();
    // private System.Void UpdateWeights()
    // Offset: 0x138DF9C
    void UpdateWeights();
    // public System.Void .ctor()
    // Offset: 0x138E034
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GroupWeightManipulator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::GroupWeightManipulator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GroupWeightManipulator*, creationType>()));
    }
  }; // Cinemachine.GroupWeightManipulator
  #pragma pack(pop)
  static check_size<sizeof(GroupWeightManipulator), 56 + sizeof(::Cinemachine::CinemachineTargetGroup*)> __Cinemachine_GroupWeightManipulatorSizeCheck;
  static_assert(sizeof(GroupWeightManipulator) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::GroupWeightManipulator::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::GroupWeightManipulator::*)()>(&Cinemachine::GroupWeightManipulator::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::GroupWeightManipulator*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::GroupWeightManipulator::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::GroupWeightManipulator::*)()>(&Cinemachine::GroupWeightManipulator::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::GroupWeightManipulator*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::GroupWeightManipulator::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::GroupWeightManipulator::*)()>(&Cinemachine::GroupWeightManipulator::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::GroupWeightManipulator*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::GroupWeightManipulator::UpdateWeights
// Il2CppName: UpdateWeights
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::GroupWeightManipulator::*)()>(&Cinemachine::GroupWeightManipulator::UpdateWeights)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::GroupWeightManipulator*), "UpdateWeights", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::GroupWeightManipulator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
