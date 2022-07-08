// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.Utilities.InputActionTrace
#include "UnityEngine/InputSystem/Utilities/InputActionTrace.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: ActionEvent
  struct ActionEvent;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator, "UnityEngine.InputSystem.Utilities", "InputActionTrace/Enumerator");
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputActionTrace::Enumerator/*, public ::System::ValueType, public ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InputActionTrace::ActionEventPtr>*/ {
    public:
    public:
    // private readonly UnityEngine.InputSystem.Utilities.InputActionTrace m_Trace
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::InputSystem::Utilities::InputActionTrace* m_Trace;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Utilities::InputActionTrace*) == 0x8);
    // private readonly UnityEngine.InputSystem.LowLevel.ActionEvent* m_Buffer
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::InputSystem::LowLevel::ActionEvent* m_Buffer;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::ActionEvent*) == 0x8);
    // private readonly System.Int32 m_EventCount
    // Size: 0x4
    // Offset: 0x10
    int m_EventCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_EventCount and: m_CurrentEvent
    char __padding2[0x4] = {};
    // private UnityEngine.InputSystem.LowLevel.ActionEvent* m_CurrentEvent
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::InputSystem::LowLevel::ActionEvent* m_CurrentEvent;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::ActionEvent*) == 0x8);
    // private System.Int32 m_CurrentIndex
    // Size: 0x4
    // Offset: 0x20
    int m_CurrentIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Enumerator
    constexpr Enumerator(::UnityEngine::InputSystem::Utilities::InputActionTrace* m_Trace_ = {}, ::UnityEngine::InputSystem::LowLevel::ActionEvent* m_Buffer_ = {}, int m_EventCount_ = {}, ::UnityEngine::InputSystem::LowLevel::ActionEvent* m_CurrentEvent_ = {}, int m_CurrentIndex_ = {}) noexcept : m_Trace{m_Trace_}, m_Buffer{m_Buffer_}, m_EventCount{m_EventCount_}, m_CurrentEvent{m_CurrentEvent_}, m_CurrentIndex{m_CurrentIndex_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InputActionTrace::ActionEventPtr>
    operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InputActionTrace::ActionEventPtr>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::Utilities::InputActionTrace::ActionEventPtr>*>(this);
    }
    // Get instance field reference: private readonly UnityEngine.InputSystem.Utilities.InputActionTrace m_Trace
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Utilities::InputActionTrace*& dyn_m_Trace();
    // Get instance field reference: private readonly UnityEngine.InputSystem.LowLevel.ActionEvent* m_Buffer
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::ActionEvent*& dyn_m_Buffer();
    // Get instance field reference: private readonly System.Int32 m_EventCount
    [[deprecated("Use field access instead!")]] int& dyn_m_EventCount();
    // Get instance field reference: private UnityEngine.InputSystem.LowLevel.ActionEvent* m_CurrentEvent
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::LowLevel::ActionEvent*& dyn_m_CurrentEvent();
    // Get instance field reference: private System.Int32 m_CurrentIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_CurrentIndex();
    // public System.Void .ctor(UnityEngine.InputSystem.Utilities.InputActionTrace trace)
    // Offset: 0x9A393C
    Enumerator(::UnityEngine::InputSystem::Utilities::InputActionTrace* trace);
    // public System.Boolean MoveNext()
    // Offset: 0x9A3944
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x9A394C
    void Reset();
    // public System.Void Dispose()
    // Offset: 0x9A3958
    void Dispose();
    // public UnityEngine.InputSystem.Utilities.InputActionTrace/ActionEventPtr get_Current()
    // Offset: 0x9A395C
    ::UnityEngine::InputSystem::Utilities::InputActionTrace::ActionEventPtr get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x9A3964
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator
  #pragma pack(pop)
  static check_size<sizeof(InputActionTrace::Enumerator), 32 + sizeof(int)> __UnityEngine_InputSystem_Utilities_InputActionTrace_EnumeratorSizeCheck;
  static_assert(sizeof(InputActionTrace::Enumerator) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator::Enumerator
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator::*)()>(&UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator::*)()>(&UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator::*)()>(&UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::InputActionTrace::ActionEventPtr (UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator::*)()>(&UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator::*)()>(&UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Utilities::InputActionTrace::Enumerator), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
