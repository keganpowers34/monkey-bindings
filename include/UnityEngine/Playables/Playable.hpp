// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayable
#include "UnityEngine/Playables/IPlayable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.PlayableHandle
#include "UnityEngine/Playables/PlayableHandle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::Playable, "UnityEngine.Playables", "Playable");
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Playables.Playable
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: A6C0B8
  struct Playable/*, public ::System::ValueType, public ::UnityEngine::Playables::IPlayable, public ::System::IEquatable_1<::UnityEngine::Playables::Playable>*/ {
    public:
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Playables::PlayableHandle m_Handle;
    // Field size check
    static_assert(sizeof(::UnityEngine::Playables::PlayableHandle) == 0xC);
    public:
    // Creating value type constructor for type: Playable
    constexpr Playable(::UnityEngine::Playables::PlayableHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Playables::IPlayable
    operator ::UnityEngine::Playables::IPlayable() noexcept {
      return *reinterpret_cast<::UnityEngine::Playables::IPlayable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Playables::Playable>
    operator ::System::IEquatable_1<::UnityEngine::Playables::Playable>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Playables::Playable>*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::Playables::PlayableHandle
    constexpr operator ::UnityEngine::Playables::PlayableHandle() const noexcept {
      return m_Handle;
    }
    // Get static field: static private readonly UnityEngine.Playables.Playable m_NullPlayable
    static ::UnityEngine::Playables::Playable _get_m_NullPlayable();
    // Set static field: static private readonly UnityEngine.Playables.Playable m_NullPlayable
    static void _set_m_NullPlayable(::UnityEngine::Playables::Playable value);
    // Get instance field reference: private UnityEngine.Playables.PlayableHandle m_Handle
    [[deprecated("Use field access instead!")]] ::UnityEngine::Playables::PlayableHandle& dyn_m_Handle();
    // static public UnityEngine.Playables.Playable get_Null()
    // Offset: 0x1527FA0
    static ::UnityEngine::Playables::Playable get_Null();
    // static public UnityEngine.Playables.Playable Create(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount)
    // Offset: 0x1528008
    static ::UnityEngine::Playables::Playable Create(::UnityEngine::Playables::PlayableGraph graph, int inputCount);
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x9B951C
    // ABORTED: conflicts with another method.  Playable(::UnityEngine::Playables::PlayableHandle handle);
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0x9B9524
    ::UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Type GetPlayableType()
    // Offset: 0x9B9530
    ::System::Type* GetPlayableType();
    // public System.Boolean Equals(UnityEngine.Playables.Playable other)
    // Offset: 0x9B9558
    bool Equals(::UnityEngine::Playables::Playable other);
    // static private System.Void .cctor()
    // Offset: 0x15282BC
    static void _cctor();
  }; // UnityEngine.Playables.Playable
  #pragma pack(pop)
  static check_size<sizeof(Playable), 0 + sizeof(::UnityEngine::Playables::PlayableHandle)> __UnityEngine_Playables_PlayableSizeCheck;
  static_assert(sizeof(Playable) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Playables::Playable::get_Null
// Il2CppName: get_Null
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (*)()>(&UnityEngine::Playables::Playable::get_Null)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::Playable), "get_Null", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::Playable::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (*)(::UnityEngine::Playables::PlayableGraph, int)>(&UnityEngine::Playables::Playable::Create)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* inputCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::Playable), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, inputCount});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::Playable::Playable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Playables::Playable::GetHandle
// Il2CppName: GetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableHandle (UnityEngine::Playables::Playable::*)()>(&UnityEngine::Playables::Playable::GetHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::Playable), "GetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::Playable::GetPlayableType
// Il2CppName: GetPlayableType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (UnityEngine::Playables::Playable::*)()>(&UnityEngine::Playables::Playable::GetPlayableType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::Playable), "GetPlayableType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::Playable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Playables::Playable::*)(::UnityEngine::Playables::Playable)>(&UnityEngine::Playables::Playable::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::Playable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::Playable::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Playables::Playable::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::Playable), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
