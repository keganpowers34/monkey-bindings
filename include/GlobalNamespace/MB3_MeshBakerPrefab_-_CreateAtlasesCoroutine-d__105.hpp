// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MB3_MeshBakerPrefab
#include "GlobalNamespace/MB3_MeshBakerPrefab.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: DigitalOpus.MB.Core.MB3_TextureCombiner
#include "DigitalOpus/MB/Core/MB3_TextureCombiner.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: ProgressUpdateDelegate
  class ProgressUpdateDelegate;
  // Forward declaring type: MB2_EditorMethodsInterface
  class MB2_EditorMethodsInterface;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105*, "", "MB3_MeshBakerPrefab/<_CreateAtlasesCoroutine>d__105");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: MB3_MeshBakerPrefab/<_CreateAtlasesCoroutine>d__105
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AEE1B4
  class MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public DigitalOpus.MB.Core.MB3_TextureCombiner/CreateAtlasesCoroutineResult coroutineResult
    // Size: 0x8
    // Offset: 0x20
    ::DigitalOpus::MB::Core::MB3_TextureCombiner::CreateAtlasesCoroutineResult* coroutineResult;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB3_TextureCombiner::CreateAtlasesCoroutineResult*) == 0x8);
    // public MB3_MeshBakerPrefab <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::MB3_MeshBakerPrefab* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MB3_MeshBakerPrefab*) == 0x8);
    // public System.Single maxTimePerFrame
    // Size: 0x4
    // Offset: 0x30
    float maxTimePerFrame;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean saveAtlasesAsAssets
    // Size: 0x1
    // Offset: 0x34
    bool saveAtlasesAsAssets;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: saveAtlasesAsAssets and: progressInfo
    char __padding5[0x3] = {};
    // public DigitalOpus.MB.Core.ProgressUpdateDelegate progressInfo
    // Size: 0x8
    // Offset: 0x38
    ::DigitalOpus::MB::Core::ProgressUpdateDelegate* progressInfo;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::ProgressUpdateDelegate*) == 0x8);
    // public DigitalOpus.MB.Core.MB2_EditorMethodsInterface editorMethods
    // Size: 0x8
    // Offset: 0x40
    ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods;
    // Field size check
    static_assert(sizeof(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public DigitalOpus.MB.Core.MB3_TextureCombiner/CreateAtlasesCoroutineResult coroutineResult
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB3_TextureCombiner::CreateAtlasesCoroutineResult*& dyn_coroutineResult();
    // Get instance field reference: public MB3_MeshBakerPrefab <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MB3_MeshBakerPrefab*& dyn_$$4__this();
    // Get instance field reference: public System.Single maxTimePerFrame
    [[deprecated("Use field access instead!")]] float& dyn_maxTimePerFrame();
    // Get instance field reference: public System.Boolean saveAtlasesAsAssets
    [[deprecated("Use field access instead!")]] bool& dyn_saveAtlasesAsAssets();
    // Get instance field reference: public DigitalOpus.MB.Core.ProgressUpdateDelegate progressInfo
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::ProgressUpdateDelegate*& dyn_progressInfo();
    // Get instance field reference: public DigitalOpus.MB.Core.MB2_EditorMethodsInterface editorMethods
    [[deprecated("Use field access instead!")]] ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*& dyn_editorMethods();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1AA6B10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1AA6B3C
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1AA6B40
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1AA7124
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1AA712C
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1AA718C
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // MB3_MeshBakerPrefab/<_CreateAtlasesCoroutine>d__105
  #pragma pack(pop)
  static check_size<sizeof(MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105), 64 + sizeof(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*)> __GlobalNamespace_MB3_MeshBakerPrefab_$_CreateAtlasesCoroutine$d__105SizeCheck;
  static_assert(sizeof(MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105::*)()>(&GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105::*)()>(&GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105::*)()>(&GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105::*)()>(&GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105::*)()>(&GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MB3_MeshBakerPrefab::$_CreateAtlasesCoroutine$d__105*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
