// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.CinemachineBrain
#include "Cinemachine/CinemachineBrain.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: CinemachineBlend
  class CinemachineBlend;
  // Forward declaring type: BlendSourceVirtualCamera
  class BlendSourceVirtualCamera;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachineBrain::BrainFrame);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineBrain::BrainFrame*, "Cinemachine", "CinemachineBrain/BrainFrame");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachineBrain/BrainFrame
  // [TokenAttribute] Offset: FFFFFFFF
  class CinemachineBrain::BrainFrame : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 id
    // Size: 0x4
    // Offset: 0x10
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: id and: blend
    char __padding0[0x4] = {};
    // public Cinemachine.CinemachineBlend blend
    // Size: 0x8
    // Offset: 0x18
    ::Cinemachine::CinemachineBlend* blend;
    // Field size check
    static_assert(sizeof(::Cinemachine::CinemachineBlend*) == 0x8);
    // public Cinemachine.CinemachineBlend workingBlend
    // Size: 0x8
    // Offset: 0x20
    ::Cinemachine::CinemachineBlend* workingBlend;
    // Field size check
    static_assert(sizeof(::Cinemachine::CinemachineBlend*) == 0x8);
    // public Cinemachine.BlendSourceVirtualCamera workingBlendSource
    // Size: 0x8
    // Offset: 0x28
    ::Cinemachine::BlendSourceVirtualCamera* workingBlendSource;
    // Field size check
    static_assert(sizeof(::Cinemachine::BlendSourceVirtualCamera*) == 0x8);
    // public System.Single deltaTimeOverride
    // Size: 0x4
    // Offset: 0x30
    float deltaTimeOverride;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Int32 id
    [[deprecated("Use field access instead!")]] int& dyn_id();
    // Get instance field reference: public Cinemachine.CinemachineBlend blend
    [[deprecated("Use field access instead!")]] ::Cinemachine::CinemachineBlend*& dyn_blend();
    // Get instance field reference: public Cinemachine.CinemachineBlend workingBlend
    [[deprecated("Use field access instead!")]] ::Cinemachine::CinemachineBlend*& dyn_workingBlend();
    // Get instance field reference: public Cinemachine.BlendSourceVirtualCamera workingBlendSource
    [[deprecated("Use field access instead!")]] ::Cinemachine::BlendSourceVirtualCamera*& dyn_workingBlendSource();
    // Get instance field reference: public System.Single deltaTimeOverride
    [[deprecated("Use field access instead!")]] float& dyn_deltaTimeOverride();
    // public System.Boolean get_Active()
    // Offset: 0x1345F80
    bool get_Active();
    // public System.Void .ctor()
    // Offset: 0x13441C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineBrain::BrainFrame* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineBrain::BrainFrame::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineBrain::BrainFrame*, creationType>()));
    }
  }; // Cinemachine.CinemachineBrain/BrainFrame
  #pragma pack(pop)
  static check_size<sizeof(CinemachineBrain::BrainFrame), 48 + sizeof(float)> __Cinemachine_CinemachineBrain_BrainFrameSizeCheck;
  static_assert(sizeof(CinemachineBrain::BrainFrame) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachineBrain::BrainFrame::get_Active
// Il2CppName: get_Active
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Cinemachine::CinemachineBrain::BrainFrame::*)()>(&Cinemachine::CinemachineBrain::BrainFrame::get_Active)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineBrain::BrainFrame*), "get_Active", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineBrain::BrainFrame::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
