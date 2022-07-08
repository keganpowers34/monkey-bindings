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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GorillaCameraSceneTrigger
  class GorillaCameraSceneTrigger;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaCameraTriggerIndex
  class GorillaCameraTriggerIndex;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaCameraTriggerIndex);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaCameraTriggerIndex*, "", "GorillaCameraTriggerIndex");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: GorillaCameraTriggerIndex
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaCameraTriggerIndex : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Int32 sceneTriggerIndex
    // Size: 0x4
    // Offset: 0x18
    int sceneTriggerIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: sceneTriggerIndex and: parentTrigger
    char __padding0[0x4] = {};
    // public GorillaCameraSceneTrigger parentTrigger
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::GorillaCameraSceneTrigger* parentTrigger;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GorillaCameraSceneTrigger*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Int32 sceneTriggerIndex
    [[deprecated("Use field access instead!")]] int& dyn_sceneTriggerIndex();
    // Get instance field reference: public GorillaCameraSceneTrigger parentTrigger
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GorillaCameraSceneTrigger*& dyn_parentTrigger();
    // private System.Void Start()
    // Offset: 0x1B684D4
    void Start();
    // private System.Void OnTriggerEnter(UnityEngine.Collider other)
    // Offset: 0x1B6852C
    void OnTriggerEnter(::UnityEngine::Collider* other);
    // private System.Void OnTriggerExit(UnityEngine.Collider other)
    // Offset: 0x1B685D0
    void OnTriggerExit(::UnityEngine::Collider* other);
    // public System.Void .ctor()
    // Offset: 0x1B68668
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaCameraTriggerIndex* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaCameraTriggerIndex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaCameraTriggerIndex*, creationType>()));
    }
  }; // GorillaCameraTriggerIndex
  #pragma pack(pop)
  static check_size<sizeof(GorillaCameraTriggerIndex), 32 + sizeof(::GlobalNamespace::GorillaCameraSceneTrigger*)> __GlobalNamespace_GorillaCameraTriggerIndexSizeCheck;
  static_assert(sizeof(GorillaCameraTriggerIndex) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaCameraTriggerIndex::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaCameraTriggerIndex::*)()>(&GlobalNamespace::GorillaCameraTriggerIndex::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaCameraTriggerIndex*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaCameraTriggerIndex::OnTriggerEnter
// Il2CppName: OnTriggerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaCameraTriggerIndex::*)(::UnityEngine::Collider*)>(&GlobalNamespace::GorillaCameraTriggerIndex::OnTriggerEnter)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaCameraTriggerIndex*), "OnTriggerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaCameraTriggerIndex::OnTriggerExit
// Il2CppName: OnTriggerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaCameraTriggerIndex::*)(::UnityEngine::Collider*)>(&GlobalNamespace::GorillaCameraTriggerIndex::OnTriggerExit)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaCameraTriggerIndex*), "OnTriggerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaCameraTriggerIndex::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
