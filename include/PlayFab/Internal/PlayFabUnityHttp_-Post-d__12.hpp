// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.Internal.PlayFabUnityHttp
#include "PlayFab/Internal/PlayFabUnityHttp.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::Internal
namespace PlayFab::Internal {
  // Forward declaring type: CallRequestContainer
  class CallRequestContainer;
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::Internal::PlayFabUnityHttp::$Post$d__12);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::Internal::PlayFabUnityHttp::$Post$d__12*, "PlayFab.Internal", "PlayFabUnityHttp/<Post>d__12");
// Type namespace: PlayFab.Internal
namespace PlayFab::Internal {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.Internal.PlayFabUnityHttp/<Post>d__12
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: AD2B94
  class PlayFabUnityHttp::$Post$d__12 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public PlayFab.Internal.CallRequestContainer reqContainer
    // Size: 0x8
    // Offset: 0x20
    ::PlayFab::Internal::CallRequestContainer* reqContainer;
    // Field size check
    static_assert(sizeof(::PlayFab::Internal::CallRequestContainer*) == 0x8);
    // public PlayFab.Internal.PlayFabUnityHttp <>4__this
    // Size: 0x8
    // Offset: 0x28
    ::PlayFab::Internal::PlayFabUnityHttp* $$4__this;
    // Field size check
    static_assert(sizeof(::PlayFab::Internal::PlayFabUnityHttp*) == 0x8);
    // private UnityEngine.Networking.UnityWebRequest <www>5__2
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Networking::UnityWebRequest* $www$5__2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Networking::UnityWebRequest*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator ::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // Get instance field reference: private System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: private System.Object <>2__current
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$$2__current();
    // Get instance field reference: public PlayFab.Internal.CallRequestContainer reqContainer
    [[deprecated("Use field access instead!")]] ::PlayFab::Internal::CallRequestContainer*& dyn_reqContainer();
    // Get instance field reference: public PlayFab.Internal.PlayFabUnityHttp <>4__this
    [[deprecated("Use field access instead!")]] ::PlayFab::Internal::PlayFabUnityHttp*& dyn_$$4__this();
    // Get instance field reference: private UnityEngine.Networking.UnityWebRequest <www>5__2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Networking::UnityWebRequest*& dyn_$www$5__2();
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xBBB340
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayFabUnityHttp::$Post$d__12* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::Internal::PlayFabUnityHttp::$Post$d__12::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayFabUnityHttp::$Post$d__12*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xBBB974
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xBBB978
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xBBC144
    ::Il2CppObject* System_Collections_Generic_IEnumerator$System_Object$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xBBC14C
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xBBC1AC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // PlayFab.Internal.PlayFabUnityHttp/<Post>d__12
  #pragma pack(pop)
  static check_size<sizeof(PlayFabUnityHttp::$Post$d__12), 48 + sizeof(::UnityEngine::Networking::UnityWebRequest*)> __PlayFab_Internal_PlayFabUnityHttp_$Post$d__12SizeCheck;
  static_assert(sizeof(PlayFabUnityHttp::$Post$d__12) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::Internal::PlayFabUnityHttp::$Post$d__12::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: PlayFab::Internal::PlayFabUnityHttp::$Post$d__12::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Internal::PlayFabUnityHttp::$Post$d__12::*)()>(&PlayFab::Internal::PlayFabUnityHttp::$Post$d__12::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Internal::PlayFabUnityHttp::$Post$d__12*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Internal::PlayFabUnityHttp::$Post$d__12::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (PlayFab::Internal::PlayFabUnityHttp::$Post$d__12::*)()>(&PlayFab::Internal::PlayFabUnityHttp::$Post$d__12::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Internal::PlayFabUnityHttp::$Post$d__12*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Internal::PlayFabUnityHttp::$Post$d__12::System_Collections_Generic_IEnumerator$System_Object$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<System.Object>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (PlayFab::Internal::PlayFabUnityHttp::$Post$d__12::*)()>(&PlayFab::Internal::PlayFabUnityHttp::$Post$d__12::System_Collections_Generic_IEnumerator$System_Object$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Internal::PlayFabUnityHttp::$Post$d__12*), "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Internal::PlayFabUnityHttp::$Post$d__12::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayFab::Internal::PlayFabUnityHttp::$Post$d__12::*)()>(&PlayFab::Internal::PlayFabUnityHttp::$Post$d__12::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Internal::PlayFabUnityHttp::$Post$d__12*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::Internal::PlayFabUnityHttp::$Post$d__12::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (PlayFab::Internal::PlayFabUnityHttp::$Post$d__12::*)()>(&PlayFab::Internal::PlayFabUnityHttp::$Post$d__12::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::Internal::PlayFabUnityHttp::$Post$d__12*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
