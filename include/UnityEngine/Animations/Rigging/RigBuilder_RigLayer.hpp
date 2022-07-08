// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Animations.Rigging.RigBuilder
#include "UnityEngine/Animations/Rigging/RigBuilder.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Animations::Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: Rig
  class Rig;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::Rigging::RigBuilder::RigLayer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::RigBuilder::RigLayer*, "UnityEngine.Animations.Rigging", "RigBuilder/RigLayer");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.Rigging.RigBuilder/RigLayer
  // [TokenAttribute] Offset: FFFFFFFF
  class RigBuilder::RigLayer : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Animations.Rigging.Rig rig
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Animations::Rigging::Rig* rig;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animations::Rigging::Rig*) == 0x8);
    // public System.Boolean active
    // Size: 0x1
    // Offset: 0x18
    bool active;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: active and: data
    char __padding1[0x3] = {};
    // public System.Int32 data
    // Size: 0x4
    // Offset: 0x1C
    int data;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // static field const value: static private System.Int32 k_InvalidDataIndex
    static constexpr const int k_InvalidDataIndex = -1;
    // Get static field: static private System.Int32 k_InvalidDataIndex
    static int _get_k_InvalidDataIndex();
    // Set static field: static private System.Int32 k_InvalidDataIndex
    static void _set_k_InvalidDataIndex(int value);
    // Get instance field reference: public UnityEngine.Animations.Rigging.Rig rig
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animations::Rigging::Rig*& dyn_rig();
    // Get instance field reference: public System.Boolean active
    [[deprecated("Use field access instead!")]] bool& dyn_active();
    // Get instance field reference: public System.Int32 data
    [[deprecated("Use field access instead!")]] int& dyn_data();
    // public System.Void .ctor(UnityEngine.Animations.Rigging.Rig rig, System.Boolean active)
    // Offset: 0x1164254
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RigBuilder::RigLayer* New_ctor(::UnityEngine::Animations::Rigging::Rig* rig, bool active) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Animations::Rigging::RigBuilder::RigLayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RigBuilder::RigLayer*, creationType>(rig, active)));
    }
    // public System.Void Reset()
    // Offset: 0x1163654
    void Reset();
    // public System.Boolean Initialize(UnityEngine.Animator animator)
    // Offset: 0x1162F94
    bool Initialize(::UnityEngine::Animator* animator);
    // public System.Boolean IsValid()
    // Offset: 0x1162F08
    bool IsValid();
  }; // UnityEngine.Animations.Rigging.RigBuilder/RigLayer
  #pragma pack(pop)
  static check_size<sizeof(RigBuilder::RigLayer), 28 + sizeof(int)> __UnityEngine_Animations_Rigging_RigBuilder_RigLayerSizeCheck;
  static_assert(sizeof(RigBuilder::RigLayer) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::RigBuilder::RigLayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::RigBuilder::RigLayer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::RigBuilder::RigLayer::*)()>(&UnityEngine::Animations::Rigging::RigBuilder::RigLayer::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::RigBuilder::RigLayer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::RigBuilder::RigLayer::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::RigBuilder::RigLayer::*)(::UnityEngine::Animator*)>(&UnityEngine::Animations::Rigging::RigBuilder::RigLayer::Initialize)> {
  static const MethodInfo* get() {
    static auto* animator = &::il2cpp_utils::GetClassFromName("UnityEngine", "Animator")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::RigBuilder::RigLayer*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{animator});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::RigBuilder::RigLayer::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::RigBuilder::RigLayer::*)()>(&UnityEngine::Animations::Rigging::RigBuilder::RigLayer::IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::RigBuilder::RigLayer*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
