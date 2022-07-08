// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_MeshBakerGrouperCore
#include "DigitalOpus/MB/Core/MB3_MeshBakerGrouperCore.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCore::$$c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCore::$$c__DisplayClass3_0*, "DigitalOpus.MB.Core", "MB3_MeshBakerGrouperCore/<>c__DisplayClass3_0");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB3_MeshBakerGrouperCore/<>c__DisplayClass3_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AEE234
  class MB3_MeshBakerGrouperCore::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Renderer r
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Renderer* r;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // public System.Predicate`1<UnityEngine.Renderer> <>9__0
    // Size: 0x8
    // Offset: 0x18
    ::System::Predicate_1<::UnityEngine::Renderer*>* $$9__0;
    // Field size check
    static_assert(sizeof(::System::Predicate_1<::UnityEngine::Renderer*>*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Renderer r
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn_r();
    // Get instance field reference: public System.Predicate`1<UnityEngine.Renderer> <>9__0
    [[deprecated("Use field access instead!")]] ::System::Predicate_1<::UnityEngine::Renderer*>*& dyn_$$9__0();
    // public System.Void .ctor()
    // Offset: 0xC26094
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_MeshBakerGrouperCore::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::MB3_MeshBakerGrouperCore::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_MeshBakerGrouperCore::$$c__DisplayClass3_0*, creationType>()));
    }
    // System.Boolean <DoClustering>b__0(UnityEngine.Renderer x)
    // Offset: 0xC263B8
    bool $DoClustering$b__0(::UnityEngine::Renderer* x);
  }; // DigitalOpus.MB.Core.MB3_MeshBakerGrouperCore/<>c__DisplayClass3_0
  #pragma pack(pop)
  static check_size<sizeof(MB3_MeshBakerGrouperCore::$$c__DisplayClass3_0), 24 + sizeof(::System::Predicate_1<::UnityEngine::Renderer*>*)> __DigitalOpus_MB_Core_MB3_MeshBakerGrouperCore_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(MB3_MeshBakerGrouperCore::$$c__DisplayClass3_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshBakerGrouperCore::$$c__DisplayClass3_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshBakerGrouperCore::$$c__DisplayClass3_0::$DoClustering$b__0
// Il2CppName: <DoClustering>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB3_MeshBakerGrouperCore::$$c__DisplayClass3_0::*)(::UnityEngine::Renderer*)>(&DigitalOpus::MB::Core::MB3_MeshBakerGrouperCore::$$c__DisplayClass3_0::$DoClustering$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "Renderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshBakerGrouperCore::$$c__DisplayClass3_0*), "<DoClustering>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
