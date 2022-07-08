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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BetaChecker
  class BetaChecker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BetaChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BetaChecker*, "", "BetaChecker");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: BetaChecker
  // [TokenAttribute] Offset: FFFFFFFF
  class BetaChecker : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject[] objectsToEnable
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::GameObject*> objectsToEnable;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // public System.Boolean doNotEnable
    // Size: 0x1
    // Offset: 0x20
    bool doNotEnable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.GameObject[] objectsToEnable
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_objectsToEnable();
    // Get instance field reference: public System.Boolean doNotEnable
    [[deprecated("Use field access instead!")]] bool& dyn_doNotEnable();
    // private System.Void Start()
    // Offset: 0x1B5E360
    void Start();
    // private System.Void Update()
    // Offset: 0x1B5E3FC
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1B5E540
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BetaChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BetaChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BetaChecker*, creationType>()));
    }
  }; // BetaChecker
  #pragma pack(pop)
  static check_size<sizeof(BetaChecker), 32 + sizeof(bool)> __GlobalNamespace_BetaCheckerSizeCheck;
  static_assert(sizeof(BetaChecker) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BetaChecker::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BetaChecker::*)()>(&GlobalNamespace::BetaChecker::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BetaChecker*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BetaChecker::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BetaChecker::*)()>(&GlobalNamespace::BetaChecker::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BetaChecker*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BetaChecker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
